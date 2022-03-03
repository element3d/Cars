
#ifndef LoginUserTypePage_H_
#define LoginUserTypePage_H_

#include "private/LoginUserTypePageBase.h"
#include "Enum.h"

class E3_EXPORT LoginUserTypePage : public LoginUserTypePageBase
{
	typedef std::function<void(EUserType)> OnResultCallback;
public:
	LoginUserTypePage(e3::Element* pParent = nullptr);

	void SetOnResultCallback(OnResultCallback c);
private:
	OnResultCallback mOnResultCallback;
};

#endif // LoginUserTypePage_H_

