
#ifndef LoginPage_H_
#define LoginPage_H_

#include "private/LoginPageBase.h"
#include "Enum.h"
#include "LoginUserTypePage.h"
#include "LoginUserDataPage.h"

enum class ELoginState
{
	Phone,
	Password,
	UserType,
	UserData
};

class E3_EXPORT LoginPage : public LoginPageBase
{
	typedef std::function<void(DBUser*)> OnResultCallback;

public:
	LoginPage(e3::Element* pParent = nullptr);

	void SetOnResultCallback(OnResultCallback c);

	virtual bool OnClick(e3::MouseEvent* pEvent) override;

private:
	std::string mPhone;
	std::string mPassword;
	EUserType mUserType;
	std::string mFirstName;
	std::string mSecondName;

	LoginUserTypePage* mLoginUserTypePage = nullptr;
	LoginUserDataPage* mLoginUserDataPage = nullptr;
	OnResultCallback mOnResultCallback;
	ELoginState mState = ELoginState::Phone;
};

#endif // LoginPage_H_

