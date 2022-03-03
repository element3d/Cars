#include "SwitchBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

SwitchBase::SwitchBase(e3::Element* pParent)
	: Row(pParent)
{
        this->SetBorderSize(e3::Dim("3", "3", "3", "1", "1", "1"));
        this->SetBorderColor(glm::vec4(0, 0, 0, 255));
        this->SetBackgroundColor(glm::vec4(0, 0, 0, 255));
    mLeft = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mLeft);
        mLeft->SetBackgroundColor(glm::vec4(183, 255, 28, 255));
        mLeft->SetPadding(e3::Dim("12", "12", "12", "4", "4", "4"));
        mLeftText = e3::ViewFactory::CreateText();
        mLeft->AddElement(mLeftText);
        mLeftText->SetText("LEFT");
        mLeftText->SetFontStyle((e3::EFontStyle)2);
        mLeftText->SetFontSize(e3::Dim("42", "42", "42", "14", "14", "14"));
    mRight = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mRight);
        mRight->SetPadding(e3::Dim("12", "12", "12", "4", "4", "4"));
        mRight->SetBackgroundColor(glm::vec4(0, 0, 0, 255));
        mRightText = e3::ViewFactory::CreateText();
        mRight->AddElement(mRightText);
        mRightText->SetText("RIGHT");
        mRightText->SetFontStyle((e3::EFontStyle)2);
        mRightText->SetFontSize(e3::Dim("42", "42", "42", "14", "14", "14"));
        mRightText->SetTextColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));

}
