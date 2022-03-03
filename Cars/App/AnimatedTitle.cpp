#include "AnimatedTitle.h"

AnimatedTitle::AnimatedTitle(e3::Element* pParent)
	: AnimatedTitleBase(pParent)
{
	mWhiteMask->SetScale(glm::vec3(0, 1, 1), e3::ETransformAlignment::Left);
}

void AnimatedTitle::SetText1(const std::string& text1, bool translate)
{
	mText1->SetText(text1, translate);
}

void AnimatedTitle::SetText2(const std::string& text2, bool translate)
{
	mText2->SetText(text2, translate);
}

void AnimatedTitle::Show(float animationValue)
{
	mText1->SetOpacity(0);
	mText2->SetOpacity(0);
	if (animationValue < 0.5)
		mRedMask->SetScale(glm::vec3(animationValue * 2, 1, 1), e3::ETransformAlignment::Right);
	else
	{
		mText1->SetOpacity(1);
		mText2->SetOpacity(1);
		mRedMask->SetScale(glm::vec3(std::max((1 - animationValue) * 2, 0.02f), 1, 1), e3::ETransformAlignment::Left);
	}
}

void AnimatedTitle::Hide(float animationValue)
{
	mText1->SetOpacity(1);
	mText2->SetOpacity(1);
	if (animationValue < 0.5)
		mWhiteMask->SetScale(glm::vec3(std::max(animationValue * 2, 0.0f), 1, 1), e3::ETransformAlignment::Right);
	else
	{
		mText1->SetOpacity(0);
		mText2->SetOpacity(0);
		mWhiteMask->SetScale(glm::vec3((1 - animationValue) * 2, 1, 1), e3::ETransformAlignment::Left);
	}
}