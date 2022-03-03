#include "ButtonBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

ButtonBase::ButtonBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth(e3::Dim("300", "300", "300", "100", "100", "100"));
        this->SetHeight(e3::Dim("105", "105", "105", "35", "35", "35"));
        this->SetBorderSize(e3::Dim("3", "3", "3", "1", "1", "1"));
        this->SetBorderColor(glm::vec4(0, 0, 0, 255));
        this->SetBackgroundColor(glm::vec4(183, 255, 28, 255));
    mBG = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mBG);
        mBG->SetVisibility((e3::EVisibility)1);
        mBG->SetWidth("100%");
        mBG->SetHeight("100%");
        mBG->SetPositionType((e3::EPositionType)1);
        mBG->SetLeft(e3::Dim("-60", "-60", "-60", "-20", "-20", "-20"));
        mBG->SetTop(-20);
        mBG->SetBackgroundColor(glm::vec4(255));
        mBG->SetOpacity(0.500000);
        mText = e3::ViewFactory::CreateText();
        AddElement(mText);
        mText->SetText("NEXT");
        mText->SetFontSize(e3::Dim("60", "60", "60", "20", "20", "20"));

}
