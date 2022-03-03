
#ifndef __CarImagePanelBase_H__
#define __CarImagePanelBase_H__

#include <e3/ViewFactory.h>
#include <Col.h>
#include <Row.h>


class CarImagePanelBase : public Row
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CarImagePanelBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mCardContainer = nullptr;
e3::Element* mCard = nullptr;
e3::Element* mCardMask = nullptr;
Col* mCarImages = nullptr;
Row* mImagesContainer = nullptr;
e3::Element* mMask = nullptr;


};

#endif // __CarImagePanelBase_H__

