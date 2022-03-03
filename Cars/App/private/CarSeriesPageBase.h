
#ifndef __CarSeriesPageBase_H__
#define __CarSeriesPageBase_H__

#include <e3/ViewFactory.h>
#include <GradientBackground.h>
#include <TopCarsPanel.h>
#include <Col.h>
#include <Carousel.h>
#include <AppBar.h>


class CarSeriesPageBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CarSeriesPageBase(e3::Element* pParent = nullptr);

 
protected:
	GradientBackground* mBG = nullptr;
TopCarsPanel* mTopCarsPanel = nullptr;
Col* mContainer = nullptr;
Carousel* mCarousel = nullptr;
AppBar* mAppBar = nullptr;


};

#endif // __CarSeriesPageBase_H__

