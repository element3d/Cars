
#ifndef Marker_H_
#define Marker_H_

#include "private/MarkerBase.h"

class E3_EXPORT Marker : public MarkerBase
{
public:
	Marker(e3::Element* pParent = nullptr);

	void SetTitle(const std::string& title, bool translate = false);
	void SetIcon(const std::string& charcode);
};

#endif // Marker_H_

