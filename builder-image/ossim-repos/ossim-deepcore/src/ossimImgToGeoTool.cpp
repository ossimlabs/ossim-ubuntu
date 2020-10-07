//**************************************************************************************************
//
//     OSSIM Open Source Geospatial Data Processing Library
//     See top level LICENSE.txt file for license information
//
//     Author: oscar.kramer@maxar.com
//
//**************************************************************************************************

#include "ossimImgToGeoTool.h"
#include "ossimDeepCoreNitfProjection.h"
#include <ossim/init/ossimInit.h>
#include <ossim/base/ossimApplicationUsage.h>
#include <ossim/base/ossimApplicationUsage.h>
#include <ossim/base/ossimNotify.h>
#include <ossim/base/ossimKeywordNames.h>
#include <ossim/base/ossimException.h>
#include <ossim/imaging/ossimBandMergeSource.h>
#include <ossim/imaging/ossimHistogramRemapper.h>
#include <ossim/base/ossimMultiResLevelHistogram.h>
#include <ossim/base/ossimMultiBandHistogram.h>
#include <ossim/imaging/ossimImageHistogramSource.h>
#include <iostream>
#include <ossim/imaging/ossimHistogramWriter.h>
#include <ossim/base/ossimStdOutProgress.h>
#include <ossim/imaging/ossimImageHandlerRegistry.h>
#include <ossim/projection/ossimImageViewProjectionTransform.h>
#include <ossim/base/ossimAffineTransform.h>
#include <ossim/elevation/ossimElevManager.h>
#include <ossim/imaging/ossimNitfTileSource.h>
#include <ossim/support_data/ossimNitfGeolobTag.h>

using namespace std;
using namespace ossim;

#define CINFO  ossimNotify(ossimNotifyLevel_INFO)
#define CWARN  ossimNotify(ossimNotifyLevel_WARN)
#define CFATAL ossimNotify(ossimNotifyLevel_FATAL)

const char* ossimImgToGeoTool::DESCRIPTION  =
   "Image point to geographic coordinate transformation utility for DeepCore feature detection.";

// VERSION_NUMBER = 1 Initial functionality
// VERSION_NUMBER = 2 Added QGIS
static const int VERSION_NUMBER = 2;

ossimImgToGeoTool::ossimImgToGeoTool()
:  m_featuresJson (nullptr)
{
   theStdOutProgress.setFlushStreamFlag(true);
}

ossimImgToGeoTool::~ossimImgToGeoTool()
{
}

void ossimImgToGeoTool::setUsage(ossimArgumentParser& ap)
{
   // Add options.
   ossimApplicationUsage* au = ap.getApplicationUsage();
   ossimString usageString = ap.getApplicationName();
   usageString += " i2g [options] <input-image>";
   au->setCommandLineUsage(usageString);

   au->addCommandLineOption("-e, --entry <n>",
                            "For multi-image file, specifies image entry to extract. "
                            "For list of entries use: \"ossim-info -i <image>\". Defaults to 0.");
   au->addCommandLineOption("-i <input.geojson>",
                            "Input file containing the input image detection coordinates. "
                            "If not provided, the input geojson is expected on stdin.");
   au->addCommandLineOption("-o <output.geojson>",
                            "Output file containing the transformed output-image detection coordinates. "
                            "If not provided, the output geojson is written to stdout.");
   au->addCommandLineOption("-q, --qgis",
                            "Use bilinear interpolator to compute geo-coordinates from image corner "
                            "points, for rendering in QGIS.");
   au->addCommandLineOption("-v, --version",
                            "Output version information and exit.");

   ostringstream descr;
   descr << DESCRIPTION << "\n\n"
      << "Reads the image coordinate geometries of the detections (on stdin or file)\n"
      << "and, using the level 1 (raw) input image metadata and system-available elevation,\n"
      << "performs a ray trace of the 2D feature coordinates to obtain the corresponding geographic\n"
      << "(lon, lat) coordinates. The geo coordinates are written to stdout or filename specified \n"
      << "with -o option. The geo data is saved to the custom\n"
      << "\"geometry.coordinates[0]\" JSON array entry containing coordinates as [lat,lon].";
   au->setDescription(descr.str());

   // Base class has its own:
   ossimTool::setUsage(ap);
}

bool ossimImgToGeoTool::initialize(ossimArgumentParser& ap)
{
   if (!ossimTool::initialize(ap))
      return false;
   if (m_helpRequested)
      return true;

   ossimString ts1;
   ossimArgumentParser::ossimParameter sp1 (ts1);
   ossimFilename imageFile, outputFile;
   int entryIdx=0;
   bool useBilinearProj = false;

   // Parse tool's command line:
   if ( ap.read("-e", sp1) || ap.read("--entry", sp1) )
      entryIdx = ts1.toUInt32();
   if ( ap.read("-vs") || ap.read("--version"))
   {
      CINFO << "\n"<<ap.getApplicationName()<<" version "<<VERSION_NUMBER<<"\n"<<endl;
      m_helpRequested = true;
      return true;
   }
   if ( ap.read("-q") || ap.read("--qgis") )
      useBilinearProj = true;
   if ( ap.read("-i", sp1))
      m_inGsonFile = ts1;

   if ( ap.read("-o", sp1))
      m_outGsonFile = ts1;

   if ( ap.argc() < 2 )
   {
      CFATAL<<"\n"<<ap.getApplicationName()<<" -- input image filename required."<<endl;
      return false;
   }
   imageFile = ap.argv()[1];

   // Establish input image geometry:
   ossimRefPtr<ossimImageHandler> handler = ossimImageHandlerRegistry::instance()->open(imageFile);
   if (!handler)
   {
      CFATAL << "\nNull image handler returned for input file <"<<imageFile<<">!" << endl;
      return false;
   }
   handler->setCurrentEntry(entryIdx);
   m_geom = handler->getImageGeometry();
   if (!m_geom)
   {
      CFATAL << "\nNull geometry returned from handler!" << endl;
      return false;
   }

   // Establish input GEOJSON document:
   if (m_inGsonFile.empty())
      m_inGsonStream = &cin;
   else
   {
      m_inGsonStream = new ifstream(m_inGsonFile.string());
      if (m_inGsonStream->fail())
      {
         CFATAL << "\nError encountered reading input geojson file <" << m_inGsonFile << ">."
                << endl;
         return false;
      }
   }

   // Establish output GEOJSON destination:
   if (m_outGsonFile.empty())
      m_outGsonStream = &cout;
   else
   {
      m_outGsonStream = new ofstream(m_outGsonFile.string());
      if (m_outGsonStream->fail())
      {
         CFATAL << "\nError encountered creating output geojson file <" << m_outGsonFile << ">."
                << endl;
         return false;
      }
   }

   // If bilinear projection is to be used, establish it here from corner points:
   if (useBilinearProj)
      initBilinearProj(handler);

   // Establish JSON document:
   m_featuresJson = new Json::Value;
   Json::CharReaderBuilder rbuilder;
   string errs;
   if ( !Json::parseFromStream(rbuilder, *m_inGsonStream, m_featuresJson, &errs))
   {
      // report to the user the failure and their locations in the document.
      CFATAL<< errs << "\n";
      return false;
   }

   if (m_featuresJson->empty())
   {
      CFATAL << "\nEmpty input geojson document! \n";
      return false;
   }
   if (!m_inGsonFile.empty())
      (dynamic_cast<ifstream*>(m_inGsonStream))->close();

   return true;
}

void ossimImgToGeoTool::initBilinearProj(ossimRefPtr<ossimImageHandler> handler)
{
   auto nitfSource = dynamic_cast<ossimNitfTileSource*>(handler.get());
   ossimRefPtr<ossimBilinearProjection> bilinearProj;
   if (nitfSource)
   {
      const ossimNitfImageHeader *nitfHeader = nitfSource->getCurrentImageHeader();
      if (nitfHeader)
      {
         ossimDeepCoreNitfProjection dcproj(nitfHeader);
         bilinearProj = dcproj.getBilinearProjection();
         if (bilinearProj)
         {
            CINFO<<"\nSuccessfully replaced the image rigorous projection with bilinear for QGIS mode."<<endl;
            m_geom->setProjection(bilinearProj.get());
         }
      }
   }
   if (!bilinearProj)
   {
      CINFO<< "\nWARNING: Could not replaced the image rigorous projection with bilinear for "
              "requested QGIS mode. Defaulting to normal rigorous mode." << endl;
   }

}

bool ossimImgToGeoTool::execute()
{
   if (!m_featuresJson->isMember("features"))
   {
      CFATAL << "ossimImgToGeoTool::execute() -- ERROR \"features\" node not found in input"
                " detects JSON."<< endl;
      return false;
   }

   Json::Value& featuresList = (*m_featuresJson)["features"];
   int numFeatures = featuresList.size();
   if (!m_outGsonFile.empty())
      CINFO<<"\nProcessing "<<numFeatures<<" features..."<<endl;

   ossimGpt geoPt;
   ossimDpt imgPt;
   ossimElevManager* elevMgr = ossimElevManager::instance();

   // Loop over all features and all vertices for each feature to perform transform:
   for (int featureIdx=0; featureIdx<numFeatures; ++featureIdx)
   {
      Json::Value& feature = featuresList[featureIdx];
      Json::Value& im_poly = feature["properties"]["im_coords"];
      ossimString ftype = im_poly["type"].asString();
      if (ftype != "Polygon")
         continue;

      // Note the [0] index means only simple polygons supported (no holes):
      Json::Value& im_coords = im_poly["coordinates"][0];
      int numVertices = im_coords.size();

      Json::Value geometry;
      geometry["type"] = "Polygon";
      Json::Value geoCoords;

      for (int vertexIdx=0; vertexIdx<numVertices; ++vertexIdx)
      {
         imgPt.x = im_coords[vertexIdx][0].asDouble();
         imgPt.y = im_coords[vertexIdx][1].asDouble();

         m_geom->localToWorld(imgPt, geoPt);

         geoCoords[vertexIdx][0] = geoPt.lon;
         geoCoords[vertexIdx][1] = geoPt.lat;
      }
      geometry["coordinates"][0] = geoCoords;
      feature["geometry"] = geometry;
   }

   if (!m_outGsonFile.empty())
   {
      vector<ossimFilename> openDems;
      ossimElevManager::instance()->getOpenCellList(openDems);
      CINFO<<"\nElevation cells referenced:"<<endl;
      for (auto& f : openDems)
         CINFO<<"  "<<f<<endl;
   }

   // Dump the updated JSON document to disk:
   *m_outGsonStream << *m_featuresJson;
   if (m_outGsonStream->fail())
   {
      CFATAL<<"Error encountered writing output GeoJSON stream."<<endl;
      return false;
   }
   if (!m_outGsonFile.empty())
   {
      ofstream* ofstr = dynamic_cast<ofstream *>(m_outGsonStream);
      ofstr->close();
      CINFO << "\nWrote feature geo points to " << m_outGsonFile << "\n" << endl;
   }

   return true;
}

