
#ifndef CarsPage_H_
#define CarsPage_H_

#include "private/CarsPageBase.h"

class E3_EXPORT CarsPage : public CarsPageBase
{
public:
	CarsPage(e3::Element* pParent = nullptr);
	virtual void OnResume() override;
	void Show(float animationValue);
	void Hide(float animationValue);
private:
	std::vector<std::string> mNames;
	std::vector<std::string> mImages;
	std::vector<std::string> mLogos;
};

#endif // CarsPage_H_

