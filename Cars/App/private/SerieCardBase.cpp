#include "SerieCardBase.h"

#include <e3/ViewFactory.h>
#include "./CarsValues.h"

SerieCardBase::SerieCardBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth(e3::Dim("450", "450", "450", "150", "150", "150"));
        this->SetHeight(e3::Dim("600", "600", "600", "200", "200", "200"));
        this->SetBackgroundImageFit((e3::EBackgroundSize)1);
        this->SetOverflow((e3::EOverflow)0);
        this->SetMargin(e3::Dim("6", "6", "6", "2", "2", "2"));
        this->SetBorderSize(e3::Dim("12", "12", "12", "4", "4", "4"));
        this->SetBorderColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
    mBG3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mBG3);
        mBG3->SetWidth("100%");
        mBG3->SetHeight("100%");
        mBG3->SetBackgroundImageFit((e3::EBackgroundSize)0);
        mBG3->SetBorderColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
    mImage = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mBG3->AddElement(mImage);
        mImage->SetWidth("100%");
        mImage->SetHeight("100%");
        mImage->SetRight(-20);
        mImage->SetBackgroundImageFit((e3::EBackgroundSize)0);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mBG3->AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetAspectRatio(1.000000);
        pElement1->SetPositionType((e3::EPositionType)1);
        pElement1->SetBottom(0);
        pElement1->SetBorderType((e3::EBorderType)1);
        pElement1->SetBorderRadius(glm::vec4(0, 1, 0, 0));
        pElement1->SetBackgroundColor(glm::vec4(255, 255, 255, 50));
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mBG3->AddElement(pElement2);
        pElement2->SetBackgroundColor(glm::vec4(162, 255, 0, 255));
        pElement2->SetPositionType((e3::EPositionType)1);
        pElement2->SetWidth("40%");
        pElement2->SetAlignItemsHor((e3::EAlignment)1);
        pElement2->SetTop(0);
        pElement2->SetRight(0);
        pElement2->SetPadding(e3::Dim("12", "12", "12", "4", "4", "4"));
        pElement2->SetBorderType((e3::EBorderType)1);
        pElement2->SetBorderRadius(glm::vec4(0, 0, 0, 1));
        mCount = e3::ViewFactory::CreateText();
        pElement2->AddElement(mCount);
        mCount->SetText("x17");
        mCount->SetFontSize(e3::Dim("36", "36", "36", "12", "12", "12"));
        mCount->SetFontStyle((e3::EFontStyle)2);
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mBG3->AddElement(pElement3);
        pElement3->SetOrientation((e3::EOrientation)1);
        pElement3->SetAlignItemsHor((e3::EAlignment)0);
        pElement3->SetPositionType((e3::EPositionType)1);
        pElement3->SetBottom(0);
        pElement3->SetLeft(0);
        pElement3->SetWidth("100%");
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement3->AddElement(pElement4);
    e3::Element* pElement5 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement4->AddElement(pElement5);
        pElement5->SetWidth(e3::Dim("120", "120", "120", "40", "40", "40"));
        pElement5->SetAspectRatio(1.000000);
        pElement5->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        pElement5->SetPositionType((e3::EPositionType)1);
        pElement5->SetLeft(0);
        pElement5->SetBottom(0);
        pElement5->SetBorderType((e3::EBorderType)1);
        pElement5->SetBorderRadius(glm::vec4(0, 1, 0, 0));
    e3::Element* pElement6 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement4->AddElement(pElement6);
        pElement6->SetBackgroundColor(glm::vec4(0, 0, 0, 255));
        pElement6->SetPadding(e3::Dim("12", "12", "12", "4", "4", "4"));
        pElement6->SetMarginBottom(e3::Dim("12", "12", "12", "4", "4", "4"));
        pElement6->SetMarginLeft(e3::Dim("12", "12", "12", "4", "4", "4"));
        pElement6->SetAlignItemsHor((e3::EAlignment)0);
        mMake = e3::ViewFactory::CreateText();
        pElement6->AddElement(mMake);
        mMake->SetText("F30");
        mMake->SetFontStyle((e3::EFontStyle)2);
        mMake->SetFontSize(e3::Dim("30", "30", "30", "10", "10", "10"));
        mMake->SetTextColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
    e3::Element* pElement7 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement3->AddElement(pElement7);
        pElement7->SetOrientation((e3::EOrientation)1);
        pElement7->SetWidth("100%");
        pElement7->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        pElement7->SetPadding(e3::Dim("12", "12", "12", "4", "4", "4"));
        pElement7->SetBorderType((e3::EBorderType)1);
        pElement7->SetAlignItemsHor((e3::EAlignment)0);
        pElement7->SetBorderRadius(glm::vec4(0, 1, 0, 0));
        mTitle = e3::ViewFactory::CreateText();
        pElement7->AddElement(mTitle);
        mTitle->SetFontStyle((e3::EFontStyle)2);
        mTitle->SetFontSize(e3::Dim("36", "36", "36", "12", "12", "12"));

}
