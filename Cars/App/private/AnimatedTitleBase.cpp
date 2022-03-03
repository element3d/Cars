#include "AnimatedTitleBase.h"

#include <e3/ViewFactory.h>
#include "./CarsValues.h"

AnimatedTitleBase::AnimatedTitleBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("300dp");
        this->SetHeight("20dp");
        this->SetAlignItemsHor((e3::EAlignment)0);
        mText1 = e3::ViewFactory::CreateText();
        AddElement(mText1);
        mText1->SetMarginLeft("10dp");
        mText1->SetFontSize("18dp");
        mText1->SetFontStyle((e3::EFontStyle)2);
        mText1->SetTextColor(glm::vec4(255));
        mText2 = e3::ViewFactory::CreateText();
        AddElement(mText2);
        mText2->SetFontSize("18dp");
        mText2->SetMarginLeft("5dp");
        mText2->SetFontStyle((e3::EFontStyle)2);
        mText2->SetTextColor(glm::vec4(255.000000, 0.000000, 84.000000, 255.000000));
    mRedMask = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mRedMask);
        mRedMask->SetPositionType((e3::EPositionType)1);
        mRedMask->SetWidth("100%");
        mRedMask->SetHeight("100%");
        mRedMask->SetBackgroundColor(glm::vec4(255.000000, 0.000000, 84.000000, 255.000000));
    mWhiteMask = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mWhiteMask);
        mWhiteMask->SetPositionType((e3::EPositionType)1);
        mWhiteMask->SetWidth("50%");
        mWhiteMask->SetHeight("100%");
        mWhiteMask->SetBackgroundColor(glm::vec4(255));

}
