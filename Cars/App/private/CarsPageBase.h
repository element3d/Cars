
#ifndef __CarsPageBase_H__
#define __CarsPageBase_H__

#include <e3/ViewFactory.h>
#include <GradientBackground.h>
#include <TopCarsPanel.h>
#include <Col.h>
#include <AppBar.h>
#include <E3Logo.h>


class CarsPageBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CarsPageBase(e3::Element* pParent = nullptr);

 
protected:
	GradientBackground* mBG = nullptr;
TopCarsPanel* mTopCarsPanel = nullptr;
Col* mContainer = nullptr;
e3::Element* mScroll = nullptr;
AppBar* mAppBar = nullptr;
E3Logo* mE3Logo = nullptr;


};

#endif // __CarsPageBase_H__

