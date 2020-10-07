//**************************************************************************************************
//
//     OSSIM Open Source Geospatial Data Processing Library
//     See top level LICENSE.txt file for license information
//
//     Author: oscar.kramer@maxar.com
//
//**************************************************************************************************

#ifndef ossimImgToImgTool_HEADER
#define ossimImgToImgTool_HEADER

#include <ossim/base/ossimFilename.h>
#include <ossim/base/ossimKeywordlist.h>
#include <ossim/util/ossimTool.h>
#include <ossim/base/ossimRefPtr.h>
#include <ossim/imaging/ossimSingleImageChain.h>

/*!
 *  ossimTool class for performing point projections from image to new image.
 */
class OSSIMDLLEXPORT ossimImgToImgTool : public ossimTool
{
public:
   ossimImgToImgTool();

   ~ossimImgToImgTool() override;

   bool initialize(ossimArgumentParser& ap) override;

   ossimString getClassName() const override { return "ossimImgToImgTool"; }

   bool execute() override;

   /** Used by ossimUtilityFactory */
   static const char* DESCRIPTION;

protected:
   void setUsage(ossimArgumentParser& ap) override;
   bool initOutputGeom(const ossimString& projType, const double& gsd);

   ossimFilename m_outImgFile;
   ossimFilename m_inGsonFile;
   ossimFilename m_outGsonFile;
   std::istream* m_inGsonStream;
   std::ostream* m_outGsonStream;
   Json::Value* m_featuresJson;
   ossimRefPtr<ossimImageGeometry> m_inGeom;
   ossimRefPtr<ossimImageGeometry> m_outGeom;
};

#endif
