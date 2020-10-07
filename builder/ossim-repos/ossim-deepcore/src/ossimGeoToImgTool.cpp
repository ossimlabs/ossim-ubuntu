//**************************************************************************************************
//
//     OSSIM Open Source Geospatial Data Processing Library
//     See top level LICENSE.txt file for license information
//
//     Author: oscar.kramer@maxar.com
//
//**************************************************************************************************

#include "ossimGeoToImgTool.h"
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

using namespace std;
using namespace ossim;

#define CINFO  ossimNotify(ossimNotifyLevel_INFO)
#define CWARN  ossimNotify(ossimNotifyLevel_WARN)
#define CFATAL ossimNotify(ossimNotifyLevel_FATAL)

const char* ossimGeoToImgTool::DESCRIPTION  =
   "Geographic to image point transformation utility for DeepCore feature detection.";
static const int VERSION_NUMBER = 1;

ossimGeoToImgTool::ossimGeoToImgTool()
:  m_featuresJson (nullptr)
{
   theStdOutProgress.setFlushStreamFlag(true);
}

ossimGeoToImgTool::~ossimGeoToImgTool()
{
}

void ossimGeoToImgTool::setUsage(ossimArgumentParser& ap)
{
   // Add options.
   ossimApplicationUsage* au = ap.getApplicationUsage();
   ossimString usageString = ap.getApplicationName();
   usageString += " g2i [options] <input-image>";
   au->setCommandLineUsage(usageString);

   au->addCommandLineOption("-e, --entry <n>",
                            "For multi-image file, specifies image entry to extract. "
                            "For list of entries use: \"ossim-info -i <image>\" ");
   au->addCommandLineOption("-i <input.geojson>",
                            "Input file containing the detection geographic coordinates. "
                            "If not provided, the input geojson is expected on stdin.");
   au->addCommandLineOption("-o <output.geojson>",
                            "Output file containing the detection image coordinates. "
                            "If not provided, the output geojson is written to stdout.");
   au->addCommandLineOption("-v, --version",
                            "Output version information and exit.");

   ostringstream descr;
   descr << DESCRIPTION << "\n\n"
      << "Reads the geographic coordinate geometries of the detections (on stdin or file)\n"
      << "and, using the level 1 (raw) input image metadata and system-available elevation,\n"
      << "performs a ray trace of the 3D feature coordinates to obtain the corresponding image\n"
      << "(x, y) coordinates. The image coordinates are written in geojson to stdout or file\n"
      << "if -o option is specified. The image data is saved to the custom\n"
      << "\"features.properties.im_coords\" JSON entry as a geometry containing coordinates as\n"
      << "[x, y] (i.e., [col, row]).";
   au->setDescription(descr.str());

   // Base class has its own:
   ossimTool::setUsage(ap);
}

bool ossimGeoToImgTool::initialize(ossimArgumentParser& ap)
{
   if (!ossimTool::initialize(ap))
      return false;
   if (m_helpRequested)
      return true;

   ossimString ts1;
   ossimArgumentParser::ossimParameter sp1 (ts1);
   ossimFilename imageFile, outputFile;
   int entryIdx=0;

   // Parse tool's command line:
   if ( ap.read("-e", sp1) || ap.read("--entry", sp1) )
      entryIdx = ts1.toUInt32();
   if ( ap.read("-i", sp1))
      m_inGsonFile = ts1;

   if ( ap.read("-o", sp1))
      m_outGsonFile = ts1;

   if ( ap.read("-v") || ap.read("--version"))
   {
      CINFO << "\n"<<ap.getApplicationName()<<" version "<<VERSION_NUMBER<<"\n"<<endl;
      m_helpRequested = true;
      return true;
   }
   if ( ap.argc() < 2 )
   {
      CFATAL<<"\n"<<ap.getApplicationName()<<" -- image filename required."<<endl;
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

   return true;
}

bool ossimGeoToImgTool::execute()
{
   if (!m_featuresJson->isMember("features"))
   {
      CFATAL << "ossimGeoToImgTool::execute() -- ERROR \"features\" node not found in input"
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
      const Json::Value& feature = featuresList[featureIdx];
      const Json::Value& geometry = feature["geometry"];
      ossimString ftype = geometry["type"].asString();
      if (ftype != "Polygon")
         continue;

      Json::Value im_coords;
      im_coords["type"] = "Polygon";
      Json::Value im_points;

      // Note the [0] index means only simple polygons supported (no holes):
      const Json::Value& geoCoords = geometry["coordinates"][0];
      int numVertices = geoCoords.size();
      for (int vertexIdx=0; vertexIdx<numVertices; ++vertexIdx)
      {
         geoPt.lon = geoCoords[vertexIdx][0].asDouble();
         geoPt.lat = geoCoords[vertexIdx][1].asDouble();

         // Performs elevation lookup using original DTED (presumably level 0), and
         // project that 3D point back to the imaging plane:
         geoPt.hgt = elevMgr->getHeightAboveEllipsoid(geoPt);
         m_geom->worldToLocal(geoPt, imgPt);
         im_points[vertexIdx][0] = imgPt.x;
         im_points[vertexIdx][1] = imgPt.y;
      }

      im_coords["coordinates"][0] = im_points;
      featuresList[featureIdx]["properties"]["im_coords"] = im_coords;
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
      CINFO << "\nWrote feature image points to " << m_outGsonFile << "\n" << endl;
   }

   return true;
}

