#include "LoginUserDataPageBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

LoginUserDataPageBase::LoginUserDataPageBase(e3::Element* pParent)
	: Col(pParent)
{
        this->SetWidth("100%");
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth(100);
        pElement1->SetHeight(120);
        pElement1->SetBorderSize(1);
        pElement1->SetBorderColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement2);
        pElement2->SetMarginTop(10);
        pElement2->SetOrientation((e3::EOrientation)1);
        mFirstNameInput = e3::ViewFactory::CreateInput();
        pElement2->AddElement(mFirstNameInput);
        mFirstNameInput->SetHint("FIRST NAME");
        mFirstNameInput->SetWidth(e3::Dim("750", "750", "750", "250", "250", "250"));
        mFirstNameInput->SetHeight(e3::Dim("150", "150", "150", "50", "50", "50"));
        mFirstNameInput->SetHintColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        mFirstNameInput->SetFontSize(e3::Dim("60", "60", "60", "20", "20", "20"));
        mFirstNameInput->SetTextColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(pElement3);
        pElement3->SetWidth(e3::Dim("750", "750", "750", "250", "250", "250"));
        pElement3->SetHeight(e3::Dim("6", "6", "6", "2", "2", "2"));
        pElement3->SetBackgroundColor(glm::vec4(255, 0, 76, 255));
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement4);
        pElement4->SetMarginTop(10);
        pElement4->SetOrientation((e3::EOrientation)1);
        mSecondNameInput = e3::ViewFactory::CreateInput();
        pElement4->AddElement(mSecondNameInput);
        mSecondNameInput->SetHint("SECOND NAME");
        mSecondNameInput->SetWidth(e3::Dim("750", "750", "750", "250", "250", "250"));
        mSecondNameInput->SetHeight(e3::Dim("150", "150", "150", "50", "50", "50"));
        mSecondNameInput->SetHintColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        mSecondNameInput->SetFontSize(e3::Dim("60", "60", "60", "20", "20", "20"));
        mSecondNameInput->SetTextColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
    e3::Element* pElement5 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement4->AddElement(pElement5);
        pElement5->SetWidth(e3::Dim("750", "750", "750", "250", "250", "250"));
        pElement5->SetHeight(e3::Dim("6", "6", "6", "2", "2", "2"));
        pElement5->SetBackgroundColor(glm::vec4(255, 0, 76, 255));

}
