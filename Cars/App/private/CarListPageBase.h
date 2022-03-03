
#ifndef __CarListPageBase_H__
#define __CarListPageBase_H__

#include <e3/ViewFactory.h>
#include <GradientBackground.h>
#include <Col.h>
#include <TopCarsPanel.h>
#include <AppBar.h>


class CarListPageBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CarListPageBase(e3::Element* pParent = nullptr);

 
protected:
	GradientBackground* mBG = nullptr;
TopCarsPanel* mTopCarsPanel = nullptr;
Col* mContainer = nullptr;
AppBar* mAppBar = nullptr;


};

#endif // __CarListPageBase_H__

