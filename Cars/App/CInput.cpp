#include "CInput.h"

CInput::CInput(e3::Element* pParent)
	: CInputBase(pParent)
{

}

std::string CInput::GetText()
{
	return mInput->GetText();
}