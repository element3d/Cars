#include "Switch3.h"

Switch3::Switch3(e3::Element* pParent)
	: Switch3Base(pParent)
{
	mAll->SetOnClickCallback([this](e3::MouseEvent*) {
		mLeft->SetBackgroundColor(glm::vec4(183, 255, 28, 255));
		mLeftText->SetTextColor(glm::vec4(0, 0, 0, 255));
		mRight->SetBackgroundColor(glm::vec4(183, 255, 28, 255));
		mRightText->SetTextColor(glm::vec4(0, 0, 0, 255));
		mAll->SetBackgroundColor(glm::vec4(183, 255, 28, 255));
		mAllText->SetTextColor(glm::vec4(0, 0, 0, 255));
	});

	mLeft->SetOnClickCallback([this](e3::MouseEvent*) {
		mLeft->SetBackgroundColor(glm::vec4(183, 255, 28, 255));
		mLeftText->SetTextColor(glm::vec4(0, 0, 0, 255));
		mRight->SetBackgroundColor(glm::vec4(0, 0, 0, 255));
		mRightText->SetTextColor(glm::vec4(255));
		mAll->SetBackgroundColor(glm::vec4(0, 0, 0, 255));
		mAllText->SetTextColor(glm::vec4(255));
	});

	mRight->SetOnClickCallback([this](e3::MouseEvent*) {
		mLeft->SetBackgroundColor(glm::vec4(0, 0, 0, 255));
		mLeftText->SetTextColor(glm::vec4(255));
		mRight->SetBackgroundColor(glm::vec4(183, 255, 28, 255));
		mRightText->SetTextColor(glm::vec4(0, 0, 0, 255));
		mAll->SetBackgroundColor(glm::vec4(0, 0, 0, 255));
		mAllText->SetTextColor(glm::vec4(255));
	});
}
