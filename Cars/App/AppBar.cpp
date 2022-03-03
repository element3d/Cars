#include "AppBar.h"

AppBar::AppBar(e3::Element* pParent)
	: AppBarBase(pParent)
{
	mBack->SetOnClickCallback([this](e3::MouseEvent*) {
		mOnBackCallback();
	});
}

void AppBar::Show(float animationValue) 
{
	mMask->SetHeight(mBG->GetGeometry().height);

	auto geo = GetGeometry();
	e3::ClipRect2f r(0, 0, geo.width, geo.height);

	r.SetScale(glm::vec3(animationValue, 1, 1), e3::ETransformAlignment::Center);
	SetClipRect(r);
	mMask->SetBackgroundColor(glm::vec4(255, 255, 255, (1 - animationValue) * 255));
}

void AppBar::Hide(float animationValue)
{
	mMask->SetHeight(mBG->GetGeometry().height);

	auto geo = GetGeometry();
	e3::ClipRect2f r(0, 0, geo.width, geo.height);

	r.SetScale(glm::vec3(1 - animationValue, 1, 1), e3::ETransformAlignment::Center);
	SetClipRect(r);
	mMask->SetBackgroundColor(glm::vec4(255, 255, 255, (animationValue) * 255));
}

void AppBar::SetOnBackCallback(std::function<void(void)> c)
{
	mOnBackCallback = c;
}