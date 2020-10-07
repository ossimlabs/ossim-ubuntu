//**************************************************************************************************
//
//     OSSIM Open Source Geospatial Data Processing Library
//     See top level LICENSE.txt file for license information
//
//     Author: oscar.kramer@maxar.com
//
//**************************************************************************************************

#include "ossimDeepCoreToolFactory.h"
#include <ossim/plugin/ossimSharedObjectBridge.h>
#include <ossim/util/ossimToolRegistry.h>

extern "C"
{
static ossimSharedObjectInfo  DeepCoreInfo;
static std::vector<ossimString> DeepCoreClassList;
static const char* DeepCoreDescription="ossim-deepcore tools plugin\n";

const char* getDeepCoreDescription()
{
   return DeepCoreDescription;
}

int getDeepCoreNumberOfClassNames()
{
   return DeepCoreClassList.size();
}

const char* getDeepCoreClassName(int idx)
{
   if (idx < DeepCoreClassList.size())
      return DeepCoreClassList[idx].c_str();
   return nullptr;
}

/* Note symbols need to be exported on windoze... */
OSSIM_PLUGINS_DLL void ossimSharedLibraryInitialize(ossimSharedObjectInfo** info)
{
   DeepCoreInfo.getDescription = getDeepCoreDescription;
   DeepCoreInfo.getNumberOfClassNames = getDeepCoreNumberOfClassNames;
   DeepCoreInfo.getClassName = getDeepCoreClassName;

   auto factory = DeepCore::ossimDeepCoreToolFactory::instance();
   factory->getTypeNameList(DeepCoreClassList);

   *info = &DeepCoreInfo;

   /* Register the utility... */
   ossimToolRegistry::instance()->registerFactory(factory);

}

/* Note symbols need to be exported on windoze... */
OSSIM_PLUGINS_DLL void ossimSharedLibraryFinalize()
{
   ossimToolRegistry::instance()->unregisterFactory(DeepCore::ossimDeepCoreToolFactory::instance());
}
}
