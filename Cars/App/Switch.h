
#ifndef Switch_H_
#define Switch_H_

#include "private/SwitchBase.h"

class E3_EXPORT Switch : public SwitchBase
{
public:
	Switch(e3::Element* pParent = nullptr);

	void SetLeftText(const std::string& text, bool translate = false);
	void SetRightText(const std::string& text, bool translate = false);

	virtual bool OnClick(e3::MouseEvent*) override;
};

#endif // Switch_H_

