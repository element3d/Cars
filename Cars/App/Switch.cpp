#include "Switch.h"

Switch::Switch(e3::Element* pParent)
	: SwitchBase(pParent)
{
	mLeft->SetOnClickCallback([this](e3::MouseEvent*) {
		mLeft->SetBackgroundColor(glm::vec4(183, 255, 28, 255));
		mLeftText->SetTextColor(glm::vec4(0, 0, 0, 255));
		mRight->SetBackgroundColor(glm::vec4(0, 0, 0, 255));
		mRightText->SetTextColor(glm::vec4(255));
	});

	mRight->SetOnClickCallback([this](e3::MouseEvent*) {
		mLeft->SetBackgroundColor(glm::vec4(0, 0, 0, 255));
		mLeftText->SetTextColor(glm::vec4(255));
		mRight->SetBackgroundColor(glm::vec4(183, 255, 28, 255));
		mRightText->SetTextColor(glm::vec4(0, 0, 0, 255));
	});
}

void Switch::SetLeftText(const std::string& text, bool translate)
{
	mLeftText->SetText(text, translate);
}

void Switch::SetRightText(const std::string& text, bool translate) 
{
	mRightText->SetText(text, translate);
}

bool Switch::OnClick(e3::MouseEvent* pEvent)
{
	SwitchBase::OnClick(pEvent);
	pEvent->Stop();
	return true;
}