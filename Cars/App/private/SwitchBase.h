
#ifndef __SwitchBase_H__
#define __SwitchBase_H__

#include <e3/ViewFactory.h>
#include "Row.h"


class SwitchBase : public Row
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    SwitchBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mLeft = nullptr;
e3::Text* mLeftText = nullptr;
e3::Element* mRight = nullptr;
e3::Text* mRightText = nullptr;


};

#endif // __SwitchBase_H__

