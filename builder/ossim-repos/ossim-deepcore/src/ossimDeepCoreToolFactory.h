//**************************************************************************************************
//
//     OSSIM Open Source Geospatial Data Processing Library
//     See top level LICENSE.txt file for license information
//
//     Author: oscar.kramer@maxar.com
//
//**************************************************************************************************

#ifndef ossimDeepCoreToolFactory_HEADER
#define ossimDeepCoreToolFactory_HEADER 1

#include <ossim/plugin/ossimPluginConstants.h>
#include <ossim/util/ossimToolFactoryBase.h>

class ossimString;
class ossimFilename;
class ossimKeywordlist;

namespace DeepCore {

class OSSIM_PLUGINS_DLL ossimDeepCoreToolFactory: public ossimToolFactoryBase
{
public:
   static ossimDeepCoreToolFactory* instance();

   virtual ~ossimDeepCoreToolFactory();
   virtual ossimTool* createTool(const std::string& typeName) const;
   virtual void getTypeNameList(std::vector<ossimString>& typeList) const;
   virtual void getCapabilities(std::map<std::string, std::string>& capabilities) const;
   virtual std::map<std::string, std::string> getCapabilities() const;

protected:
   ossimDeepCoreToolFactory();
   ossimDeepCoreToolFactory(const ossimDeepCoreToolFactory&);
   void operator=(const ossimDeepCoreToolFactory&);

   /** static instance of this class */
   static ossimDeepCoreToolFactory* s_instance;

};
}
#endif /* end of #ifndef ossimDeepCoreToolFactory_HEADER */
