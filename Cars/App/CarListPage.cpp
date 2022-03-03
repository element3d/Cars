#include "CarListPage.h"
#include "CarListItem.h"
#include "CarManager.h"
#include "CarPage.h"
#include <e3/Application.h>

CarListPage::CarListPage(std::vector<DBCar*> cars, e3::Element* pParent)
	: CarListPageBase(pParent)
{
	mAppBar->SetOnBackCallback([this]() {
		e3::Animation* pA = new e3::Animation();
		pA->Start(0.4, e3::EAnimation::EaseOutQuart, [this](float v) {
			Hide(v);
		}, []() {});
		GetApplication()->PopElement(pA);
	});

	for (auto pCar : cars)
	{
		CarListItem* pItem = new CarListItem(pCar);
		
		pItem->SetPrice(std::to_string(pCar->Price));
		pItem->SetYear(std::to_string(pCar->Year));
		pItem->SetAvatar(pCar->GetAvatar());
		// pItem->SetTitle(_GetTitleFromSubModel((ESubModel)pCar->Submodel));
		mContainer->AddElement(pItem);

		pItem->SetOnClickCallback([this, pCar](e3::MouseEvent*) {
			e3::Animation* pA = new e3::Animation();
			pA->Start(0.4, e3::EAnimation::EaseInQuart, [this, pCar](float v) {
				Hide(v);
			}, [this, pCar]() {
				CarPage* pCarPage = new CarPage(pCar);
				e3::Animation* pA = new e3::Animation();
				pA->Start(0.4, e3::EAnimation::EaseInOutQuart, [this, pCarPage](float v) {
					pCarPage->Show(v);
				}, []() {

				});
				GetApplication()->PushElement(pCarPage, false, pA);
			});


			//mOnCarChooseCallback(pCar);
		});
	}
}

void CarListPage::OnResume()
{
	e3::Animation* pA = new e3::Animation();
	pA->Start(0.6, e3::EAnimation::EaseInOutQuart, [this](float v) {
		Show(v);
	}, []() {

	});
}

void CarListPage::Show(float animationValue)
{
	mAppBar->Show(animationValue);
	mBG->Show2(animationValue);
	mTopCarsPanel->Show(animationValue);

	auto geo = mContainer->GetGeometry();
	e3::ClipRect2f r(0, 0, geo.width, geo.height);

	r.SetScale(glm::vec3(1, animationValue, 1), e3::ETransformAlignment::Top);
	mContainer->SetClipRect(r);
}

void CarListPage::Hide(float animationValue) 
{
	mAppBar->Hide(animationValue);
	mBG->Hide(animationValue);
	mTopCarsPanel->Hide(animationValue);

	auto geo = mContainer->GetGeometry();
	e3::ClipRect2f r(0, 0, geo.width, geo.height);

	r.SetScale(glm::vec3(1, 1 - animationValue, 1), e3::ETransformAlignment::Top);
	mContainer->SetClipRect(r);
}

