
#ifndef AppBar_H_
#define AppBar_H_

#include "private/AppBarBase.h"

class E3_EXPORT AppBar : public AppBarBase
{
public:
	AppBar(e3::Element* pParent = nullptr);
	void SetOnBackCallback(std::function<void(void)> c);
	void Show(float animationValue);
	void Hide(float animationValue);

private:
	std::function<void(void)> mOnBackCallback;
};

#endif // AppBar_H_

