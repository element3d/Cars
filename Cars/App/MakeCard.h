
#ifndef MakeCard_H_
#define MakeCard_H_

#include "private/MakeCardBase.h"

class E3_EXPORT MakeCard : public MakeCardBase
{
public:
	MakeCard(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title);
	void SetImage(const std::string& assetPath);
	void SetLogo(const std::string& assetPath);
};

#endif // MakeCard_H_

