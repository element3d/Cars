#include "MakeCardBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

MakeCardBase::MakeCardBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth(e3::Dim("510", "510", "510", "150", "150", "150"));
        this->SetHeight(e3::Dim("360", "360", "360", "100", "100", "100"));
        this->SetMargin(e3::Dim("15", "15", "15", "5", "5", "5"));
        this->SetBackgroundColor(glm::vec4(0, 197, 232, 255));
        this->SetBorderSize(e3::Dim("6", "6", "6", "2", "2", "2"));
        this->SetBorderColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
    mBG3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mBG3);
        mBG3->SetWidth("100%");
        mBG3->SetHeight("100%");
        mBG3->SetBackgroundImageFit((e3::EBackgroundSize)0);
    mLogo = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mBG3->AddElement(mLogo);
        mLogo->SetWidth(e3::Dim("75", "75", "75", "25", "25", "25"));
        mLogo->SetAspectRatio(1.000000);
        mLogo->SetPositionType((e3::EPositionType)1);
        mLogo->SetLeft(e3::Dim("30", "30", "30", "10", "10", "10"));
        mLogo->SetTop(e3::Dim("30", "30", "30", "10", "10", "10"));
    mImage = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mBG3->AddElement(mImage);
        mImage->SetWidth("80%");
        mImage->SetAspectRatio(1.000000);
        mImage->SetPositionType((e3::EPositionType)1);
        mImage->SetBackgroundImageFit((e3::EBackgroundSize)0);
        mImage->SetRight(0);
    mFlicker = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mBG3->AddElement(mFlicker);
        mFlicker->SetWidth("100%");
        mFlicker->SetHeight("100%");
        mFlicker->SetBackgroundColor(glm::vec4(255, 255, 255, 0));
        mFlicker->SetOpacity(0.000000);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mBG3->AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight("100%");
        pElement1->SetPositionType((e3::EPositionType)1);
        pElement1->SetOverflow((e3::EOverflow)0);
    mLight = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(mLight);
        mLight->SetOpacity(0.000000);
        mLight->SetWidth("150%");
        mLight->SetHeight(e3::Dim("180", "180", "180", "60", "60", "60"));
        mLight->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        mLight->SetPositionType((e3::EPositionType)1);
        mLight->SetBorderRadius(2);
        mLight->SetSmoothFactor(120);
        mLight->SetRotation(30, glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mBG3->AddElement(pElement2);
        pElement2->SetWidth("80%");
        pElement2->SetHeight("100%");
        pElement2->SetPositionType((e3::EPositionType)1);
        pElement2->SetBottom(0);
        pElement2->SetLeft(0);
        pElement2->SetBorderType((e3::EBorderType)1);
        pElement2->SetBorderRadius(glm::vec4(0, 1, 0, 0));
        pElement2->SetBackgroundColor(glm::vec4(255, 255, 255, 50));
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mBG3->AddElement(pElement3);
        pElement3->SetBackgroundColor(glm::vec4(183, 255, 28, 255));
        pElement3->SetPositionType((e3::EPositionType)1);
        pElement3->SetWidth("40%");
        pElement3->SetAlignItemsHor((e3::EAlignment)1);
        pElement3->SetTop(0);
        pElement3->SetRight(0);
        pElement3->SetPadding(5);
        pElement3->SetBorderType((e3::EBorderType)1);
        pElement3->SetBorderRadius(glm::vec4(0, 0, 0, 1));
        mCount = e3::ViewFactory::CreateText();
        pElement3->AddElement(mCount);
        mCount->SetText("x17");
        mCount->SetFontSize(e3::Dim("42", "42", "42", "12", "12", "12"));
        mCount->SetFontStyle((e3::EFontStyle)2);
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mBG3->AddElement(pElement4);
        pElement4->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        pElement4->SetPositionType((e3::EPositionType)1);
        pElement4->SetWidth("90%");
        pElement4->SetBottom(-2);
        pElement4->SetLeft(-2);
        pElement4->SetPadding(4);
        pElement4->SetAlignItemsHor((e3::EAlignment)0);
        pElement4->SetBorderType((e3::EBorderType)1);
        pElement4->SetBorderRadius(glm::vec4(0, 1, 0, 0));
        mTitle = e3::ViewFactory::CreateText();
        pElement4->AddElement(mTitle);
        mTitle->SetFontStyle((e3::EFontStyle)2);
        mTitle->SetFontSize(e3::Dim("42", "42", "42", "10", "10", "10"));

}
