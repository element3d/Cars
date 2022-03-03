#include "LoginUserDataPage.h"

LoginUserDataPage::LoginUserDataPage(e3::Element* pParent)
	: LoginUserDataPageBase(pParent)
{

}

std::string LoginUserDataPage::GetFirstName() 
{
	return mFirstNameInput->GetText();
}

std::string LoginUserDataPage::GetSecondName() 
{
	return mSecondNameInput->GetText();
}
