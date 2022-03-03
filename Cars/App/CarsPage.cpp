#include "CarsPage.h"
#include "Utils.h"
#include "MakeCard.h"
#include "TopCarCard.h"
#include "CarManager.h"
#include "CarSeriesPage.h"
#include <e3/Application.h>

CarsPage::CarsPage(e3::Element* pParent)
	: CarsPageBase(pParent)
{

	mE3Logo->Show([]() {});

	mAppBar->SetOnBackCallback([this]() {
		e3::Animation* pA = new e3::Animation();
		pA->Start(0.4, e3::EAnimation::EaseOutQuart, [this](float v) {
			Hide(v);
		}, []() {});
		GetApplication()->PopElement(pA);
	});

	Utils::GetMakesData(mNames, mImages, mLogos);
	int i = 0;
	Col* pCol = 0;
	for (auto& make : mNames)
	{
		MakeCard* pCard = new MakeCard(/*EMake(i)*/);
		pCard->SetTitle(make);
		pCard->SetImage(mImages[i]);
		pCard->SetLogo(mLogos[i]);
		if (i % 3 == 0)
		{
			pCol = new Col();
			mScroll->AddElement(pCol);
		}
		pCol->AddElement(pCard);
		// mCards.push_back(pCard);
		pCard->SetOnClickCallback([this, i](e3::MouseEvent* pEvent) {
			/*if (mAnimating)
			{
				pEvent->Stop();
				return;
			}
			mAnimating = true;*/
			//if (mOnChooseCallback) mOnChooseCallback(EMake(i));

			e3::Animation* pA = new e3::Animation();
			pA->Start(0.4, e3::EAnimation::EaseInQuart, [this](float v) {
				Hide(v);
			}, [this, i]() {
				CarSeriesPage* pCarSeriesPage = new CarSeriesPage(EMake(i));
				e3::Animation* pA = new e3::Animation();
				pA->Start(0.4, e3::EAnimation::EaseInOutQuart, [this, pCarSeriesPage](float v) {
					pCarSeriesPage->Show(v);
				}, []() {

				});
				GetApplication()->PushElement(pCarSeriesPage, false, pA);
			});

			
		});
		++i;
		
	}

	std::vector<DBCar*> cars;
	CarManager::Get()->GetTopCars(cars, EMake::All);
	for (int i = 0; i < cars.size(); ++i)
	{
		auto pCar = cars[i];
		TopCarCard* pCard = new TopCarCard();
		//pCard->SetImage(pCar->GetAvatar());
		//pCard->SetYear(std::to_string(pCar->Year));
		pCard->SetPrice(std::to_string(pCar->Price));
		mTopCarsPanel->AddItem(pCard);
	}
}

void CarsPage::OnResume()
{
	e3::Animation* pA = new e3::Animation();
	pA->Start(0.6, e3::EAnimation::EaseInOutQuart, [this](float v) {
		Show(v);
	}, []() {

	});
}

void CarsPage::Show(float animationValue)
{
	mBG->Show(animationValue);
	mAppBar->Show(animationValue);
	mTopCarsPanel->Show(animationValue);
	auto geo = mScroll->GetGeometry();
	e3::ClipRect2f r(0, 0, geo.width, geo.height);

	r.SetScale(glm::vec3(animationValue, 1, 1), e3::ETransformAlignment::Right);
	mScroll->SetClipRect(r);
}

void CarsPage::Hide(float animationValue)
{
	mBG->Hide(animationValue);
	mAppBar->Hide(animationValue);
	mTopCarsPanel->Hide(animationValue);
	auto geo = mScroll->GetGeometry();
	e3::ClipRect2f r(0, 0, geo.width, geo.height);

	r.SetScale(glm::vec3(1 - animationValue, 1, 1), e3::ETransformAlignment::Right);
	mScroll->SetClipRect(r);
}