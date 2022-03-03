
#ifndef AnimatedTitle_H_
#define AnimatedTitle_H_

#include "private/AnimatedTitleBase.h"

class E3_EXPORT AnimatedTitle : public AnimatedTitleBase
{
public:
	AnimatedTitle(e3::Element* pParent = nullptr);

	void SetText1(const std::string& text1, bool translate = false);
	void SetText2(const std::string& text1, bool translate = false);
	void Show(float animationValue);
	void Hide(float animationValue);
};

#endif // AnimatedTitle_H_

