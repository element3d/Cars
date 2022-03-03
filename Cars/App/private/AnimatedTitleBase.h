
#ifndef __AnimatedTitleBase_H__
#define __AnimatedTitleBase_H__

#include <e3/ViewFactory.h>


class AnimatedTitleBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    AnimatedTitleBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Text* mText1 = nullptr;
e3::Text* mText2 = nullptr;
e3::Element* mRedMask = nullptr;
e3::Element* mWhiteMask = nullptr;


};

#endif // __AnimatedTitleBase_H__

