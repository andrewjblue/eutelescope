#ifndef MIMOSA26GEODESCR_H
#define	MIMOSA26GEODESCR_H

  /** @class Mimosa26GeoDescr
	* This class is the implementation of  @class EUTelGenericPixGeoDescr
	* for the Mimosa26 which is the standard telescope reference plane of
	* the DESY pixel telescope.
	* The geoemtry is as following: the 21.2 x 10.6 mm**2 are is divided
	* into a 1151 x 575 pixel matrix. All pixels are of the same dimension. 
    */

//STL
#include <string> //std::string
#include <utility> //std::pair

//EUTELESCOPE
#include "EUTelGenericPixGeoDescr.h"

//ROOT
#include "TGeoMaterial.h"
#include "TGeoMedium.h"
#include "TGeoVolume.h"

namespace eutelescope {
namespace geo {

class Mimosa26GeoDescr : public EUTelGenericPixGeoDescr {
	
	public:
		Mimosa26GeoDescr();
		~Mimosa26GeoDescr();

		void createRootDescr(char const *);
		std::string getPixName(int, int);
		std::pair<int, int> getPixIndex(char const *);

	protected:
		TGeoMaterial* matSi;
		TGeoMedium* Si;
		TGeoVolume* plane;
};

} //namespace geo
} //namespace eutelescope

#endif	//MIMOSA26GEODESCR_H
