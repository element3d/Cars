
#ifndef __MainBase_H__
#define __MainBase_H__

#include <e3/ViewFactory.h>
#include <Map.h>
#include <AppBar.h>
#include <E3Logo.h>


class MainBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MainBase(e3::Element* pParent = nullptr);

 
protected:
	Map* mMap = nullptr;
AppBar* mAppBar = nullptr;
E3Logo* mE3Logo = nullptr;


};

#endif // __MainBase_H__

