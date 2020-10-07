//**************************************************************************************************
//
//     OSSIM Open Source Geospatial Data Processing Library
//     See top level LICENSE.txt file for license information
//
//     Author: oscar.kramer@maxar.com
//
//**************************************************************************************************

#ifndef OSSIMLABS_OSSIMDEEPCORENITFPROJECTION_H
#define OSSIMLABS_OSSIMDEEPCORENITFPROJECTION_H

#include <ossim/projection/ossimNitfProjectionFactory.h>
#include <ossim/projection/ossimBilinearProjection.h>

class ossimDeepCoreNitfProjection : public ossimNitfProjectionFactory
{
public:
   ossimDeepCoreNitfProjection(const ossimNitfImageHeader* imageHeader);

   void getCornerPoints(std::vector<ossimDpt>& cornerImgpts,
                        std::vector<ossimGpt>& cornerGeopts);

   ossimBilinearProjection* getBilinearProjection() { return m_bilinearProj.get(); }

private:
   ossimRefPtr<ossimBilinearProjection> m_bilinearProj;
};


#endif //OSSIMLABS_OSSIMDEEPCORENITFPROJECTION_H
