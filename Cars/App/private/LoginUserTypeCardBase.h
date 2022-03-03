
#ifndef __LoginUserTypeCardBase_H__
#define __LoginUserTypeCardBase_H__

#include <e3/ViewFactory.h>
#include "Col.h"


class LoginUserTypeCardBase : public Col
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    LoginUserTypeCardBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Text* mTitle = nullptr;


};

#endif // __LoginUserTypeCardBase_H__

