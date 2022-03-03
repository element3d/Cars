#include "CarsPageBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

CarsPageBase::CarsPageBase(e3::Element* pParent)
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
        mContainer->SetAlignItemsHor((e3::EAlignment)0);
    mScroll = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mContainer->AddElement(mScroll);
        mScroll->SetMarginTop(e3::Dim("15", "15", "15", "5", "5", "5"));
        mScroll->SetPaddingTop(e3::Dim("60", "60", "60", "20", "20", "20"));
        mScroll->SetPaddingBottom(e3::Dim("60", "60", "60", "20", "20", "20"));
        mScroll->SetWidth("100%");
        mScroll->SetOverflow((e3::EOverflow)2);
        mAppBar = new AppBar();
        AddElement(mAppBar);
        mAppBar->SetScaling((e3::EScaling)2);
        mE3Logo = new E3Logo();
        AddElement(mE3Logo);
        mE3Logo->SetColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        mE3Logo->SetScale(glm::vec3(0.5, 0.5, 1), e3::ETransformAlignment::Bottom);
        mE3Logo->SetPositionType((e3::EPositionType)1);
        mE3Logo->SetBottom(e3::Dim("60", "60", "60", "20", "20", "20"));

}
