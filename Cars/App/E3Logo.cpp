#include "E3Logo.h"

E3Logo::E3Logo(e3::Element* pParent)
	: E3LogoBase(pParent)
{
	mECont->SetTranslation(glm::vec3(e3::Dim(60, 60, 60, 20, 20, 20), 0, 0));
	m3Cont->SetTranslation(glm::vec3(-e3::Dim(60, 60, 60, 20, 20, 20), 0, 0));
	mE3Mask->SetScale(glm::vec3(0, 1, 1), e3::ETransformAlignment::Left);
	mPB->SetScale(glm::vec3(0, 1, 1), e3::ETransformAlignment::Right);
}

void E3Logo::ShowStatic()
{
	mE3Mask->SetScale(glm::vec3(0, 1, 1), e3::ETransformAlignment::Left);
	mPB->SetScale(glm::vec3(0, 1, 1), e3::ETransformAlignment::Right);
	mEText->SetOpacity(1);
	mPBText->SetOpacity(1);
	m3Text->SetOpacity(1);
}

void E3Logo::Show(OnFinishCallback c)
{
	mE3Mask->SetScale(glm::vec3(0, 1, 1), e3::ETransformAlignment::Left);
	mPB->SetScale(glm::vec3(0, 1, 1), e3::ETransformAlignment::Right);
	//m3->SetScale(glm::vec3(0, 1, 1), e3::ETransformAlignment::Left);

	{
		e3::Animation* pA = new e3::Animation();
		pA->Start(0.2, [this](float v) {
			mE3Mask->SetScale(glm::vec3(v, 1, 1), e3::ETransformAlignment::Left);
			mPB->SetScale(glm::vec3(v, 1, 1), e3::ETransformAlignment::Right);
		}, [this, c] {
			mEText->SetOpacity(1);
			mPBText->SetOpacity(1);
			m3Text->SetOpacity(1);
			e3::Animation* pA = new e3::Animation();
			pA->Start(0.2, [this](float v) {
				mE3Mask->SetScale(glm::vec3(1 - v, 1, 1), e3::ETransformAlignment::Right);
				mPB->SetScale(glm::vec3(1 - v, 1, 1), e3::ETransformAlignment::Left);
			}, [this, c] {
				//	Show3();
				if (c) c();
			});
		});
	}
}

void E3Logo::SetColor(const glm::vec4& color)
{
	mEText->SetTextColor(color);
	mPBText->SetTextColor(color);
	mPB->SetBackgroundColor(color);
}