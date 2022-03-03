
#ifndef __SerieCardBase_H__
#define __SerieCardBase_H__

#include <e3/ViewFactory.h>


class SerieCardBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    SerieCardBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mBG3 = nullptr;
e3::Element* mImage = nullptr;
e3::Text* mCount = nullptr;
e3::Text* mMake = nullptr;
e3::Text* mTitle = nullptr;


};

#endif // __SerieCardBase_H__

