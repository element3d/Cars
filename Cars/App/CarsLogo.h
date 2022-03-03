
#ifndef CarsLogo_H_
#define CarsLogo_H_

#include "private/CarsLogoBase.h"

class E3_EXPORT CarsLogo : public CarsLogoBase
{
	typedef std::function<void(void)> OnFinishCallback;

public:
	CarsLogo(e3::Element* pParent = nullptr);

	void Show(OnFinishCallback c);
};

#endif // CarsLogo_H_

