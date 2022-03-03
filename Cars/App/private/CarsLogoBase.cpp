#include "CarsLogoBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

CarsLogoBase::CarsLogoBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetOrientation((e3::EOrientation)1);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(pElement2);
        pElement2->SetWidth(80);
        pElement2->SetHeight(80);
        pElement2->SetBackgroundColor(glm::vec4(255, 0, 76, 255));
        e3::Text* pText1 = e3::ViewFactory::CreateText();
        pElement2->AddElement(pText1);
        pText1->SetTextColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        pText1->SetOpacity(0.000000);
        pText1->SetText("C");
        pText1->SetFont(_s(Cars/fonts/Rajdhani/Rajdhani-SemiBold.ttf));
        pText1->SetFontSize(e3::Dim("54", "54", "54", "50", "50", "50"));
    mTextCont = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mTextCont);
        mTextCont->SetOrientation((e3::EOrientation)1);
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mTextCont->AddElement(pElement3);
        pElement3->SetWidth(e3::Dim("150", "150", "150", "50", "50", "50"));
        pElement3->SetHeight(e3::Dim("66", "66", "66", "22", "22", "22"));
        mBMWText = e3::ViewFactory::CreateText();
        pElement3->AddElement(mBMWText);
        mBMWText->SetTextColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        mBMWText->SetOpacity(0.000000);
        mBMWText->SetText("CARS");
        mBMWText->SetFont(_s(Cars/fonts/Rajdhani/Rajdhani-SemiBold.ttf));
        mBMWText->SetFontSize(e3::Dim("54", "54", "54", "18", "18", "18"));
    mBMW = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement3->AddElement(mBMW);
        mBMW->SetWidth("100%");
        mBMW->SetHeight("100%");
        mBMW->SetBackgroundColor(glm::vec4(0, 0, 0, 255));
        mBMW->SetPositionType((e3::EPositionType)1);

}
