//**************************************************************************************************
//
//     OSSIM Open Source Geospatial Data Processing Library
//     See top level LICENSE.txt file for license information
//
//     Author: oscar.kramer@maxar.com
//
//**************************************************************************************************

#ifndef ossimRemapTool_HEADER
#define ossimRemapTool_HEADER

#include <ossim/base/ossimFilename.h>
#include <ossim/base/ossimKeywordlist.h>
#include <ossim/util/ossimChipProcTool.h>
#include <ossim/base/ossimRefPtr.h>
#include <ossim/imaging/ossimSingleImageChain.h>

/*!
 *  ossimTool class for performing histo ans scalar-based remapping.
 */
class OSSIMDLLEXPORT ossimDeepCoreTool : public ossimChipProcTool
{
public:
   ossimDeepCoreTool();

   ~ossimDeepCoreTool() override;

   bool initialize(ossimArgumentParser& ap) override;

   ossimString getClassName() const override { return "ossimDeepCoreTool"; }

   bool execute() override;

   /** Used by ossimUtilityFactory */
   static const char* DESCRIPTION;

protected:
   void setUsage(ossimArgumentParser& ap) override;
   void initProcessingChain() override;

   bool m_doHistoStretch;
   uint32_t m_remapToBits;
   ossimFilename m_inputFilename;
   uint32_t m_entry;
   double m_gsd;
   double m_brightness;
   double m_contrast;
   ossimString m_sharpenMode;
};

#endif
