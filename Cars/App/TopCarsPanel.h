
#ifndef TopCarsPanel_H_
#define TopCarsPanel_H_

#include "private/TopCarsPanelBase.h"

class E3_EXPORT TopCarsPanel : public TopCarsPanelBase
{
public:
	TopCarsPanel(e3::Element* pParent = nullptr);

	void Show(float animationValue);
	void Hide(float animationValue);
	void AddItem(e3::Element* pItem);
};

#endif // TopCarsPanel_H_

