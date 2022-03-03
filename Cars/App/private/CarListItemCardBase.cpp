#include "CarListItemCardBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

CarListItemCardBase::CarListItemCardBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth(e3::Dim("900", "900", "900", "300", "300", "300"));
        this->SetHeight(e3::Dim("600", "600", "600", "200", "200", "200"));
        this->SetBorderSize(e3::Dim("3", "3", "3", "1", "1", "1"));
        this->SetBorderColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));
        this->SetBackgroundImageFit((e3::EBackgroundSize)1);
        this->SetMargin(e3::Dim("24", "24", "24", "8", "8", "8"));

}
