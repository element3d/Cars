
#ifndef TopCarCard_H_
#define TopCarCard_H_

#include "private/TopCarCardBase.h"

class E3_EXPORT TopCarCard : public TopCarCardBase
{
public:
	TopCarCard(e3::Element* pParent = nullptr);

	void SetImage(const std::string& path);
	void SetImage(std::shared_ptr<e3::Image> pImage);
	void SetPrice(const std::string& price);
	void SetYear(const std::string& yaer);
};

#endif // TopCarCard_H_

