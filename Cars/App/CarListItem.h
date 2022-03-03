
#ifndef CarListItem_H_
#define CarListItem_H_

#include "private/CarListItemBase.h"
#include "DBCar.h"

class E3_EXPORT CarListItem : public CarListItemBase
{
public:
	CarListItem(DBCar* pCar, e3::Element* pParent = nullptr);

	void SetAvatar(std::shared_ptr<e3::Image> pImage);

	void SetAvatar(const std::string& path);
	void SetTitle(const std::string& title);
	void SetPrice(const std::string& price);
	void SetYear(const std::string& year);
};

#endif // CarListItem_H_

