
#ifndef __CarListItemBase_H__
#define __CarListItemBase_H__

#include <e3/ViewFactory.h>
#include <CarListItemCard.h>
#include <Col.h>
#include "Row.h"


class CarListItemBase : public Row
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CarListItemBase(e3::Element* pParent = nullptr);

 
protected:
	CarListItemCard* mCard = nullptr;
e3::Text* mTitle = nullptr;
e3::Text* mYear = nullptr;
e3::Text* mPrice = nullptr;


};

#endif // __CarListItemBase_H__

