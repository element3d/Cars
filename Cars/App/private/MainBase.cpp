#include "MainBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

MainBase::MainBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);
        mMap = new Map();
        AddElement(mMap);
        mMap->SetPositionType((e3::EPositionType)1);
        mAppBar = new AppBar();
        AddElement(mAppBar);
        mAppBar->SetScaling((e3::EScaling)2);
        mE3Logo = new E3Logo();
        AddElement(mE3Logo);
        mE3Logo->SetColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        mE3Logo->SetScale(glm::vec3(0.5, 0.5, 1), e3::ETransformAlignment::Bottom);
        mE3Logo->SetPositionType((e3::EPositionType)1);
        mE3Logo->SetBottom(e3::Dim("60", "60", "60", "20", "20", "20"));

}
