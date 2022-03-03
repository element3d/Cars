
#ifndef SplashScreen_H_
#define SplashScreen_H_

#include "private/SplashScreenBase.h"

class E3_EXPORT SplashScreen : public SplashScreenBase
{
	typedef std::function<void(void)> OnFinishCallback;

public:
	SplashScreen(e3::Element* pParent = nullptr);

	void Show(OnFinishCallback c);
	void HideE3Logo(OnFinishCallback c);
	void Hide(OnFinishCallback c);
};

#endif // SplashScreen_H_

