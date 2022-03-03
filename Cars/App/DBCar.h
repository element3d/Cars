#ifndef __DBCAR__
#define __DBCAR__

#include <string>
#include <vector>

#include <e3/Image.h>

class DBCar
{
public:
	int Id;
	int UserId;
	int Make;
	int Class;
	int Model;
	int Submodel;
	int Country;
	int Province;
	int SubProvince;
	/*std::string*/int Price;
	int BodyType;
	/*std::string*/int Year;
	int EngineType;
	float EngineSize;
	int EnginePower;
	float Acc0To100;
	int Transmission;
	int StearingWheel;
	bool Exchange;
	bool CustomsCleared;
	int Color;
	std::string Avatar;
	std::vector<std::string> Images;
	bool OnSale;
	bool OnTop;

	std::shared_ptr<e3::Image> GetAvatar();
	std::vector<std::shared_ptr<e3::Image>> GetImages();
private:
	std::shared_ptr<e3::Image> mAvatarRef;
	std::vector<std::shared_ptr<e3::Image>> mImageRefs;
	std::string mBaseUrl = "192.168.1.5:1234";
};


#endif // !__DBCAR__
