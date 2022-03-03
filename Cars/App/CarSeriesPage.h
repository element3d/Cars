
#ifndef CarSeriesPage_H_
#define CarSeriesPage_H_

#include "private/CarSeriesPageBase.h"
#include "Enum.h"

class E3_EXPORT CarSeriesPage : public CarSeriesPageBase
{
public:
	CarSeriesPage(EMake make, e3::Element* pParent = nullptr);
	void Show(float animationValue);
	void Hide(float animationValue);
	virtual void OnResume() override;
private:
	std::vector<std::string> mNames;
	std::vector<ESerie> mClasses;
	std::vector<std::string> mImages;
	std::vector<std::string> mBackgrounds;
};

#endif // CarSeriesPage_H_

