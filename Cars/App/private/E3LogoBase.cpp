#include "E3LogoBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

E3LogoBase::E3LogoBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth(e3::Dim("300", "300", "300", "100", "100", "100"));
        pElement1->SetHeight(e3::Dim("300", "300", "300", "100", "100", "100"));
        pElement1->SetAlignItemsVer((e3::EAlignment)1);
    mECont = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(mECont);
        mECont->SetWidth(e3::Dim("240", "240", "240", "80", "80", "80"));
        mECont->SetHeight(e3::Dim("240", "240", "240", "80", "80", "80"));
        mEText = e3::ViewFactory::CreateText();
        mECont->AddElement(mEText);
        mEText->SetOpacity(0.000000);
        mEText->SetText("e");
        mEText->SetFont(_s(Cars/fonts/Rajdhani/Rajdhani-Medium.ttf));
        mEText->SetFontSize(e3::Dim("240", "240", "240", "80", "80", "80"));
    m3Cont = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(m3Cont);
        m3Cont->SetWidth(e3::Dim("240", "240", "240", "80", "80", "80"));
        m3Cont->SetHeight(e3::Dim("240", "240", "240", "80", "80", "80"));
        m3Text = e3::ViewFactory::CreateText();
        m3Cont->AddElement(m3Text);
        m3Text->SetOpacity(0.000000);
        m3Text->SetText("3");
        m3Text->SetFont(_s(Cars/fonts/Rajdhani/Rajdhani-Medium.ttf));
        m3Text->SetTextColor(glm::vec4(255, 0, 76, 255));
        m3Text->SetFontSize(e3::Dim("240", "240", "240", "80", "80", "80"));
    mE3Mask = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(mE3Mask);
        mE3Mask->SetWidth("100%");
        mE3Mask->SetHeight("100%");
        mE3Mask->SetBackgroundColor(glm::vec4(255, 0, 76, 255));
        mE3Mask->SetPositionType((e3::EPositionType)1);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement2);
        pElement2->SetWidth(e3::Dim("300", "300", "300", "100", "100", "100"));
        pElement2->SetHeight(e3::Dim("66", "66", "66", "22", "22", "22"));
        mPBText = e3::ViewFactory::CreateText();
        pElement2->AddElement(mPBText);
        mPBText->SetOpacity(0.000000);
        mPBText->SetText("powered by");
        mPBText->SetFont(_s(Cars/fonts/Rajdhani/Rajdhani-SemiBold.ttf));
        mPBText->SetFontSize(e3::Dim("60", "60", "60", "20", "20", "20"));
    mPB = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement2->AddElement(mPB);
        mPB->SetWidth("100%");
        mPB->SetHeight("100%");
        mPB->SetBackgroundColor(glm::vec4(0, 0, 0, 255));
        mPB->SetPositionType((e3::EPositionType)1);

}
