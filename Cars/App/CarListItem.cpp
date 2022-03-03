#include "CarListItem.h"

CarListItem::CarListItem(DBCar* pCar, e3::Element* pParent)
	: CarListItemBase(pParent)
{

}

void CarListItem::SetAvatar(const std::string& path)
{
	mCard->SetBackgroundImagePath(path);
}

void CarListItem::SetAvatar(std::shared_ptr<e3::Image> pImage)
{
	mCard->SetBackgroundImage(pImage);
}

void CarListItem::SetTitle(const std::string& title)
{
	mTitle->SetText(title);
}

void CarListItem::SetPrice(const std::string& price)
{
	mPrice->SetText(price + "$");
}

void CarListItem::SetYear(const std::string& year)
{
	mYear->SetText(year);
}
