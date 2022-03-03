
#ifndef LoginUserDataPage_H_
#define LoginUserDataPage_H_

#include "private/LoginUserDataPageBase.h"

class E3_EXPORT LoginUserDataPage : public LoginUserDataPageBase
{
public:
	LoginUserDataPage(e3::Element* pParent = nullptr);

	std::string GetFirstName();
	std::string GetSecondName();
};

#endif // LoginUserDataPage_H_

