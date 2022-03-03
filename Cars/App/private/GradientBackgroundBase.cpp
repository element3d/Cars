#include "GradientBackgroundBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

GradientBackgroundBase::GradientBackgroundBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetPositionType((e3::EPositionType)1);
    mGradient = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mGradient);
        mGradient->SetWidth("100%");
        mGradient->SetHeight("100%");
    mMask = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mMask);
        mMask->SetWidth("100%");
        mMask->SetHeight("100%");
        mMask->SetPositionType((e3::EPositionType)1);
        mMask->SetBackgroundColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));

}
