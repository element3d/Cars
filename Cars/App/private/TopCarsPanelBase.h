
#ifndef __TopCarsPanelBase_H__
#define __TopCarsPanelBase_H__

#include <e3/ViewFactory.h>
#include <AnimatedTitle.h>
#include <Row.h>
#include "Col.h"


class TopCarsPanelBase : public Col
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    TopCarsPanelBase(e3::Element* pParent = nullptr);

 
protected:
	AnimatedTitle* mTitle = nullptr;
Row* mScroll = nullptr;
e3::Element* mMask = nullptr;


};

#endif // __TopCarsPanelBase_H__

