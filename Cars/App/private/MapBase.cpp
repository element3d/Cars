#include "MapBase.h"

#include <e3/ViewFactory.h>
#include "CarsValues.h"

MapBase::MapBase(e3::Element* pParent)
	: e3::Element(pParent)
{
        this->SetWidth("100%");
        this->SetHeight("100%");
        this->SetScaling((e3::EScaling)1);
        this->SetOverflow((e3::EOverflow)0);
    mContainer = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    AddElement(mContainer);
    e3::Element* pElement1 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mContainer->AddElement(pElement1);
       // pElement1->SetBackgroundImage("Cars/images/home/map_android.jpg");
    mMapLayer = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mContainer->AddElement(mMapLayer);
        mMapLayer->SetPositionType((e3::EPositionType)1);
     //   mMapLayer->SetBackgroundImage("Cars/images/home/layers_android.png");
    mMarkers = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mContainer->AddElement(mMarkers);
        mMarkers->SetWidth(e3::Dim("3328", "3328", "3328", "1792", "1792", "1792"));
        mMarkers->SetHeight(e3::Dim("2304", "2304", "2304", "1280", "1280", "1280"));
        mMarkers->SetPositionType((e3::EPositionType)1);
        mGarage = new Marker();
        mMarkers->AddElement(mGarage);
        mGarage->SetLeft(e3::Dim("1400", "1400", "1400", "700", "700", "700"));
        mGarage->SetTop(e3::Dim("1200", "1200", "1200", "600", "600", "600"));
        mGarage->SetTitle(_s(GARAGE));
        mGarage->SetIcon(_s(E800));
        mCars = new Marker();
        mMarkers->AddElement(mCars);
        mCars->SetLeft(e3::Dim("1200", "1200", "1200", "600", "600", "600"));
        mCars->SetTop(e3::Dim("1300", "1300", "1300", "650", "650", "650"));
        mCars->SetTitle(_s(CARS));
        mCars->SetIcon(_s(E802));
        mAutoParts = new Marker();
        mMarkers->AddElement(mAutoParts);
        mAutoParts->SetLeft(e3::Dim("1000", "1000", "1000", "650", "650", "650"));
        mAutoParts->SetTop(e3::Dim("1100", "1100", "1100", "700", "700", "700"));
        mAutoParts->SetTitle(_s(AUTO PARTS));
        mAutoParts->SetIcon(_s(E803));
        mEvents = new Marker();
        mMarkers->AddElement(mEvents);
        mEvents->SetLeft(e3::Dim("1220", "1220", "1220", "610", "610", "610"));
        mEvents->SetTop(e3::Dim("1020", "1020", "1020", "510", "510", "510"));
        mEvents->SetTitle(_s(EVENTS));
        mEvents->SetIcon(_s(E802));
        mServices = new Marker();
        mMarkers->AddElement(mServices);
        mServices->SetLeft(e3::Dim("1500", "1500", "1500", "750", "750", "750"));
        mServices->SetTop(e3::Dim("1000", "1000", "1000", "500", "500", "500"));
        mServices->SetTitle(_s(SERVICES));
        mServices->SetIcon(_s(E803));
        mShops = new Marker();
        mMarkers->AddElement(mShops);
        mShops->SetLeft(e3::Dim("1500", "1500", "1500", "750", "750", "750"));
        mShops->SetTop(e3::Dim("1400", "1400", "1400", "700", "700", "700"));
        mShops->SetTitle(_s(SHOPS));
        mShops->SetIcon(_s(E801));
   /* mClouds = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mContainer->AddElement(mClouds);
        mClouds->SetWidth(e3::Dim("3328", "3328", "3328", "1792", "1792", "1792"));
        mClouds->SetHeight(e3::Dim("2304", "2304", "2304", "1280", "1280", "1280"));
        mClouds->SetPositionType((e3::EPositionType)1);
    e3::Element* pElement2 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mClouds->AddElement(pElement2);
        pElement2->SetPositionType((e3::EPositionType)1);
        pElement2->SetTop(0);
        pElement2->SetBackgroundImage("Cars/images/clouds/cloud6_top.png");
    e3::Element* pElement3 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mClouds->AddElement(pElement3);
        pElement3->SetPositionType((e3::EPositionType)1);
        pElement3->SetBottom(0);
        pElement3->SetBackgroundImage("Cars/images/clouds/cloud6_bottom.png");
    e3::Element* pElement4 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mClouds->AddElement(pElement4);
        pElement4->SetPositionType((e3::EPositionType)1);
        pElement4->SetLeft(0);
        pElement4->SetBackgroundImage("Cars/images/clouds/cloud6_left.png");
    e3::Element* pElement5 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mClouds->AddElement(pElement5);
        pElement5->SetPositionType((e3::EPositionType)1);
        pElement5->SetRight(0);
        pElement5->SetBackgroundImage("Cars/images/clouds/cloud6_right.png");
    e3::Element* pElement6 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mClouds->AddElement(pElement6);
        pElement6->SetPositionType((e3::EPositionType)1);
        pElement6->SetTop(0);
        pElement6->SetBackgroundImage("Cars/images/clouds/cloud4_top.png");
    e3::Element* pElement7 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mClouds->AddElement(pElement7);
        pElement7->SetPositionType((e3::EPositionType)1);
        pElement7->SetBottom(0);
        pElement7->SetBackgroundImage("Cars/images/clouds/cloud4_bottom.png");
    e3::Element* pElement8 = e3::ViewFactory::CreateShape( e3::EOrientation::Horizontal);
    mClouds->AddElement(pElement8);
        pElement8->SetPositionType((e3::EPositionType)1);
        pElement8->SetLeft(0);
        pElement8->SetBackgroundImage("Cars/images/clouds/cloud4_left.png");*/

}
