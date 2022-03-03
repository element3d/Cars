#include "MarkerBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

MarkerBase::MarkerBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth(e3::Dim("60", "60", "120", "40", "40", "40"));
        this->SetHeight(e3::Dim("60", "60", "120", "40", "40", "40"));
        this->SetOrientation((e3::EOrientation)1);
        this->SetPositionType((e3::EPositionType)1);
        this->SetLeft(0);
        this->SetTop(0);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        pElement1->SetPadding(e3::Dim("6", "6", "6", "2", "2", "2"));
        pElement1->SetPositionType((e3::EPositionType)1);
        pElement1->SetLeft("50%");
        pElement1->SetTop(0);
        mTitle = e3::ViewFactory::CreateText();
        pElement1->AddElement(mTitle);
        mTitle->SetText("GARAGE");
        mTitle->SetFontSize(e3::Dim("42", "42", "42", "14", "14", "14"));
        mTitle->SetFontStyle((e3::EFontStyle)2);
        mTitle->SetMarginLeft(e3::Dim("60", "60", "60", "20", "20", "20"));
        mTitle->SetMarginRight(e3::Dim("15", "15", "15", "5", "5", "5"));
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetHeight("100%");
        pElement2->SetBorderRadius(glm::vec4(5.000000, 5.000000, 5.000000, 5.000000));
        pElement2->SetBorderSize(e3::Dim("6", "6", "6", "2", "2", "2"));
        pElement2->SetBorderColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        pElement2->SetBackgroundColor(glm::vec4(255.000000, 0.000000, 84.000000, 255.000000));
        pElement2->SetPositionType((e3::EPositionType)1);
        pElement2->SetRotation(45, glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);
        e3::ShadowParams pElement2ShadowParams;
        pElement2ShadowParams.Color = glm::vec4(0, 0, 0, 255);
        pElement2ShadowParams.BlurSize = 4;
        pElement2ShadowParams.Opacity = 1.0;
        pElement2ShadowParams.Scale = 1.0;
        pElement2ShadowParams.Offset = glm::ivec2(0, 0);
        pElement2->SetShadow(pElement2ShadowParams);
        mIcon = e3::ViewFactory::CreateFontIcon();
        AddElement(mIcon);
        mIcon->SetWidth("50%");
        mIcon->SetHeight("50%");
        mIcon->SetFont(_s(Cars/fonts/home_icons.ttf));
        mIcon->SetCharcode(59392);
        mIcon->SetPositionType((e3::EPositionType)1);
        mIcon->SetColor(glm::vec4(255));

}
