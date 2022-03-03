
#ifndef __TopCarCardBase_H__
#define __TopCarCardBase_H__

#include <e3/ViewFactory.h>
#include "Col.h"


class TopCarCardBase : public Col
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    TopCarCardBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mFlicker = nullptr;
e3::Element* mLight = nullptr;
e3::Element* mImage = nullptr;
e3::Text* mYear = nullptr;
e3::Text* mPrice = nullptr;


};

#endif // __TopCarCardBase_H__

