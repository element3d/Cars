
#ifndef __CarPageBase_H__
#define __CarPageBase_H__

#include <e3/ViewFactory.h>
#include <GradientBackground.h>
#include <Col.h>
#include <Row.h>
#include <CarImagePanel.h>
#include <Checkbox.h>
#include <ListChevron.h>
#include <CInput.h>
#include <Switch.h>
#include <Switch3.h>
#include <Button.h>
#include <AppBar.h>


class CarPageBase : public Col
{
public:
    struct __Id
    {
        
    };

    struct Id
    {
        
    };

    CarPageBase(e3::Element* pParent = nullptr);

 
protected:
	GradientBackground* mBG = nullptr;
Col* mContent = nullptr;
Row* mControlButtons = nullptr;
e3::FontIcon* mEditButton = nullptr;
e3::FontIcon* mDeleteButton = nullptr;
CarImagePanel* mCarImagePanel = nullptr;
Col* mContainer = nullptr;
Checkbox* mOnSaleCheckbox = nullptr;
Row* mLocation = nullptr;
e3::Text* mLocationText = nullptr;
ListChevron* mLocationChevron = nullptr;
Row* mPrice = nullptr;
e3::Text* mPriceText = nullptr;
e3::Text* mPriceSign = nullptr;
ListChevron* mPriceChevron = nullptr;
Row* mPriceFilter = nullptr;
CInput* mPriceFrom = nullptr;
CInput* mPriceTo = nullptr;
Row* mBodyType = nullptr;
e3::Text* mBodyTypeText = nullptr;
ListChevron* mBodyTypeChevron = nullptr;
Row* mYear = nullptr;
e3::Text* mYearText = nullptr;
ListChevron* mYearChevron = nullptr;
Row* mYearFilter = nullptr;
CInput* mYearFrom = nullptr;
CInput* mYearTo = nullptr;
Row* mEngineType = nullptr;
e3::Text* mEngineTypeText = nullptr;
ListChevron* mEngineTypeChevron = nullptr;
Row* mEngineSize = nullptr;
e3::Text* mEngineSizeText = nullptr;
e3::Text* mEngineSizeSign = nullptr;
ListChevron* mEngineSizeChevron = nullptr;
Row* mEngineSizeFilter = nullptr;
CInput* mEngineSizeFrom = nullptr;
CInput* mEngineSizeTo = nullptr;
Row* mEnginePower = nullptr;
e3::Text* mEnginePowerText = nullptr;
e3::Text* mEnginePowerSign = nullptr;
ListChevron* mEnginePowerChevron = nullptr;
Row* mEnginePowerFilter = nullptr;
CInput* mEnginePowerFrom = nullptr;
CInput* mEnginePowerTo = nullptr;
Row* m0To100 = nullptr;
e3::Text* m0To100Text = nullptr;
e3::Text* m0To100Sign = nullptr;
ListChevron* m0To100Chevron = nullptr;
Row* m0To100Filter = nullptr;
CInput* m0To100From = nullptr;
CInput* m0To100To = nullptr;
Row* mTransmission = nullptr;
e3::Text* mTransmissionText = nullptr;
ListChevron* mTransmissionChevron = nullptr;
Switch* mStearingWheelSwitch = nullptr;
Switch3* mStearingWheelFilter = nullptr;
Checkbox* mExchangeCheckbox = nullptr;
Switch3* mExchangeFilter = nullptr;
Checkbox* mCustomsClearedCheckbox = nullptr;
Switch3* mCustomsClearedFilter = nullptr;
Row* mColor = nullptr;
Row* mColorSign = nullptr;
e3::Text* mColorText = nullptr;
e3::Element* mColorElement = nullptr;
ListChevron* mColorChevron = nullptr;
Col* mDescription = nullptr;
e3::TextArea* mDescriptionTextArea = nullptr;
Row* mButtonsPanel = nullptr;
Button* mAddButton = nullptr;
e3::Element* mMask = nullptr;
AppBar* mAppBar = nullptr;


};

#endif // __CarPageBase_H__

