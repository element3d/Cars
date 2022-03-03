#include "TopCarCard.h"

TopCarCard::TopCarCard(e3::Element* pParent)
	: TopCarCardBase(pParent)
{

}

void TopCarCard::SetImage(const std::string& path)
{
//	mImage->SetBackgroundImagePath(path);
}

void TopCarCard::SetImage(std::shared_ptr<e3::Image> pImage)
{
//	mImage->SetBackgroundImage(pImage);
}

void TopCarCard::SetPrice(const std::string& price)
{
	mPrice->SetText(price + "$");
}

void TopCarCard::SetYear(const std::string& year)
{
	mYear->SetText(year);
}
