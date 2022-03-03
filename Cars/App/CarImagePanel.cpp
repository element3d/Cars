#include "CarImagePanel.h"

CarImagePanel::CarImagePanel(e3::Element* pParent)
	: CarImagePanelBase(pParent)
{

}

void CarImagePanel::SetAvatar(std::shared_ptr<e3::Image> pAvatar)
{
	mCard->SetBackgroundImage(pAvatar);
}

void CarImagePanel::SetImages(const std::vector<std::shared_ptr<e3::Image>>& images)
{
	//mImages.clear();
	//mImages = images;
	int i = 0;
	for (auto& pImage : images)
	{
		e3::Element* pImageItem;
		if (mImagesContainer->GetNumChildren() >= i + 1)
		{
			pImageItem = mImagesContainer->GetChildren()[i];

		}
		else
		{
			pImageItem = new e3::Element();
			pImageItem->SetWidth(80);
			pImageItem->SetHeight(80);
			pImageItem->SetMarginLeft(10);
			pImageItem->SetBorderSize(1);
			pImageItem->SetBorderColor(glm::vec4(255));
			mImagesContainer->AddElement(pImageItem);
		}

		pImageItem->SetBackgroundImage(pImage);
		++i;
	}
}

void CarImagePanel::Show(float animationValue) 
{
	e3::Rect2f geo = mCardContainer->GetGeometry();
	e3::ClipRect2f cr(0, 0, geo.width, geo.height);
	cr.SetScale(glm::vec3(1, animationValue, 1), e3::ETransformAlignment::Top);
	mCardContainer->SetClipRect(cr);
	mCardMask->SetOpacity(1 - animationValue);

	mMask->SetVisibility(e3::EVisibility::Visible);
	if (animationValue <= 0.5)
	{
		mMask->SetScale(glm::vec3(animationValue * 2, 1, 1), e3::ETransformAlignment::Left);
	}
	else
	{
		mCarImages->SetVisibility(e3::EVisibility::Visible);
		mMask->SetBackgroundColor(glm::vec4(255, 255, 255, 255 * (2 - animationValue*2)));
		mMask->SetScale(glm::vec3(2 - animationValue * 2, 1, 1), e3::ETransformAlignment::Right);
	}
}