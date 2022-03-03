
#ifndef CarListPage_H_
#define CarListPage_H_

#include "private/CarListPageBase.h"
#include "DBCar.h"

class E3_EXPORT CarListPage : public CarListPageBase
{
public:
	CarListPage(std::vector<DBCar*> cars, e3::Element* pParent = nullptr);
	void Show(float animationValue);
	void Hide(float animationValue);
	virtual void OnResume() override;

};

#endif // CarListPage_H_

