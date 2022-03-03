
#ifndef CInput_H_
#define CInput_H_

#include "private/CInputBase.h"

class E3_EXPORT CInput : public CInputBase
{
public:
	CInput(e3::Element* pParent = nullptr);

	std::string GetText();
};

#endif // CInput_H_

