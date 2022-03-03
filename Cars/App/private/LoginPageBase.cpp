#include "LoginPageBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

LoginPageBase::LoginPageBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetPositionType((e3::EPositionType)1);
        this->SetBackgroundColor(glm::vec4(0, 0, 0, 150));
        this->SetStopEvents(true);
    mBody = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mBody);
        mBody->SetWidth("80%");
        mBody->SetOrientation((e3::EOrientation)1);
        mContainer = new Col();
        mBody->AddElement(mContainer);
        mContainer->SetWidth("100%");
        e3::Text* pText1 = e3::ViewFactory::CreateText();
        mContainer->AddElement(pText1);
        pText1->SetText("LOGIN");
        pText1->SetFontStyle((e3::EFontStyle)2);
        pText1->SetFontSize(e3::Dim("66", "66", "66", "22", "22", "22"));
        pText1->SetTextColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mContainer->AddElement(pElement1);
        pElement1->SetOrientation((e3::EOrientation)1);
        mInput = e3::ViewFactory::CreateInput();
        pElement1->AddElement(mInput);
        mInput->SetHint("PHONE");
        mInput->SetWidth(e3::Dim("750", "750", "750", "250", "250", "250"));
        mInput->SetHeight(e3::Dim("150", "150", "150", "50", "50", "50"));
        mInput->SetHintColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        mInput->SetFontSize(e3::Dim("60", "60", "60", "20", "20", "20"));
        mInput->SetTextColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement2);
        pElement2->SetWidth(e3::Dim("750", "750", "750", "250", "250", "250"));
        pElement2->SetHeight(e3::Dim("6", "6", "6", "2", "2", "2"));
        pElement2->SetBackgroundColor(glm::vec4(255, 0, 76, 255));
                Row* pCustomView1 = new Row();
        mBody->AddElement(pCustomView1);
        pCustomView1->SetWidth("100%");
        pCustomView1->SetMarginTop(20);
        pCustomView1->SetAlignItemsHor((e3::EAlignment)1);
        mNextButton = new Button();
        pCustomView1->AddElement(mNextButton);

}
