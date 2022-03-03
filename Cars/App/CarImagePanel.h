
#ifndef CarImagePanel_H_
#define CarImagePanel_H_

#include "private/CarImagePanelBase.h"

class E3_EXPORT CarImagePanel : public CarImagePanelBase
{
public:
	CarImagePanel(e3::Element* pParent = nullptr);
	void SetAvatar(std::shared_ptr<e3::Image> pAvatar);
	void SetImages(const std::vector<std::shared_ptr<e3::Image>>& images);

	void Show(float animationValue);
};

#endif // CarImagePanel_H_

