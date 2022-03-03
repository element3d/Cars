#include "CarImagePanelBase.h"

#include <e3/ViewFactory.h>
#include "./CarsValues.h"

CarImagePanelBase::CarImagePanelBase(e3::Element* pParent)
	: Row(pParent)
{
        this->SetWidth("100%");
        this->SetAlignItemsHor((e3::EAlignment)0);
                Col* pCustomView1 = new Col();
        AddElement(pCustomView1);
    mCardContainer = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView1->AddElement(mCardContainer);
        mCardContainer->SetBorderSize(2);
        mCardContainer->SetBorderColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        mCardContainer->SetWidth(e3::Dim("300", "300", "300", "100", "100", "100"));
        mCardContainer->SetHeight(e3::Dim("420", "420", "420", "140", "140", "140"));
        mCardContainer->SetMarginLeft(20);
    mCard = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mCardContainer->AddElement(mCard);
        mCard->SetBackgroundImageFit((e3::EBackgroundSize)1);
        mCard->SetWidth("100%");
        mCard->SetHeight("100%");
    mCardMask = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mCardContainer->AddElement(mCardMask);
        mCardMask->SetWidth("100%");
        mCardMask->SetHeight("100%");
        mCardMask->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        mCardMask->SetPositionType((e3::EPositionType)1);
        mCardMask->SetMarginLeft(0);
        mCardMask->SetMarginRight(0);
                Col* pCustomView2 = new Col();
        AddElement(pCustomView2);
        pCustomView2->SetWidth("100%");
        pCustomView2->SetScaling((e3::EScaling)1);
        pCustomView2->SetAlignItemsHor((e3::EAlignment)0);
        mCarImages = new Col();
        pCustomView2->AddElement(mCarImages);
        mCarImages->SetVisibility((e3::EVisibility)2);
        mCarImages->SetWidth("100%");
        mCarImages->SetHeight(e3::Dim("420", "420", "420", "120", "120", "120"));
        mCarImages->SetPositionType((e3::EPositionType)1);
        mCarImages->SetLeft(0);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mCarImages->AddElement(pElement1);
        pElement1->SetWidth("100%");
        pElement1->SetHeight(2);
        pElement1->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        mImagesContainer = new Row();
        mCarImages->AddElement(mImagesContainer);
        mImagesContainer->SetBackgroundImage("Cars/images/login.png");
        mImagesContainer->SetBackgroundImageFit((e3::EBackgroundSize)1);
        mImagesContainer->SetOverflow((e3::EOverflow)2);
        mImagesContainer->SetAlignItemsVer((e3::EAlignment)2);
        mImagesContainer->SetWidth("100%");
        mImagesContainer->SetHeight("100%");
        mImagesContainer->SetScaling((e3::EScaling)1);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mCarImages->AddElement(pElement2);
        pElement2->SetWidth("100%");
        pElement2->SetHeight(2);
        pElement2->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
    mMask = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView2->AddElement(mMask);
        mMask->SetWidth("100%");
        mMask->SetHeight(e3::Dim("420", "420", "420", "100", "100", "100"));
        mMask->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        mMask->SetPositionType((e3::EPositionType)1);

}
