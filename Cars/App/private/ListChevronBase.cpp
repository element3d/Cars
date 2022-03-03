#include "ListChevronBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

ListChevronBase::ListChevronBase(e3::Element* pParent)
	: e3::FontIcon(pParent)
{
        this->SetWidth(e3::Dim("48", "48", "48", "16", "16", "16"));
        this->SetAspectRatio(1.000000);
        this->SetPositionType((e3::EPositionType)1);
        this->SetRight(e3::Dim("30", "30", "30", "10", "10", "10"));
        this->SetColor(glm::vec4(255, 0, 76, 255));
        this->SetFont(_s(Cars/fonts/icons.ttf));
        this->SetCharcode(59393);

}
