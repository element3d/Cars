#include "SerieCard.h"

SerieCard::SerieCard(e3::Element* pParent)
	: SerieCardBase(pParent)
{

}

void SerieCard::SetMake(const std::string& title)
{
	mMake->SetText(title);
}

void SerieCard::SetTitle(const std::string& title)
{
	mTitle->SetText(title);
}

void SerieCard::SetImage(const std::string& image)
{
	if (!image.size())
	{
		mImage->SetBackgroundImage((std::shared_ptr<e3::Image>)nullptr);
		return;
	}
	mImage->SetBackgroundImage(image);
}