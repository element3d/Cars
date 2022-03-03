
#ifndef Button_H_
#define Button_H_

#include "private/ButtonBase.h"

class E3_EXPORT Button : public ButtonBase
{
public:
	Button(e3::Element* pParent = nullptr);

	void SetText(const std::string& text, bool translate = false);

	virtual bool OnClick(e3::MouseEvent* pEvent) override;
};

#endif // Button_H_

