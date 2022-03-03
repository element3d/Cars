#include "CInputBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

CInputBase::CInputBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetBackgroundColor(glm::vec4(255, 255, 255, 100));
        this->SetPadding(e3::Dim("6", "6", "6", "2", "2", "2"));
        mInput = e3::ViewFactory::CreateInput();
        AddElement(mInput);
        mInput->SetFontSize(e3::Dim("48", "48", "48", "16", "16", "16"));
        mInput->SetTextColor(glm::vec4(255.000000, 255.000000, 255.000000, 255.000000));

}
