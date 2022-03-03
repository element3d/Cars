#include "MakeCard.h"
#include <e3/Application.h>

MakeCard::MakeCard(e3::Element* pParent)
	: MakeCardBase(pParent)
{
	SetBackgroundColor(glm::vec4(255));
	SetBackgroundRadialGradient(glm::vec2(0), 0, 200, glm::vec4(3, 44, 96, 255), glm::vec4(0, 148, 221, 255));
}

void MakeCard::SetTitle(const std::string& title)
{
	mTitle->SetText(title);
}

void MakeCard::SetImage(const std::string& assetPath)
{
	//mImage->SetBackgroundImage(assetPath);
	//auto f = e3::Image::LoadAsset(GetApplication()->GetAssetManager()->GetAssetPath("Cars/images/home/map.png"));
	//auto pImage = f.get();
	std::shared_ptr<e3::Image> pI = std::shared_ptr<e3::Image>(new e3::Image());
	pI->LoadAssetAsync(GetApplication()->GetAssetManager()->GetAssetPath(assetPath));
	SetBackgroundImage(pI);
	/*std::string path = GetApplication()->GetAssetManager()->GetAssetPath(assetPath);
	std::shared_ptr<e3::Image> pImage = std::shared_ptr<e3::Image>(new e3::Image());
	pImage->LoadFile(path, std::shared_ptr<Callback<void(void)>>(new Callback<void(void)>([this, pImage]() {
		SetBackgroundImage(pImage);
	})));*/
	/*mImage->SetBackgroundImage(path, [](std::shared_ptr<e3::Image> pImage) {
		printf("asdf");
	});*/
}

void MakeCard::SetLogo(const std::string& assetPath)
{
	//mLogo->SetBackgroundImage(assetPath);
	/*mLogo->SetBackgroundImage(assetPath, [](std::shared_ptr<e3::Image>) {
		printf("asdf");
	});*/
}