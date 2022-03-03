
#ifndef __LoginPageBase_H__
#define __LoginPageBase_H__

#include <e3/ViewFactory.h>
#include <Col.h>
#include <Row.h>
#include <Button.h>


class LoginPageBase : public e3::Element
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    LoginPageBase(e3::Element* pParent = nullptr);

 
protected:
	e3::Element* mBody = nullptr;
Col* mContainer = nullptr;
e3::Input* mInput = nullptr;
Button* mNextButton = nullptr;


};

#endif // __LoginPageBase_H__

