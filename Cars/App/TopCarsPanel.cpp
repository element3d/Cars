#include "TopCarsPanel.h"

TopCarsPanel::TopCarsPanel(e3::Element* pParent)
	: TopCarsPanelBase(pParent)
{

}

void TopCarsPanel::Show(float animationValue)
{
	mMask->SetHeight(mScroll->GetGeometry().height);
	mTitle->Show(animationValue);
	mScroll->SetOpacity(0);
	if (animationValue <= 0.5)
		mMask->SetScale(glm::vec3(animationValue * 2, 1, 1), e3::ETransformAlignment::Left);
	else
	{
		mMask->SetScale(glm::vec3((1 - animationValue) * 2, 1, 1), e3::ETransformAlignment::Right);
		mScroll->SetOpacity(1);
	}
}

void TopCarsPanel::Hide(float animationValue)
{
	mMask->SetHeight(mScroll->GetGeometry().height);
	mTitle->Hide(animationValue);
	mScroll->SetOpacity(1);
	if (animationValue <= 0.5)
	{
		mMask->SetScale(glm::vec3((animationValue) * 2, 1, 1), e3::ETransformAlignment::Left);
	}
	else
	{
		mScroll->SetOpacity(0);
		mMask->SetScale(glm::vec3((1-animationValue) * 2, 1, 1), e3::ETransformAlignment::Right);
	}
}

void TopCarsPanel::AddItem(e3::Element* pItem)
{
	mScroll->AddElement(pItem);
}