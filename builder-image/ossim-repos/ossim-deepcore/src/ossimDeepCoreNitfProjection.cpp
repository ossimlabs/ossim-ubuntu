//===============================================================
//  D O P A M I N E     >(@ > @)<
//  Experimental Neural Network with Global Reward Reinforcement
//  See LICENSE file in top directory
//===============================================================

#include <ossim/support_data/ossimNitfImageHeader.h>
#include <ossim/support_data/ossimNitfDesInformation.h>
#include "ossimDeepCoreNitfProjection.h"

ossimDeepCoreNitfProjection::ossimDeepCoreNitfProjection(const ossimNitfImageHeader* hdr)
{
   if (!hdr)
      return;

   ossimString coordinateSystem = hdr->getCoordinateSystem();

   // The following code was shamelessly ripped out of ossimNitfProjectionFactory::makeGeographic().
   // It has been modified to force a bilinear projection. Refer to the original for extensive
   // documentation.

   // To hold corner points.
   std::vector<ossimGpt> gpts(0);
   std::vector<ossimGpt> geolobPts(0);
   std::vector<ossimGpt> blockaPts(0);
   std::vector<ossimGpt> igeoloPts(0);

   // Look for points from the GEOLOB tag if geographic coordinate system.
   // This has an origin and scale with good precision.
   getGeolobPoints(hdr, geolobPts);

   // Look for points from the BLOCKA tag.  This may or may not be present.
   // If present since it has six digit precision use it for the points.
   getBlockaPoints(hdr, blockaPts);

   if ( blockaPts.empty() )
   {
      // Least precise IGEOLO field:
      ossimString geographicLocation = hdr->getGeographicLocation();
      if ( geographicLocation.size() )
      {
         if (coordinateSystem == "G")
            parseGeographicString(geographicLocation, igeoloPts);
         else if (coordinateSystem == "D")
            parseDecimalDegreesString(geographicLocation, igeoloPts);
      }
   }

   bool isSkewedFlag = false;
   if ( blockaPts.size() )
   {
      isSkewedFlag = isSkewed(blockaPts);
      if ( (isSkewedFlag == false) && geolobPts.size() )
         gpts = geolobPts; // Not skewed and have more accurate geolob points.
      else
         gpts = blockaPts;
   }
   else if ( igeoloPts.size() )
   {
      isSkewedFlag = isSkewed(igeoloPts);
      if ( (isSkewedFlag == false) && geolobPts.size() )
         gpts = geolobPts; // Not skewed and have more accurate geolob points.
      else
         gpts = igeoloPts;
   }

   if (gpts.size() == 4)
      m_bilinearProj = dynamic_cast<ossimBilinearProjection*>(makeBilinear(hdr, gpts));
}

