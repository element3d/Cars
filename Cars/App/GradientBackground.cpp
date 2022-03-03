#include "GradientBackground.h"

GradientBackground::GradientBackground(e3::Element* pParent)
	: GradientBackgroundBase(pParent)
{
	mGradient->SetBackgroundRadialGradient(glm::vec2(0), 0, 800, glm::vec4(0, 73, 141, 255), glm::vec4(0, 146, 192, 255));
	//mMask->SetScale(glm::vec3(0, 0, 1), e3::ETransformAlignment::Center);
}

void GradientBackground::Show(float animationValue) 
{
	auto geo = GetGeometry();
	e3::ClipRect2f r(0, 0, geo.width, geo.height);

	r.SetScale(glm::vec3(animationValue, 1, 1), e3::ETransformAlignment::Left);
	SetClipRect(r);
	mMask->SetBackgroundColor(glm::vec4(255, 255, 255, (1 - animationValue) * 255));

	/*mMask->SetScale(glm::vec3(std::min(4 * animationValue, 1.0f), animationValue, 1), e3::ETransformAlignment::Center);

	if (animationValue > 0.5)
		mMask->SetBackgroundColor(glm::vec4(255, 255, 255, 255 * (1 - animationValue)));*/
}

void GradientBackground::Show2(float animationValue)
{
	mMask->SetBackgroundColor(glm::vec4(0, 0, 0, (1 - 2 * animationValue) * 255));
}

void GradientBackground::Hide(float animationValue)
{
	/*auto geo = GetGeometry();
	e3::ClipRect2f r(0, 0, geo.width, geo.height);

	r.SetScale(glm::vec3(1 - animationValue, 1, 1), e3::ETransformAlignment::Left);
	SetClipRect(r);*/
	mMask->SetBackgroundColor(glm::vec4(0, 0, 0, (0.5 * animationValue) * 255));
}
