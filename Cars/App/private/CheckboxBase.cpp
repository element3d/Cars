#include "CheckboxBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

CheckboxBase::CheckboxBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth(e3::Dim("60", "60", "60", "20", "20", "20"));
        this->SetHeight(e3::Dim("60", "60", "60", "20", "20", "20"));
        this->SetBorderSize(e3::Dim("6", "6", "6", "2", "2", "2"));
        this->SetBackgroundColor(glm::vec4(0, 0, 0, 255));
        this->SetBorderColor(glm::vec4(183, 255, 28, 255));
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(pElement1);
        pElement1->SetWidth("50%");
        pElement1->SetHeight("50%");
        pElement1->SetBackgroundColor(glm::vec4(183, 255, 28, 255));

}
