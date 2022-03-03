#include "Button.h"

Button::Button(e3::Element* pParent)
	: ButtonBase(pParent)
{
}

void Button::SetText(const std::string& text, bool translate)
{
	mText->SetText(text, translate);
}

bool Button::OnClick(e3::MouseEvent* pEvent) 
{
	ButtonBase::OnClick(pEvent);

	SetBackgroundColor(glm::vec4(0, 0, 0, 255));
	SetBorderColor(glm::vec4(183, 255, 28, 255));
	mText->SetTextColor(glm::vec4(183, 255, 28, 255));

//	mBG->SetVisibility(e3::EVisibility::Visible);
	e3::Animation* pA = new e3::Animation();
	pA->Start(0.3, 0, 1, [this](float v) {
	//	mBG->SetOpacity(v*2);
		if (v > 0.2)
		{
			SetBackgroundColor(glm::vec4(183, 255, 28, 255));
			SetBorderColor(glm::vec4(0, 0, 0, 255));
			mText->SetTextColor(glm::vec4(0, 0, 0, 255));
		/*	mBG->SetWidthPercent((1 - v) * 100);
			mBG->SetHeightPercent((1 - v) * 100);
			SetScale(glm::vec3((1 - v)), e3::ETransformAlignment::TopLeft);*/
		}
		
		//SetHeight((1 - v) * 70);
	}, [] {
	
	});
	return true;
}
