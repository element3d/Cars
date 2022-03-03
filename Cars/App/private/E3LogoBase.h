
#ifndef __E3LogoBase_H__
#define __E3LogoBase_H__

#include <e3/ViewFactory.h>


class E3LogoBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    E3LogoBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mECont = nullptr;
e3::Text* mEText = nullptr;
e3::Element* m3Cont = nullptr;
e3::Text* m3Text = nullptr;
e3::Element* mE3Mask = nullptr;
e3::Text* mPBText = nullptr;
e3::Element* mPB = nullptr;


};

#endif // __E3LogoBase_H__

