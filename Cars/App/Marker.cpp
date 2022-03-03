#include "Marker.h"

Marker::Marker(e3::Element* pParent)
	: MarkerBase(pParent)
{

}

void Marker::SetTitle(const std::string& title, bool translate)
{
	mTitle->SetText(title, translate);
}

void Marker::SetIcon(const std::string& charcode)
{
	mIcon->SetCharcode(charcode);
}