
#ifndef CarModelsPage_H_
#define CarModelsPage_H_

#include "private/CarModelsPageBase.h"
#include "Enum.h"

class E3_EXPORT CarModelsPage : public CarModelsPageBase
{
public:
	CarModelsPage(ESerie serie, e3::Element* pParent = nullptr);
	void Show(float animationValue);
	void Hide(float animationValue);
	virtual void OnResume() override;

private:
	std::vector<std::string> mNames;
	std::vector<EModel> mModels;
	std::vector<std::string> mImages;
};

#endif // CarModelsPage_H_

