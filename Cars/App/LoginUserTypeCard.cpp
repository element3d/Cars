#include "LoginUserTypeCard.h"

LoginUserTypeCard::LoginUserTypeCard(e3::Element* pParent)
	: LoginUserTypeCardBase(pParent)
{

}

void LoginUserTypeCard::SetTitle(const std::string& title, bool translate)
{
	mTitle->SetText(title, translate);
}
