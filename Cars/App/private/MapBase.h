
#ifndef __MapBase_H__
#define __MapBase_H__

#include <e3/ViewFactory.h>
#include <Marker.h>


class MapBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MapBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mContainer = nullptr;
e3::Element* mMapLayer = nullptr;
e3::Element* mMarkers = nullptr;
Marker* mGarage = nullptr;
Marker* mCars = nullptr;
Marker* mAutoParts = nullptr;
Marker* mEvents = nullptr;
Marker* mServices = nullptr;
Marker* mShops = nullptr;
e3::Element* mClouds = nullptr;


};

#endif // __MapBase_H__

