
#ifndef __LoginUserDataPageBase_H__
#define __LoginUserDataPageBase_H__

#include <e3/ViewFactory.h>
#include "Col.h"


class LoginUserDataPageBase : public Col
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    LoginUserDataPageBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Input* mFirstNameInput = nullptr;
e3::Input* mSecondNameInput = nullptr;


};

#endif // __LoginUserDataPageBase_H__

