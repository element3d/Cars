#include "Carousel.h"

Carousel::Carousel(e3::Element* pParent)
	: CarouselBase(pParent)
{

}

void Carousel::OnMouseMove(e3::MouseEvent* pEvent)
{
	CarouselBase::OnMouseMove(pEvent);
	Translate(glm::vec3(-pEvent->GetDistanceX(), 0, 0));

	e3::ETransformAlignment trA = e3::ETransformAlignment::Right;

	for (int i = 0; i < GetNumChildren(); ++i)
	{
		e3::Element* pSelectedItem = GetChildren()[i];

		e3::Rect2f geo = GetRect();
		e3::Rect2f itemGeo = pSelectedItem->GetGeometry();
		e3::Rect2f itemRect = pSelectedItem->GetRect();
		float dx = geo.x + geo.width / 2 - (itemGeo.x + itemGeo.width / 2);
		//printf("dx = %f\n",dx);
		float scale = 1 - 0.03 * std::abs(dx / itemRect.width);
		float rot = 3 * (dx / itemRect.width);
		if (dx < 0)  trA = e3::ETransformAlignment::Left;

		pSelectedItem->SetScale(glm::vec3(scale, scale, 1), e3::ETransformAlignment::Center);
		//	pSelectedItem->SetRotation(rot, glm::vec3(0, 1, 0), trA);
	}
	//printf("*******************************\n");

}