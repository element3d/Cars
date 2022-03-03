
#ifndef __MakeCardBase_H__
#define __MakeCardBase_H__

#include <e3/ViewFactory.h>


class MakeCardBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MakeCardBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mBG3 = nullptr;
e3::Element* mLogo = nullptr;
e3::Element* mImage = nullptr;
e3::Element* mFlicker = nullptr;
e3::Element* mLight = nullptr;
e3::Text* mCount = nullptr;
e3::Text* mTitle = nullptr;


};

#endif // __MakeCardBase_H__

