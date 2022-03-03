
#ifndef __LoginUserTypePageBase_H__
#define __LoginUserTypePageBase_H__

#include <e3/ViewFactory.h>
#include <Row.h>
#include <LoginUserTypeCard.h>
#include "Col.h"


class LoginUserTypePageBase : public Col
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    LoginUserTypePageBase(e3::Element* pParent = nullptr);

 
protected:
	LoginUserTypeCard* mDriver = nullptr;
LoginUserTypeCard* mAutoDiller = nullptr;
LoginUserTypeCard* mCarShowRoom = nullptr;
LoginUserTypeCard* mAutoPartsStore = nullptr;
LoginUserTypeCard* mChopShop = nullptr;
LoginUserTypeCard* mAutoService = nullptr;


};

#endif // __LoginUserTypePageBase_H__

