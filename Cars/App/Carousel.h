
#ifndef Carousel_H_
#define Carousel_H_

#include "private/CarouselBase.h"

class E3_EXPORT Carousel : public CarouselBase
{
public:
	Carousel(e3::Element* pParent = nullptr);

	void OnMouseMove(e3::MouseEvent* pEvent);
};

#endif // Carousel_H_

