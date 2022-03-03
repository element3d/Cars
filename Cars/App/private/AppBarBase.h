
#ifndef __AppBarBase_H__
#define __AppBarBase_H__

#include <e3/ViewFactory.h>
#include "Row.h"


class AppBarBase : public Row
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    AppBarBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mBG = nullptr;
e3::Text* mNumGoldsText = nullptr;
e3::Text* mRepText = nullptr;
e3::Text* mTitle = nullptr;
e3::Element* mBack = nullptr;
e3::Element* mMask = nullptr;


};

#endif // __AppBarBase_H__

