#include "Main.h"

Main::Main(e3::Element* pParent)
	: MainBase(pParent)
{
	mE3Logo->Show([]() {});


	e3::Animation* pA = new e3::Animation();
	pA->Start(0.4, [this](float v) {
		mAppBar->Show(v);
	}, []() {});
}
