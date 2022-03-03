#include "LoginUserTypePage.h"

LoginUserTypePage::LoginUserTypePage(e3::Element* pParent)
	: LoginUserTypePageBase(pParent)
{
	mDriver->SetOnClickCallback([this](e3::MouseEvent* pE) {
		mOnResultCallback(EUserType::Driver);
	});
	mAutoDiller->SetOnClickCallback([this](e3::MouseEvent* pE) {
		mOnResultCallback(EUserType::AutoDiller);
	});
	mCarShowRoom->SetOnClickCallback([this](e3::MouseEvent* pE) {
		mOnResultCallback(EUserType::CarShowRoom);
	});
	mAutoPartsStore->SetOnClickCallback([this](e3::MouseEvent* pE) {
		mOnResultCallback(EUserType::AutoPartsStore);
	});
	mChopShop->SetOnClickCallback([this](e3::MouseEvent* pE) {
		mOnResultCallback(EUserType::ChopShop);
	});
	mAutoService->SetOnClickCallback([this](e3::MouseEvent* pE) {
		mOnResultCallback(EUserType::AutoService);
	});

}

void LoginUserTypePage::SetOnResultCallback(OnResultCallback c) 
{
	mOnResultCallback = c;
}
