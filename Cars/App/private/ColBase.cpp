#include "ColBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

ColBase::ColBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetOrientation((e3::EOrientation)1);

}
