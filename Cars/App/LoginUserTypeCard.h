
#ifndef LoginUserTypeCard_H_
#define LoginUserTypeCard_H_

#include "private/LoginUserTypeCardBase.h"

class E3_EXPORT LoginUserTypeCard : public LoginUserTypeCardBase
{
public:
	LoginUserTypeCard(e3::Element* pParent = nullptr);
	void SetTitle(const std::string& title, bool translate = false);
};

#endif // LoginUserTypeCard_H_

