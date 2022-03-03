#include "CarSeriesPage.h"
#include "Utils.h"
#include "SerieCard.h"
#include "CarModelsPage.h"
#include <e3/Application.h>

CarSeriesPage::CarSeriesPage(EMake make, e3::Element* pParent)
	: CarSeriesPageBase(pParent)
{

	mAppBar->SetOnBackCallback([this]() {
		e3::Animation* pA = new e3::Animation();
		pA->Start(0.4, e3::EAnimation::EaseOutQuart, [this](float v) {
			Hide(v);
		}, []() {});
		GetApplication()->PopElement(pA);
	});

	Utils::GetClassListFromMake(make, mNames, mClasses, mImages, mBackgrounds);

	int i = 0;
	for (auto& c : mNames)
	{
		SerieCard* pCard = new SerieCard();
		pCard->SetTitle(c);
		pCard->SetMake(Utils::MakeEnumToString(make));
		if (mImages.size())
		{
			pCard->SetImage(mImages[i]);
//			if (mBackgrounds.size()) pCard->SetBackgroundImage(mBackgrounds[i]);
		}
		//	pCard->SetOpacity(0);
		mCarousel->AddElement(pCard);

		pCard->SetOnClickCallback([this, i](e3::MouseEvent* pEvent) {
			/*if (mAnimating)
			{
				pEvent->Stop();
				return;
			}
			mAnimating = true;
			mOnSerieChooseCallback(mClasses[i]);*/

			e3::Animation* pA = new e3::Animation();
			pA->Start(0.4, e3::EAnimation::EaseInQuart, [this](float v) {
				Hide(v);
			}, [this, i]() {
				CarModelsPage* pCarModelsPage = new CarModelsPage(mClasses[i]);
				e3::Animation* pA = new e3::Animation();
				pA->Start(0.4, e3::EAnimation::EaseInOutQuart, [this, pCarModelsPage](float v) {
					pCarModelsPage->Show(v);
				}, []() {

				});
				GetApplication()->PushElement(pCarModelsPage, false, pA);
			});
		});
		++i;
	}

}

void CarSeriesPage::OnResume()
{
	e3::Animation* pA = new e3::Animation();
	pA->Start(0.6, e3::EAnimation::EaseInOutQuart, [this](float v) {
		Show(v);
	}, []() {

	});
}

void CarSeriesPage::Show(float animationValue) 
{
	mBG->Show2(animationValue);
	mTopCarsPanel->Show(animationValue);
	mAppBar->Show(animationValue);

	auto geo = mCarousel->GetGeometry();
	e3::ClipRect2f r(0, 0, geo.width, geo.height);

	r.SetScale(glm::vec3(animationValue, 1, 1), e3::ETransformAlignment::Center);
	mCarousel->SetClipRect(r);
}

void CarSeriesPage::Hide(float animationValue)
{
	mBG->Hide(animationValue);
	mTopCarsPanel->Hide(animationValue);
	mAppBar->Hide(animationValue);

	auto geo = mCarousel->GetGeometry();
	e3::ClipRect2f r(0, 0, geo.width, geo.height);

	r.SetScale(glm::vec3(1 - animationValue, 1, 1), e3::ETransformAlignment::Center);
	mCarousel->SetClipRect(r);
}
