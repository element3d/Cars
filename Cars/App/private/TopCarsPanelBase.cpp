#include "TopCarsPanelBase.h"

#include <e3/ViewFactory.h>
#include "./CarsValues.h"

TopCarsPanelBase::TopCarsPanelBase(e3::Element* pParent)
	: Col(pParent)
{
        this->SetWidth("100%");
        this->SetAlignItemsVer((e3::EAlignment)2);
        this->SetAlignItemsHor((e3::EAlignment)0);
        mTitle = new AnimatedTitle();
        AddElement(mTitle);
        mTitle->SetMarginLeft("20dp");
        mTitle->SetText1(_s(TOP));
        mTitle->SetText2(_s(CARS));
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetScaling((e3::EScaling)1);
        pElement1->SetMarginTop(10);
        mScroll = new Row();
        pElement1->AddElement(mScroll);
        mScroll->SetMinHeight(e3::Dim("330", "330", "330", "110", "110", "110"));
        mScroll->SetWidth("100%");
        mScroll->SetOverflow((e3::EOverflow)2);
        mScroll->SetAlignItemsVer((e3::EAlignment)2);
    mMask = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(mMask);
        mMask->SetPositionType((e3::EPositionType)1);
        mMask->SetWidth("100%");
        mMask->SetHeight("100%");
        mMask->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));

}
