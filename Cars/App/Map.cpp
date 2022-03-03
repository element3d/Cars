#include "Map.h"
#include <e3/Application.h>
#include "CarsPage.h"
#include "LoginPage.h"

Map::Map(e3::Element* pParent)
	: MapBase(pParent)
{
	float trx = 200;
	mContainer->Translate(glm::vec3(trx, 0, 0));
	// mClouds->Translate(glm::vec3(-trx / 4, 0, 0));
	
	{
		std::shared_ptr<e3::Image> pImage = std::shared_ptr<e3::Image>(new e3::Image());
		pImage->LoadAssetAsync(GetApplication()->GetAssetManager()->GetAssetPath("Cars/images/home/map.png"));
		mContainer->GetChildren()[0]->SetBackgroundImage(pImage);
		/*pImage->LoadFile(GetApplication()->GetAssetManager()->GetAssetPath("Cars/images/home/map.png"), std::shared_ptr<Callback<void(void)>>(new Callback<void(void)>([this, pImage]() {
			mContainer->GetChildren()[0]->SetBackgroundImage(pImage);
		})));*/
	}

	{
		//std::shared_ptr<e3::Image> pImage = std::shared_ptr<e3::Image>(new e3::Image());
	//	pImage->LoadAssetAsync(GetApplication()->GetAssetManager()->GetAssetPath("Cars/images/home/layers.png"));
		//mMapLayer->SetBackgroundImage(pImage);
		/*pImage->LoadFile(GetApplication()->GetAssetManager()->GetAssetPath("Cars/images/home/layers.png"), std::shared_ptr<Callback<void(void)>>(new Callback<void(void)>([this, pImage]() {
			mMapLayer->SetBackgroundImage(pImage);
		})));*/
	}
#if __E3_OS_WINDOWS__
	//mContainer->GetChildren()[0]->SetBackgroundImage("Cars/images/home/map.png");
	//mMapLayer->SetBackgroundImage("Cars/images/home/layers.png");
#else
#endif

	mGarage->SetOnClickCallback([this](e3::MouseEvent* pEvent) {
		LoginPage* pLoginPage = new LoginPage();
		AddElement(pLoginPage);
	});

	mCars->SetOnClickCallback([this](e3::MouseEvent* pEvent) {
		//mOnMenuChooseCallback(EMainMenu::NewCar);
		CarsPage* pCarsPage = new CarsPage();
		e3::Animation* pA = new e3::Animation();
		pA->Start(0.6, e3::EAnimation::EaseInOutQuart, [this, pCarsPage](float v) {
			pCarsPage->Show(v);
		}, []() {
		
		});
		GetApplication()->PushElement(pCarsPage, false, pA);
	});

	mAutoParts->SetOnClickCallback([this](e3::MouseEvent* pEvent) {
		//mOnMenuChooseCallback(EMainMenu::AutoParts);
	});


	mEvents->SetOnClickCallback([this](e3::MouseEvent* pEvent) {
		//mOnMenuChooseCallback(EMainMenu::Events);
	});

	//_AnimateLayer();
}

void Map::OnMouseMove(e3::MouseEvent* pEvent)
{
	mContainer->Translate(glm::vec3(-pEvent->GetDistanceX(), pEvent->GetDistanceY(), 0));
	mClouds->Translate(glm::vec3(pEvent->GetDistanceX() / 4, -pEvent->GetDistanceY() / 4, 0));
}

void Map::_AnimateLayer()
{
	e3::Animation* pA = new e3::Animation();
	pA->Start(3.5, e3::EAnimation::EaseInOutBounce, [this](float v) {
		mMapLayer->SetOpacity(std::max(0.5f, v));
		mClouds->SetOpacity(std::max(0.4f, v));
	}, [this] {
		e3::Animation* pA = new e3::Animation();
		pA->Start(3.5/*, e3::EAnimation::EaseInOutBounce*/, [this](float v) {
			mMapLayer->SetOpacity(std::max(0.5f, 1 - v));
			mClouds->SetOpacity(std::max(0.4f, 1 - v));
		}, [this] {
			_AnimateLayer();

		});
	});
}