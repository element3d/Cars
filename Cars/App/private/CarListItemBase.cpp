#include "CarListItemBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

CarListItemBase::CarListItemBase(e3::Element* pParent)
	: Row(pParent)
{
        this->SetWidth("100%");
        mCard = new CarListItemCard();
        AddElement(mCard);
        mCard->SetWidth(e3::Dim("300", "300", "300", "100", "100", "100"));
        mCard->SetHeight(e3::Dim("300", "300", "300", "100", "100", "100"));
                Col* pCustomView1 = new Col();
        AddElement(pCustomView1);
        pCustomView1->SetWidth("100%");
        pCustomView1->SetHeight(e3::Dim("270", "270", "270", "90", "90", "90"));
        pCustomView1->SetScaling((e3::EScaling)1);
        pCustomView1->SetPadding(e3::Dim("15", "15", "15", "5", "5", "5"));
        pCustomView1->SetAlignItemsHor((e3::EAlignment)0);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView1->AddElement(pElement1);
        pElement1->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        pElement1->SetBorderType((e3::EBorderType)1);
        pElement1->SetBorderRadius(glm::vec4(0, 0, 1, 0));
        pElement1->SetPadding(e3::Dim("15", "15", "15", "5", "5", "5"));
        mTitle = e3::ViewFactory::CreateText();
        pElement1->AddElement(mTitle);
        mTitle->SetText("BMW F30 328i");
        mTitle->SetFontSize(e3::Dim("60", "60", "60", "20", "20", "20"));
        mTitle->SetMarginLeft(e3::Dim("60", "60", "60", "20", "20", "20"));
        mTitle->SetMarginRight(e3::Dim("300", "300", "300", "100", "100", "100"));
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pCustomView1->AddElement(pElement2);
        pElement2->SetBackgroundColor(glm::vec4(183, 255, 28, 255));
        pElement2->SetBorderType((e3::EBorderType)1);
        pElement2->SetBorderRadius(glm::vec4(0, 0, 1, 0));
        pElement2->SetHeight(e3::Dim("66", "66", "66", "22", "22", "22"));
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement3);
        pElement3->SetBackgroundColor(glm::vec4(255, 0, 76, 255));
        pElement3->SetBorderType((e3::EBorderType)1);
        pElement3->SetBorderRadius(glm::vec4(0, 0, 1, 0));
        pElement3->SetPadding(e3::Dim("15", "15", "15", "5", "5", "5"));
        mYear = e3::ViewFactory::CreateText();
        pElement3->AddElement(mYear);
        mYear->SetText("2013");
        mYear->SetFontSize(e3::Dim("54", "54", "54", "18", "18", "18"));
        mYear->SetFontStyle((e3::EFontStyle)2);
        mYear->SetTextColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        mYear->SetMarginLeft(e3::Dim("60", "60", "60", "20", "20", "20"));
        mYear->SetMarginRight(e3::Dim("150", "150", "150", "50", "50", "50"));
        mPrice = e3::ViewFactory::CreateText();
        pElement2->AddElement(mPrice);
        mPrice->SetText("13 500$");
        mPrice->SetFontSize(e3::Dim("36", "36", "36", "12", "12", "12"));
        mPrice->SetMarginLeft(0);
        mPrice->SetMarginRight(e3::Dim("90", "90", "90", "30", "30", "30"));

}
