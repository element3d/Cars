#include "TopCarCardBase.h"

#include <e3/ViewFactory.h>
#include "./CarsValues.h"

TopCarCardBase::TopCarCardBase(e3::Element* pParent)
	: Col(pParent)
{
        this->SetWidth(e3::Dim("510", "510", "510", "150", "150", "150"));
        this->SetHeight(e3::Dim("360", "360", "360", "110", "110", "110"));
        this->SetMargin(e3::Dim("15", "15", "15", "5", "5", "5"));
        this->SetBackgroundImageFit((e3::EBackgroundSize)1);
        this->SetBorderSize(e3::Dim("6", "6", "6", "2", "2", "2"));
        this->SetBorderColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
    mFlicker = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mFlicker);
        mFlicker->SetWidth("100%");
        mFlicker->SetHeight("100%");
        mFlicker->SetPositionType((e3::EPositionType)1);
        mFlicker->SetBackgroundColor(glm::vec4(255, 255, 255, 0));
        mFlicker->SetOpacity(0.000000);
    mLight = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mLight);
        mLight->SetOpacity(0.000000);
        mLight->SetWidth("150%");
        mLight->SetHeight(60);
        mLight->SetBackgroundColor(glm::vec4(0));
        mLight->SetPositionType((e3::EPositionType)1);
        mLight->SetBorderRadius(2);
        mLight->SetSmoothFactor(40);
        mLight->SetRotation(30, glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);
    mImage = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mImage);
        mImage->SetWidth("100%");
        mImage->SetHeight("100%");
        mImage->SetScaling((e3::EScaling)1);
        mImage->SetBackgroundImageFit((e3::EBackgroundSize)1);
        mImage->SetBackgroundImagePosition((e3::EBackgroundPosition)1);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight(e3::Dim("54", "54", "54", "18", "18", "18"));
        pElement1->SetPositionType((e3::EPositionType)1);
        pElement1->SetTop(0);
        pElement1->SetAlignItemsHor((e3::EAlignment)0);
        pElement1->SetBackgroundColor(glm::vec4(255, 255, 255, 255));
        mYear = e3::ViewFactory::CreateText();
        pElement1->AddElement(mYear);
        mYear->SetFontSize(e3::Dim("36", "36", "36", "12", "12", "12"));
        mYear->SetMarginLeft(e3::Dim("15", "15", "15", "5", "5", "5"));
        mYear->SetText("BWM 3 F30");
        mYear->SetTextColor(glm::vec4(0, 0, 0, 255));
        mYear->SetFontStyle((e3::EFontStyle)2);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement2);
        pElement2->SetWidth("50%");
        pElement2->SetHeight(e3::Dim("90", "90", "90", "30", "30", "30"));
        pElement2->SetPositionType((e3::EPositionType)1);
        pElement2->SetRight(e3::Dim("-15", "-15", "-15", "-5", "-5", "-5"));
        pElement2->SetTop(e3::Dim("-15", "-15", "-15", "-5", "-5", "-5"));
        pElement2->SetAlignItemsHor((e3::EAlignment)1);
        pElement2->SetBorderType((e3::EBorderType)1);
        pElement2->SetBorderRadius(glm::vec4(0, 0, 0, 1));
        pElement2->SetBackgroundColor(glm::vec4(255.000000, 0.000000, 84.000000, 255.000000));
        mPrice = e3::ViewFactory::CreateText();
        pElement2->AddElement(mPrice);
        mPrice->SetMarginRight(e3::Dim("30", "30", "30", "10", "10", "10"));
        mPrice->SetFontSize(e3::Dim("36", "36", "36", "12", "12", "12"));
        mPrice->SetText("16000$");
        mPrice->SetTextColor(glm::vec4(255));
        mPrice->SetFontStyle((e3::EFontStyle)2);

}
