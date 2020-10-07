//**************************************************************************************************
//
//     OSSIM Open Source Geospatial Data Processing Library
//     See top level LICENSE.txt file for license information
//
//     Author: oscar.kramer@maxar.com
//
//**************************************************************************************************

#include "ossimDeepCoreTool.h"
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

using namespace std;

const char* ossimDeepCoreTool::DESCRIPTION  =
   "Performs assorted pre-processing of images for DeepCore AI processing.";

ossimDeepCoreTool::ossimDeepCoreTool()
   :  m_doHistoStretch(true),
      m_remapToBits(0),
      m_gsd(0.0),
      m_entry(0),
      m_brightness(0.0),
      m_contrast(0.0)
{
   theStdOutProgress.setFlushStreamFlag(true);
}

ossimDeepCoreTool::~ossimDeepCoreTool()
{
}

void ossimDeepCoreTool::setUsage(ossimArgumentParser& ap)
{
   // Add options.
   ossimApplicationUsage* au = ap.getApplicationUsage();
   ossimString usageString = ap.getApplicationName();
   usageString += " deepcore [options] <input-image> [<output-image>]";
   au->setCommandLineUsage(usageString);

   // Set the command line options:
   au->setDescription(DESCRIPTION);

   au->addCommandLineOption("--brightness <gain>",
                            "Apply brightness gain to input image. Valid range: -1.0 to 1.0.");
   au->addCommandLineOption("--contrast <gain>",
                            "Apply contrast gain to input image. Valid range: -1.0 to 1.0.");
   au->addCommandLineOption("-e, --entry <n>",
                            "For multi-image file, specifies image entry to extract."
                            "For list of entries use: \"ossim-info -i <image>\". ");
   au->addCommandLineOption("-g, --gsd, --meters <value>",
                            "Set the output resolution, in meters. Default is same as input "
                            "resolution (no resampling).");
   au->addCommandLineOption("-h, --help",
                            "Displays this usage. ");
   au->addCommandLineOption("-r, --remap <bits>",
                            "Optionally remaps the image to specified number of bits between 8-16.");
   au->addCommandLineOption("--scale-to-8-bit",
                            "Optionally remaps the image to 8-bit. Same as \"--remap 8\".");
   au->addCommandLineOption("-s, --histo-stretch",
                            "Optionally performs histogram stretch (auto-min/max). ");
   au->addCommandLineOption("--sharpen-mode <mode>",
                            "Applies sharpness to image chain(s). Valid modes: \"light\", \"medium\",\"heavy\".");

   // Base class has its own:
   ossimTool::setUsage(ap);
}

bool ossimDeepCoreTool::initialize(ossimArgumentParser& ap)
{
   if (!ossimTool::initialize(ap))
      return false;
   if (m_helpRequested)
      return true;

   ossimString ts1;
   ossimArgumentParser::ossimParameter sp1 (ts1);

   if ( ap.read("--brightness", sp1) )
      m_brightness = ts1.toDouble();

   if ( ap.read("--contrast", sp1) )
      m_contrast = ts1.toDouble();

   if ( ap.read("-e", sp1) || ap.read("--entry", sp1) )
      m_entry = ts1.toUInt32();

   if ( ap.read("-g", sp1) || ap.read("--gsd", sp1) || ap.read("--meters", sp1) )
      m_gsd = ts1.toDouble();

   if ( ap.read("--remap-8bit") || ap.read("--scale-to-8-bit") )
      m_remapToBits = 8;

   if ( ap.read("-r", sp1) || ap.read("--remap", sp1) )
      m_remapToBits = ts1.toUInt32();

   if ( ap.read("-s") || ap.read("--histo-stretch") )
      m_doHistoStretch = true;

   if ( ap.read("--sharpen-mode", sp1) )
      m_sharpenMode = ts1;

   // Determine input filename:
   if ( ap.argc() > 1 )
      m_inputFilename = ap[1];

   if (!m_inputFilename.isReadable())
   {
      ossimNotify(ossimNotifyLevel_FATAL)<<"ossimDeepCoreTool::initialize() Input filename <"
                                         <<m_inputFilename<<"> was not specified or is not "
                                         <<"readable. Try again.\n"<<endl;
      return false;
   }

   // Establish output filename:
   if ( ap.argc() > 2 )
   {
      m_productFilename = ap[2];
   }
   try
   {
      initProcessingChain();
   }
   catch (ossimException& xe)
   {
      ossimNotify(ossimNotifyLevel_FATAL)<<xe.what()<<endl;
      return false;
   }

   return true;
}

void ossimDeepCoreTool::initProcessingChain()
{
   ostringstream errMsg ("\nossimDeepCoreTool::initProcessingChain() ERROR: ");

   ossimRefPtr<ossimImageHandler> handler =
      ossimImageHandlerRegistry::instance()->open(m_inputFilename);
   if (!handler)
   {
      errMsg<<"Could not open input image file at <"<<m_inputFilename<<">.";
      throw ossimException(errMsg.str());
   }
   if (m_entry)
      handler->setCurrentEntry(m_entry);
   m_procChain->add(handler.get());
   m_geom = handler->getImageGeometry();

   // Add histogram remapper if requested:
   if (m_doHistoStretch)
   {
      ossimRefPtr<ossimMultiResLevelHistogram> histogram = handler->getImageHistogram();
      if (!histogram)
      {
         // Need to create a histogram:
         ossimRefPtr<ossimImageHistogramSource> histoSource = new ossimImageHistogramSource;
         ossimRefPtr<ossimHistogramWriter> writer = new ossimHistogramWriter;
         histoSource->connectMyInputTo(0, handler.get());
         histoSource->enableSource();
         writer->connectMyInputTo(0, histoSource.get());
         ossimFilename histoFile;
         histoFile = handler->getFilenameWithThisExtension(ossimString("his"));
         writer->setFilename(histoFile);
         writer->addListener(&theStdOutProgress);
         writer->execute();
         histogram = handler->getImageHistogram();
         if (!histogram)
         {
            errMsg<<"Could not create histogram from <"<<histoFile<<">.";
            throw ossimException(errMsg.str());
         }
      }

      // Ready the histogram object in the processing chain:
      ossimRefPtr<ossimHistogramRemapper> histogramRemapper = new ossimHistogramRemapper();
      histogramRemapper->setEnableFlag(true);
      histogramRemapper->setStretchMode( ossimHistogramRemapper::LINEAR_AUTO_MIN_MAX );
      histogramRemapper->setHistogram(histogram);
      m_procChain->add(histogramRemapper.get());
   }

   if (m_remapToBits != 0)
   {
      // Add scalar remapper:
      ossimRefPtr<ossimScalarRemapper> scalarRemapper = new ossimScalarRemapper();
      ossimScalarType scalarType=OSSIM_SCALAR_UNKNOWN;
      switch (m_remapToBits)
      {
      case 8:
         scalarType = OSSIM_UINT8;
         break;
      case 9:
         scalarType = OSSIM_UINT9;
         break;
      case 10:
         scalarType = OSSIM_UINT10;
         break;
      case 11:
         scalarType = OSSIM_UINT11;
         break;
      case 12:
         scalarType = OSSIM_UINT12;
         break;
      case 13:
         scalarType = OSSIM_UINT13;
         break;
      case 14:
         scalarType = OSSIM_UINT14;
         break;
      case 15:
         scalarType = OSSIM_UINT15;
         break;
      case 16:
         scalarType = OSSIM_UINT16;
         break;
      default:
         errMsg<<"Remap bits specified = "<<m_remapToBits<<" is not allowed. "
               <<"Must be between 8-16.";
         throw ossimException(errMsg.str());
      }
      scalarRemapper->setOutputScalarType(scalarType);
      m_procChain->add(scalarRemapper.get());
   }

   if ( (m_brightness != 0.0)  ||  (m_contrast != 0.0) )
   {
      if (m_brightness < -1.0 || m_brightness > 1.0 || m_contrast < -1.0 || m_contrast > 1.0)
      {
         errMsg<<"Brightness or contrast values specifed must be between -1 and 1. Aborting.";
         throw ossimException(errMsg.str());
      }
      ossimRefPtr<ossimBrightnessContrastSource> bcs = new ossimBrightnessContrastSource();
      bcs->setBrightness(m_brightness);
      bcs->setBrightness(m_contrast);
      m_procChain->add(bcs.get());
   }

   if (!m_sharpenMode.empty())
   {
      ossimRefPtr<ossimImageSharpenFilter> sharpener = new ossimImageSharpenFilter();
      if (m_sharpenMode == "light")
         sharpener->setSharpenPercent(0.2);
      else if(m_sharpenMode == "medium")
         sharpener->setSharpenPercent(0.5);
      else if (m_sharpenMode == "heavy")
         sharpener->setSharpenPercent(0.8);
      else
      {
         errMsg<<"Sharpen mode provided = "<<m_sharpenMode<<" is not understood. "
               <<"Must be \"light\", \"medium\", or \"heavy\".";
         throw ossimException(errMsg.str());
      }
      m_procChain->add(sharpener.get());
   }

   // Check for scaling, need a resampler if non-zero:
   if (m_gsd > 0)
   {
      // First the IVT:
      ossimDpt inGsd = m_geom->getMetersPerPixel();
      if (inGsd.x == 0 || inGsd.y == 0 || inGsd.hasNans())
      {
         errMsg<<"Input GSD = "<<inGsd<<" is not allowed! Cannot continue.";
         throw ossimException(errMsg.str());
      }
      ossimDpt scale (m_gsd / inGsd.x, m_gsd / inGsd.y);
      ossimIpt inSize (m_geom->getImageSize());
      ossimIpt outSize (inSize.x/scale.x, inSize.y/scale.y);
      ossimRefPtr<ossimAffineTransform> transform = new ossimAffineTransform;
      transform->setScale(scale);
      ossimRefPtr<ossimImageGeometry> outGeom =
         new ossimImageGeometry(transform.get(), m_geom->getProjection());
      outGeom->setImageSize(outSize);
      ossimRefPtr<ossimImageViewProjectionTransform> ivt =
         new ossimImageViewProjectionTransform(m_geom.get(), outGeom.get());
      ossimRefPtr<ossimImageRenderer> renderer = new ossimImageRenderer;
      renderer->setImageViewTransform(ivt.get());
      renderer->getResampler()->setFilterType(ossimFilterResampler::ossimFilterResampler_TRIANGLE,
                                              ossimFilterResampler::ossimFilterResampler_TRIANGLE);
      m_procChain->add(renderer.get());
   }

   m_procChain->initialize();
}

bool ossimDeepCoreTool::execute()
{
   if (m_productFilename.empty())
   {
      m_productFilename = m_inputFilename.fileNoExtension() + "-remap";
      m_productFilename.setExtension(m_inputFilename.ext());
   }

   m_geom->getBoundingRect(m_aoiViewRect);

   // Parent class has service to create writer:
   m_writer = newWriter();
   m_writer->connectMyInputTo(0, m_procChain.get());

   // Add a listener to get percent complete.
   m_writer->addListener(&theStdOutProgress);

   // Write the file and external geometry:
   if(!m_writer->execute())
      return false;
   ossimNotify(ossimNotifyLevel_INFO)<<"Wrote product image to <"<<m_productFilename<<">"<<endl;

   if (!m_writer->writeExternalGeometryFile())
      return false;
   ossimNotify(ossimNotifyLevel_INFO)<<"Wrote product geometry to <"<<
                                     m_productFilename.fileNoExtension()<<".geom>"<<endl;

   return true;
}

