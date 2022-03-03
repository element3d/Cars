#include "CarModelsPage.h"
#include "Utils.h"
#include "SerieCard.h"
#include "CarListPage.h"
#include <e3/Application.h>
#include "CarManager.h"

CarModelsPage::CarModelsPage(ESerie serie, e3::Element* pParent)
	: CarModelsPageBase(pParent)
{
	mAppBar->SetOnBackCallback([this]() {
		e3::Animation* pA = new e3::Animation();
		pA->Start(0.4, e3::EAnimation::EaseOutQuart, [this](float v) {
			Hide(v);
		}, []() {});
		GetApplication()->PopElement(pA);
	});


	std::string make;
	mNames.clear();
	mModels.clear();
	mImages.clear();
	Utils::GetModelsFromClass(serie, make, mNames, mModels, mImages);

	int k = 0;
	for (auto& m : mNames)
	{
		/*if (k % 2 == 0)
		{
		pRow = new Row();
		mCards->AddElement(pRow);
		}*/
		SerieCard* pCard = new SerieCard();
		pCard->SetMake(make);
		pCard->SetTitle(m);
		if (mImages.size())
			pCard->SetImage(mImages[k]);
		//pCard->SetBackgroundImage(mImages[k]);
		mCarousel->AddElement(pCard);

		pCard->SetOnClickCallback([this, k, serie](e3::MouseEvent*) {
			//mAnimating = true;
			//mOnModelSelectCallback(mModels[k]);
			std::vector<DBCar*> cars;
			CarFilter f;
			//f.Make = make;
			f.Class = serie;
			f.Model = mModels[k];
			CarManager::Get()->GetCarsFiltered(&f, cars);

			e3::Animation* pA = new e3::Animation();
			pA->Start(0.4, e3::EAnimation::EaseInQuart, [this](float v) {
				Hide(v);
			}, [this, cars]() {
				CarListPage* pCarListPage = new CarListPage(cars);
				e3::Animation* pA = new e3::Animation();
				pA->Start(0.4, e3::EAnimation::EaseInOutQuart, [this, pCarListPage](float v) {
					pCarListPage->Show(v);
				}, []() {

				});
				GetApplication()->PushElement(pCarListPage, false, pA);

			});
		});

		++k;
	}
}

void CarModelsPage::OnResume()
{
	e3::Animation* pA = new e3::Animation();
	pA->Start(0.6, e3::EAnimation::EaseInOutQuart, [this](float v) {
		Show(v);
	}, []() {

	});
}

void CarModelsPage::Show(float animationValue)
{
	mBG->Show2(animationValue);
	mTopCarsPanel->Show(animationValue);
	mAppBar->Show(animationValue);

	auto geo = mCarousel->GetGeometry();
	e3::ClipRect2f r(0, 0, geo.width, geo.height);

	r.SetScale(glm::vec3(animationValue, 1, 1), e3::ETransformAlignment::Center);
	mCarousel->SetClipRect(r);
}

void CarModelsPage::Hide(float animationValue)
{
	mBG->Hide(animationValue);
	mTopCarsPanel->Hide(animationValue);
	mAppBar->Hide(animationValue);

	auto geo = mCarousel->GetGeometry();
	e3::ClipRect2f r(0, 0, geo.width, geo.height);

	r.SetScale(glm::vec3(1 - animationValue, 1, 1), e3::ETransformAlignment::Center);
	mCarousel->SetClipRect(r);
}
