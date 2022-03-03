
#ifndef GradientBackground_H_
#define GradientBackground_H_

#include "private/GradientBackgroundBase.h"

class E3_EXPORT GradientBackground : public GradientBackgroundBase
{
public:
	GradientBackground(e3::Element* pParent = nullptr);

	void Show(float animationValue);
	void Show2(float animationValue);

	void Hide(float animationValue);
};

#endif // GradientBackground_H_

