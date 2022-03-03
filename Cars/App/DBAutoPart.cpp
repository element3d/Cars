#include "DBAutoPart.h"
#include <cpr/cpr.h>
#include <stb_image/stb_image.h>

std::shared_ptr<e3::Image> DBAutoPart::GetAvatar()
{
	if (!Avatar.size()) return nullptr;
	if (mAvatarRef) return mAvatarRef;

	std::string url = mBaseUrl + "/" + Avatar;
	cpr::Response res = cpr::Get(cpr::Url{ url });

	int w, h, c;
	const unsigned char* pData = stbi_load_from_memory((const unsigned char*)res.text.c_str(), res.text.size(), &w, &h, &c, 4);
	if (!pData) return nullptr;

	mAvatarRef = std::shared_ptr<e3::Image>(new e3::Image());
	mAvatarRef->SetData(w, h, e3::EImageFormat::RGBA, (void*)pData);
	return mAvatarRef;
}

std::vector<std::shared_ptr<e3::Image>> DBAutoPart::GetImages()
{
	if (!Images.size() || mImageRefs.size()) return mImageRefs;


	for (auto& i : Images)
	{
		std::string url = mBaseUrl + "/" + i;
		cpr::Response res = cpr::Get(cpr::Url{ url });

		int w, h, c;
		const unsigned char* pData = stbi_load_from_memory((const unsigned char*)res.text.c_str(), res.text.size(), &w, &h, &c, 4);
		if (!pData) continue;

		std::shared_ptr<e3::Image> pImage = std::shared_ptr<e3::Image>(new e3::Image);
		pImage->SetData(w, h, e3::EImageFormat::RGBA, (void*)pData);
		mImageRefs.push_back(pImage);
	}
	return mImageRefs;
}