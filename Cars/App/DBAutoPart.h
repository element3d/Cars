#ifndef __DB_AUTO_PART__
#define __DB_AUTO_PART__

#include <string>
#include <vector>
#include <e3/Image.h>

class DBAutoPart
{
public:
	int Id;
	int UserId;
	int Type;
	int Subtype;
	int Country;
	int Province;
	int SubProvince;
	int Originality;
	int Condition;
	int Price;
	std::vector<int> Fits;
	std::string Avatar;
	std::vector<std::string> Images;

	std::shared_ptr<e3::Image> GetAvatar();
	std::vector<std::shared_ptr<e3::Image>> GetImages();
private:
	std::shared_ptr<e3::Image> mAvatarRef;
	std::vector<std::shared_ptr<e3::Image>> mImageRefs;

	std::string mBaseUrl = "192.168.1.5:1234";
};

#endif