
#ifndef __CarsLogoBase_H__
#define __CarsLogoBase_H__

#include <e3/ViewFactory.h>


class CarsLogoBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CarsLogoBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mTextCont = nullptr;
e3::Text* mBMWText = nullptr;
e3::Element* mBMW = nullptr;


};

#endif // __CarsLogoBase_H__

