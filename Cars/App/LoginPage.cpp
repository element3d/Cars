#include "LoginPage.h"
#include "AuthManager.h"

LoginPage::LoginPage(e3::Element* pParent)
	: LoginPageBase(pParent)
{
	mNextButton->SetOnClickCallback([this](e3::MouseEvent*) {
		if (mState == ELoginState::Phone)
		{
			//			mUser = new DBUser();
			mPhone = mInput->GetText();
			bool b = AuthManager::Get()->CheckUser(mPhone);

			mInput->SetText("");
			mInput->SetHint("PASSWORD");
			mState = ELoginState::Password;
		}
		else if (mState == ELoginState::Password)
		{
			mPassword = mInput->GetText();
			ELoginStatus s = AuthManager::Get()->Login(mPhone, mPassword);
			if (s == ELoginStatus::Ok)
			{
				mOnResultCallback(AuthManager::Get()->GetUser());
				return;
			}
			if (s == ELoginStatus::WrongPassword)
				return;

			if (!mLoginUserTypePage)
			{
				mLoginUserTypePage = new LoginUserTypePage();
				mLoginUserTypePage->SetOnResultCallback([this](EUserType userType) {
					mUserType = userType;
				});
			}
			mContainer->Clear();
			mContainer->AddElement(mLoginUserTypePage);
			mState = ELoginState::UserType;
			// 
		}
		else if (mState == ELoginState::UserType)
		{
			if (!mLoginUserDataPage)
			{
				mLoginUserDataPage = new LoginUserDataPage();
			}
			mContainer->Clear();
			mContainer->AddElement(mLoginUserDataPage);
			mState = ELoginState::UserData;
		}
		else if (mState == ELoginState::UserData)
		{
			mFirstName = mLoginUserDataPage->GetFirstName();
			mSecondName = mLoginUserDataPage->GetSecondName();
			AuthManager::Get()->CreateUser(mPhone, mPassword, mUserType, mFirstName, mSecondName);
			AuthManager::Get()->Login(mPhone, mPassword);

			mOnResultCallback(AuthManager::Get()->GetUser());
		}
	});
}

void LoginPage::SetOnResultCallback(OnResultCallback c)
{
	mOnResultCallback = c;
}

bool LoginPage::OnClick(e3::MouseEvent* pEvent)
{
	LoginPageBase::OnClick(pEvent);
	//pEvent->Stop();
	return true;
}