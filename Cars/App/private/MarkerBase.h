
#ifndef __MarkerBase_H__
#define __MarkerBase_H__

#include <e3/ViewFactory.h>


class MarkerBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    MarkerBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Text* mTitle = nullptr;
e3::FontIcon* mIcon = nullptr;


};

#endif // __MarkerBase_H__

