
#ifndef SerieCard_H_
#define SerieCard_H_

#include "private/SerieCardBase.h"

class E3_EXPORT SerieCard : public SerieCardBase
{
public:
	SerieCard(e3::Element* pParent = nullptr);

	void SetMake(const std::string& title);
	void SetTitle(const std::string& title);
	void SetImage(const std::string& image);
};

#endif // SerieCard_H_

