#include "CarPage.h"
#include <e3/Application.h>

CarPage::CarPage(DBCar* pCar, e3::Element* pParent)
	: CarPageBase(pParent)
{
	mAppBar->SetOnBackCallback([this]() {
		e3::Animation* pA = new e3::Animation();
		pA->Start(0.4, e3::EAnimation::EaseOutQuart, [this](float v) {
			//Hide(v);
		}, []() {});
		GetApplication()->PopElement(pA);
	});

	mCarImagePanel->SetAvatar(pCar->GetAvatar());
	mCarImagePanel->SetImages(pCar->GetImages());

}

void CarPage::Show(float animationValue)
{
	mBG->Show2(animationValue);
	mAppBar->Show(animationValue);
	mCarImagePanel->Show(animationValue);

	auto geo = mContainer->GetGeometry();
	e3::ClipRect2f r(0, 0, geo.width, geo.height);

	r.SetScale(glm::vec3(1, animationValue, 1), e3::ETransformAlignment::Top);
	mContainer->SetClipRect(r);
}