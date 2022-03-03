#include "SplashScreen.h"
#include "Main.h"
#include <e3/Application.h>

SplashScreen::SplashScreen(e3::Element* pParent)
	: SplashScreenBase(pParent)
{
	mMask->SetScale(glm::vec3(0, 1, 1), e3::ETransformAlignment::Left);
	Show([this]() {
		e3::Animation* pA = new e3::Animation();
		pA->Start(0.2, [this](float v) {
			mMask->SetScale(glm::vec3(1 - v, 1, 1), e3::ETransformAlignment::Left);
			SetScale(glm::vec3(1 - v, 1 - 0, 1), e3::ETransformAlignment::Left);
		}, [this] {
			//mBmwLogo->ShowAddMode();
			
		});
		GetApplication()->PushElement(new Main()/*, true, pA*/);
	});
}


void SplashScreen::Show(OnFinishCallback c)
{
	mE3Logo->Show([this, c]() {
		e3::Timeout* pT = new e3::Timeout();
		pT->Start(0.5, [this, c]() {
			HideE3Logo(c);
		});

	});

}

void SplashScreen::HideE3Logo(OnFinishCallback c)
{
	e3::Animation* pA = new e3::Animation();
	pA->Start(0.2, [this, c](float v) {
		mMask->SetScale(glm::vec3(v, 1, 1), e3::ETransformAlignment::Left);
	}, [this, c] {
		mBmwLogo->SetOpacity(1);
		mE3Logo->SetOpacity(0);
		e3::Animation* pA = new e3::Animation();
		pA->Start(0.2, [this, c](float v) {
			mMask->SetScale(glm::vec3(1 - v, 1, 1), e3::ETransformAlignment::Right);
		}, [this, c] {
			mBmwLogo->Show([this, c]() {
				e3::Timeout* pT = new e3::Timeout();
				pT->Start(0.5, [this, c]() {
					Hide(c);
					//c();
				});
			});
		});
	});
}

void SplashScreen::Hide(OnFinishCallback c)
{
	e3::Animation* pA = new e3::Animation();
	pA->Start(0.2, [this](float v) {
		mMask->SetScale(glm::vec3(v, 1, 1), e3::ETransformAlignment::Right);
	}, [this, c] {
		mBmwLogo->SetOpacity(0);
		mE3Logo->SetOpacity(0);
		c();
		/*e3::Animation* pA = new e3::Animation();
		pA->Start(0.2, [this](float v) {
			mMask->SetScale(glm::vec3(1 - v, 1, 1), e3::ETransformAlignment::Left);
			SetScale(glm::vec3(1 - v, 1 - 0, 1), e3::ETransformAlignment::Left);
		}, [this, c] {
			//mBmwLogo->ShowAddMode();
			c();
		});*/
	});
}

