
#ifndef Map_H_
#define Map_H_

#include "private/MapBase.h"

class E3_EXPORT Map : public MapBase
{
public:
	Map(e3::Element* pParent = nullptr);

	void OnMouseMove(e3::MouseEvent* pEvent);

	void _AnimateLayer();

};

#endif // Map_H_

