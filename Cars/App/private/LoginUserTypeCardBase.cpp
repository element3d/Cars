#include "LoginUserTypeCardBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

LoginUserTypeCardBase::LoginUserTypeCardBase(e3::Element* pParent)
	: Col(pParent)
{
        this->SetWidth(100);
        this->SetAspectRatio(1.000000);
        this->SetBorderSize(1);
        this->SetMargin(2);
        this->SetBorderColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        this->SetAlignItemsVer((e3::EAlignment)1);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetPadding(2);
        pElement1->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        mTitle = e3::ViewFactory::CreateText();
        pElement1->AddElement(mTitle);
        mTitle->SetFontSize(10);
        mTitle->SetText("");

}
