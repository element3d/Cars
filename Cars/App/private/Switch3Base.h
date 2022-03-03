
#ifndef __Switch3Base_H__
#define __Switch3Base_H__

#include <e3/ViewFactory.h>
#include "Row.h"


class Switch3Base : public Row
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    Switch3Base(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mAll = nullptr;
e3::Text* mAllText = nullptr;
e3::Element* mLeft = nullptr;
e3::Text* mLeftText = nullptr;
e3::Element* mRight = nullptr;
e3::Text* mRightText = nullptr;


};

#endif // __Switch3Base_H__

