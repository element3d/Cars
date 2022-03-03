
#ifndef E3Logo_H_
#define E3Logo_H_

#include "private/E3LogoBase.h"

class E3_EXPORT E3Logo : public E3LogoBase
{
	typedef std::function<void(void)> OnFinishCallback;
public:
	E3Logo(e3::Element* pParent = nullptr);
	void Show(OnFinishCallback c);
	void ShowStatic();
	void SetColor(const glm::vec4& color);
};

#endif // E3Logo_H_

