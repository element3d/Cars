
#ifndef __SplashScreenBase_H__
#define __SplashScreenBase_H__

#include <e3/ViewFactory.h>
#include <E3Logo.h>
#include <CarsLogo.h>


class SplashScreenBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    SplashScreenBase(e3::Element* pParent = nullptr);

 
protected:
	E3Logo* mE3Logo = nullptr;
CarsLogo* mBmwLogo = nullptr;
e3::Element* mMask = nullptr;


};

#endif // __SplashScreenBase_H__

