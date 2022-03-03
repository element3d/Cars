
#ifndef CarPage_H_
#define CarPage_H_

#include "private/CarPageBase.h"
#include "DBCar.h"

class E3_EXPORT CarPage : public CarPageBase
{
public:
	CarPage(DBCar* pCar, e3::Element* pParent = nullptr);

	void Show(float animationValue);
};

#endif // CarPage_H_

