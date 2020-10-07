//**************************************************************************************************
//
//     OSSIM Open Source Geospatial Data Processing Library
//     See top level LICENSE.txt file for license information
//
//     Author: oscar.kramer@maxar.com
//
//**************************************************************************************************

#include "ossimImgToImgTool.h"
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
#include <ossim/projection/ossimEquDistCylProjection.h>
#include <ossim/projection/ossimUtmProjection.h>

using namespace std;
using namespace ossim;

#define CINFO  ossimNotify(ossimNotifyLevel_INFO)
#define CWARN  ossimNotify(ossimNotifyLevel_WARN)
#define CFATAL ossimNotify(ossimNotifyLevel_FATAL)

const char* ossimImgToImgTool::DESCRIPTION  =
   "Image point to image point transformation utility for DeepCore feature detection.";
static const int VERSION_NUMBER = 1;

ossimImgToImgTool::ossimImgToImgTool()
:  m_featuresJson (nullptr)
{
   theStdOutProgress.setFlushStreamFlag(true);
}

ossimImgToImgTool::~ossimImgToImgTool()
{
}

void ossimImgToImgTool::setUsage(ossimArgumentParser& ap)
{
   // Add options.
   ossimApplicationUsage* au = ap.getApplicationUsage();
   ossimString usageString = ap.getApplicationName();
   usageString += " i2i [options] <input-image> [<output-image>]";
   au->setCommandLineUsage(usageString);

   au->addCommandLineOption("-e, --entry <n>",
                            "For multi-image file, specifies image entry to extract. "
                            "For list of entries use: \"ossim-info -i <image>\" ");
   au->addCommandLineOption("-g, --gsd, --meters <value>",
                            "Set the output resolution in meters. Implies resample to ortho space. "
                            "See --projection option. Cannot be used when an output image is specified.");
   au->addCommandLineOption("-i <input.geojson>",
                            "Input file containing the input image detection coordinates. "
                            "If not provided, the input geojson is expected on stdin.");
   au->addCommandLineOption("-o <output.geojson>",
                            "Output file containing the transformed output-image detection coordinates. "
                            "If not provided, the output geojson is written to stdout.");
   au->addCommandLineOption("-p, --projection <geo|utm>",
                            "Reproject to map projection (geographic or UTM) instead of an output image space. "
                            "Defaults to GSD of input image unless --gsd option is specifed. Cannot be used "
                            "when an output image is specified.");
   au->addCommandLineOption("-v, --version",
                            "Output version information and exit.");

   ostringstream descr;
   descr << DESCRIPTION << "\n\n"
      << "Reads the image coordinate geometries of the detections geojson (on stdin or file)\n"
      << "and, using the level 1 input image metadata and system-available elevation,\n"
      << "performs a ray trace of the 3D feature coordinates to obtain the corresponding output\n"
      << "image coordinates. The image coordinates are written in geojson to stdout or file.\n";
   au->setDescription(descr.str());

   // Base class has its own:
   ossimTool::setUsage(ap);
}

bool ossimImgToImgTool::initialize(ossimArgumentParser& ap)
{
   if (!ossimTool::initialize(ap))
      return false;
   if (m_helpRequested)
      return true;

   ossimString ts1, projType;
   ossimFilename inImgFile;
   ossimArgumentParser::ossimParameter sp1 (ts1);
   double gsd=0.0;
   int entryIdx=0;

   // Parse tool's command line:
   if ( ap.read("-e", sp1) || ap.read("--entry", sp1) )
      entryIdx = ts1.toUInt32();

   if ( ap.read("-g", sp1) || ap.read("--gsd", sp1) || ap.read("--meters", sp1) )
      gsd = ts1.toDouble();

   if ( ap.read("-i", sp1))
      m_inGsonFile = ts1;

   if ( ap.read("-o", sp1))
      m_outGsonFile = ts1;

   if ( ap.read("-p", sp1) || ap.read("--projection", sp1))
   {
      projType = ts1;
      if (projType != "geo" && projType != "utm")
      {
         CFATAL << "\n" << ap.getApplicationName()
                << " -- Only \"utm\" or \"geo\" permitted for projection." << endl;
         ap.getApplicationUsage()->write(ossimNotify(ossimNotifyLevel_FATAL));
         return false;
      }
   }

   if ( ap.read("-v") || ap.read("--version"))
   {
      CINFO << "\n"<<ap.getApplicationName()<<" version "<<VERSION_NUMBER<<"\n"<<endl;
      m_helpRequested = true;
      return true;
   }

   if ( ap.argc() < 2 )
   {
      CFATAL<<"\n"<<ap.getApplicationName()<<" -- input image filename required."<<endl;
      return false;
   }
   inImgFile = ap.argv()[1];

   if ( ap.argc() > 2 )
      m_outImgFile = ap.argv()[2];

   // Validate command line options and arguments combination:
   if (!m_outImgFile.empty() && (!projType.empty() || gsd > 0.0))
   {
      CFATAL<<"\n"<<ap.getApplicationName()<<" -- Cannot specify an output image filename and GSD or projection."
                                             " The arguments are mutually exclusive."<<endl;
      ap.getApplicationUsage()->write(ossimNotify(ossimNotifyLevel_FATAL));
      return false;
   }

   // Establish input image geometry:
   ossimRefPtr<ossimImageHandler> handler = ossimImageHandlerRegistry::instance()->open(inImgFile);
   if (!handler)
   {
      CFATAL << "\nNull image handler returned for input file <"<<inImgFile<<">!" << endl;
      return false;
   }
   handler->setCurrentEntry(entryIdx);
   m_inGeom = handler->getImageGeometry();
   if (!m_inGeom)
   {
      CFATAL << "\nNull geometry returned from input image handler."<< endl;
      return false;
   }

   // Establish output image geometry:
   initOutputGeom(projType, gsd);

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

bool ossimImgToImgTool::initOutputGeom (const ossimString& projType, const double& gsd)
{
   if (m_outImgFile.empty())
   {
      // No output image, so use ortho space as output image:
      ossimRefPtr<ossimMapProjection> proj = 0;
      ossimGrect bgrect;
      m_inGeom->getBoundingGroundRect(bgrect);
      ossimGpt origin(bgrect.midPoint());
      if (projType == "utm")
         proj = new ossimUtmProjection(ossimEllipsoid(), origin);
      else
         proj = new ossimEquDistCylProjection(ossimEllipsoid(), origin);

      ossimDpt gsd2d(gsd, gsd);
      if (gsd == 0.0)
         m_inGeom->getMetersPerPixel(gsd2d);

      proj->setMetersPerPixel(gsd2d);
      m_outGeom = new ossimImageGeometry(nullptr, proj.get());
   }
   else
   {
      // Output image provided, use its geometry as the output:
      ossimRefPtr<ossimImageHandler> handler =
         ossimImageHandlerRegistry::instance()->open(m_outImgFile);
      if (!handler)
      {
         CFATAL<<"\nNull image handler returned for output file <"<<m_outImgFile<<">!"<<endl;
         return false;
      }
      m_outGeom = handler->getImageGeometry();
      if (!m_outGeom)
      {
         CFATAL << "\nNull geometry returned from output image handler."<< endl;
         return false;
      }
   }
   return true;
}

bool ossimImgToImgTool::execute()
{
   if (!m_featuresJson->isMember("features"))
   {
      CFATAL << "ossimImgToImgTool::execute() -- ERROR \"features\" node not found in input"
                " detects JSON."<< endl;
      return false;
   }

   Json::Value& featuresList = (*m_featuresJson)["features"];
   int numFeatures = featuresList.size();
   if (!m_outGsonFile.empty())
      CINFO << "\nProcessing " << numFeatures << " features..." << endl;

   ossimDpt inPt, outPt;
   ossimGpt gpt;

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
      for (int vertexIdx=0; vertexIdx<numVertices; ++vertexIdx)
      {
         inPt.x = im_coords[vertexIdx][0].asDouble();
         inPt.y = im_coords[vertexIdx][1].asDouble();

         m_inGeom->localToWorld(inPt, gpt);
         m_outGeom->worldToLocal(gpt, outPt);

         im_coords[vertexIdx][0] = outPt.x;
         im_coords[vertexIdx][1] = outPt.y;
      }

      im_poly["coordinates"][0] = im_coords;
      featuresList[featureIdx]["properties"]["im_coords"] = im_poly;
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
      CINFO << "\nWrote transformed feature image points to " << m_outGsonFile << "\n" << endl;
   }

   return true;
}

