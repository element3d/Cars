
#ifndef __ButtonBase_H__
#define __ButtonBase_H__

#include <e3/ViewFactory.h>


class ButtonBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    ButtonBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mBG = nullptr;
e3::Text* mText = nullptr;


};

#endif // __ButtonBase_H__

