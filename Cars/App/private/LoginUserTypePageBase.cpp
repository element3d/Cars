#include "LoginUserTypePageBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

LoginUserTypePageBase::LoginUserTypePageBase(e3::Element* pParent)
	: Col(pParent)
{
                Row* pCustomView1 = new Row();
        AddElement(pCustomView1);
        mDriver = new LoginUserTypeCard();
        pCustomView1->AddElement(mDriver);
        mDriver->SetTitle(_s(DRIVER));
        mAutoDiller = new LoginUserTypeCard();
        pCustomView1->AddElement(mAutoDiller);
        mAutoDiller->SetTitle(_s(AUTO DILLER));
        mCarShowRoom = new LoginUserTypeCard();
        pCustomView1->AddElement(mCarShowRoom);
        mCarShowRoom->SetTitle(_s(CAR SHOW ROOM));
                Row* pCustomView2 = new Row();
        AddElement(pCustomView2);
        mAutoPartsStore = new LoginUserTypeCard();
        pCustomView2->AddElement(mAutoPartsStore);
        mAutoPartsStore->SetTitle(_s(AUTO PARTS STORE));
        mChopShop = new LoginUserTypeCard();
        pCustomView2->AddElement(mChopShop);
        mChopShop->SetTitle(_s(CHOP SHOP));
        mAutoService = new LoginUserTypeCard();
        pCustomView2->AddElement(mAutoService);
        mAutoService->SetTitle(_s(AUTO SERVICE));

}
