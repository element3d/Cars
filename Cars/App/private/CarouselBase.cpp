#include "CarouselBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

CarouselBase::CarouselBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetAlignItemsHor((e3::EAlignment)0);
        this->SetOverflow((e3::EOverflow)0);

}
