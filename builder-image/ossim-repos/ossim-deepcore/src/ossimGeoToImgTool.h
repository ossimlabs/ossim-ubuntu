//**************************************************************************************************
//
//     OSSIM Open Source Geospatial Data Processing Library
//     See top level LICENSE.txt file for license information
//
//     Author: oscar.kramer@maxar.com
//
//**************************************************************************************************

#ifndef ossimGndToImgTool_HEADER
#define ossimGndToImgTool_HEADER

#include <ossim/base/ossimFilename.h>
#include <ossim/base/ossimKeywordlist.h>
#include <ossim/util/ossimTool.h>
#include <ossim/base/ossimRefPtr.h>
#include <ossim/imaging/ossimSingleImageChain.h>

/*!
 *  ossimTool class for performing point projections to/from ground from/to image.
 */
class OSSIMDLLEXPORT ossimGeoToImgTool : public ossimTool
{
public:
   ossimGeoToImgTool();

   ~ossimGeoToImgTool() override;

   bool initialize(ossimArgumentParser& ap) override;

   ossimString getClassName() const override { return "ossimGeoToImgTool"; }

   bool execute() override;

   /** Used by ossimUtilityFactory */
   static const char* DESCRIPTION;

protected:
   void setUsage(ossimArgumentParser& ap) override;

   ossimFilename m_inGsonFile;
   ossimFilename m_outGsonFile;
   std::istream* m_inGsonStream;
   std::ostream* m_outGsonStream;
   Json::Value* m_featuresJson;
   ossimRefPtr<ossimImageGeometry> m_geom;
   ossimFilename m_featuresFile;
};

#endif