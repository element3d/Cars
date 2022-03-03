#include "CarListPageBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

CarListPageBase::CarListPageBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        this->SetAlignItemsVer((e3::EAlignment)0);
        mBG = new GradientBackground();
        AddElement(mBG);
                Col* pCustomView1 = new Col();
        AddElement(pCustomView1);
        pCustomView1->SetHeight("100%");
        pCustomView1->SetScaling((e3::EScaling)1);
        pCustomView1->SetOverflow((e3::EOverflow)2);
        mTopCarsPanel = new TopCarsPanel();
        pCustomView1->AddElement(mTopCarsPanel);
        mTopCarsPanel->SetMarginTop(e3::Dim("150", "150", "150", "50", "50", "50"));
        mContainer = new Col();
        pCustomView1->AddElement(mContainer);
        mContainer->SetMarginTop(20);
        mAppBar = new AppBar();
        AddElement(mAppBar);
        mAppBar->SetScaling((e3::EScaling)2);

}
