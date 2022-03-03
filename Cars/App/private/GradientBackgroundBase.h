
#ifndef __GradientBackgroundBase_H__
#define __GradientBackgroundBase_H__

#include <e3/ViewFactory.h>


class GradientBackgroundBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    GradientBackgroundBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mGradient = nullptr;
e3::Element* mMask = nullptr;


};

#endif // __GradientBackgroundBase_H__

