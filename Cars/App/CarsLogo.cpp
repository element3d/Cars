#include "CarsLogo.h"

CarsLogo::CarsLogo(e3::Element* pParent)
	: CarsLogoBase(pParent)
{
	mBMW->SetScale(glm::vec3(0, 1, 1), e3::ETransformAlignment::Right);
	mBMWText->SetOpacity(0);
}

void CarsLogo::Show(OnFinishCallback c)
{
	mBMWText->SetOpacity(0);
	e3::Animation* pA = new e3::Animation();
	pA->Start(0.2, [this, c](float v) {
		mBMW->SetScale(glm::vec3(v, 1, 1), e3::ETransformAlignment::Right);
	}, [this, c] {
		mBMWText->SetTextColor(glm::vec4(255, 0, 76, 255));
		mBMWText->SetOpacity(1);
		e3::Animation* pA = new e3::Animation();
		pA->Start(0.2, [this](float v) {
			mBMW->SetScale(glm::vec3(1 - v, 1, 1), e3::ETransformAlignment::Left);
		}, [c] {
			c();
		});
	});
}