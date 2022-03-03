#include "CarSeriesPageBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

CarSeriesPageBase::CarSeriesPageBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetAlignItemsVer((e3::EAlignment)0);
        mBG = new GradientBackground();
        AddElement(mBG);
        mTopCarsPanel = new TopCarsPanel();
        AddElement(mTopCarsPanel);
        mTopCarsPanel->SetMarginTop(e3::Dim("150", "150", "150", "50", "50", "50"));
        mContainer = new Col();
        AddElement(mContainer);
        mContainer->SetWidth("100%");
        mContainer->SetMarginTop("10dp");
        mCarousel = new Carousel();
        mContainer->AddElement(mCarousel);
        mCarousel->SetAlignItemsVer((e3::EAlignment)0);
        mAppBar = new AppBar();
        AddElement(mAppBar);
        mAppBar->SetScaling((e3::EScaling)2);

}
