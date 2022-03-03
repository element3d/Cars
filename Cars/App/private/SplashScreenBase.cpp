#include "SplashScreenBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

SplashScreenBase::SplashScreenBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        this->SetOrientation((e3::EOrientation)1);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth(e3::Dim("600", "600", "600", "200", "200", "200"));
        pElement1->SetHeight(e3::Dim("750", "750", "750", "250", "250", "250"));
        mE3Logo = new E3Logo();
        pElement1->AddElement(mE3Logo);
        mBmwLogo = new CarsLogo();
        pElement1->AddElement(mBmwLogo);
        mBmwLogo->SetOpacity(0.000000);
        mBmwLogo->SetPositionType((e3::EPositionType)1);
    mMask = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    pElement1->AddElement(mMask);
        mMask->SetWidth("100%");
        mMask->SetHeight("100%");
        mMask->SetPositionType((e3::EPositionType)1);
        mMask->SetBackgroundColor(glm::vec4(0, 0, 0, 255));

}
