//**************************************************************************************************
//
//     OSSIM Open Source Geospatial Data Processing Library
//     See top level LICENSE.txt file for license information
//
//     Author: oscar.kramer@maxar.com
//
//**************************************************************************************************

#include "ossimDeepCoreToolFactory.h"
#include "ossimDeepCoreTool.h"
#include "ossimGeoToImgTool.h"
#include "ossimImgToImgTool.h"
#include "ossimImgToGeoTool.h"
#include <ossim/util/ossimToolRegistry.h>

using namespace std;

namespace DeepCore
{
ossimDeepCoreToolFactory* ossimDeepCoreToolFactory::s_instance = 0;

ossimDeepCoreToolFactory* ossimDeepCoreToolFactory::instance()
{
   if (!s_instance)
      s_instance = new ossimDeepCoreToolFactory;
   return s_instance;
}

ossimDeepCoreToolFactory::ossimDeepCoreToolFactory()
{
}

ossimDeepCoreToolFactory::~ossimDeepCoreToolFactory()
{
   ossimToolRegistry::instance()->unregisterFactory(this);
}

ossimTool* ossimDeepCoreToolFactory::createTool(const std::string& argName) const
{
   ossimString utilName (argName);
   utilName.downcase();

   if ((utilName == "deepcore") || (argName == "ossimDeepCoreTool"))
      return new ossimDeepCoreTool;
   if ((utilName == "g2i") || (argName == "ossimGeoToImgTool"))
      return new ossimGeoToImgTool;
   if ((utilName == "i2i") || (argName == "ossimImgToImgTool"))
      return new ossimImgToImgTool;
   if ((utilName == "i2g") || (argName == "ossimImgToGeoTool"))
      return new ossimImgToGeoTool;

   return 0;
}

void ossimDeepCoreToolFactory::getCapabilities(std::map<std::string, std::string>& capabilities) const
{
   capabilities.insert(pair<string, string>("deepcore", ossimDeepCoreTool::DESCRIPTION));
   capabilities.insert(pair<string, string>("g2i",      ossimGeoToImgTool::DESCRIPTION));
   capabilities.insert(pair<string, string>("i2i",      ossimImgToImgTool::DESCRIPTION));
   capabilities.insert(pair<string, string>("i2g",      ossimImgToGeoTool::DESCRIPTION));
}

std::map<std::string, std::string> ossimDeepCoreToolFactory::getCapabilities() const
{
   std::map<std::string, std::string> result;
   getCapabilities(result);
   return result;
}

void ossimDeepCoreToolFactory::getTypeNameList(vector<ossimString>& typeList) const
{
   typeList.push_back("ossimDeepCoreTool");
   typeList.push_back("ossimGeoToImgTool");
   typeList.push_back("ossimImgToImgTool");
   typeList.push_back("ossimImgToGeoTool");
}
}
