
#ifndef __CInputBase_H__
#define __CInputBase_H__

#include <e3/ViewFactory.h>


class CInputBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CInputBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Input* mInput = nullptr;


};

#endif // __CInputBase_H__

