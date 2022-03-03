#ifndef __CAR_MANAGER__
#define __CAR_MANAGER__

#include "Enum.h"
//#include "sqlite3/sqlite3.h"
#include <e3/Image.h>

class CarManager 
{
public:
	static CarManager* Get();

	// void SetDb(sqlite3* pSqlite);
	void SetMap(void* pMap); 
	void* GetMap();

	DBCar* GetCar(int carId);
	void AddCar(DBCar* pCar);
	void UploadAvatar(int userId, int carId, const std::string& filename);
	void UploadImages(int userId, int carId, const std::vector<std::string> images);

	void GetTopCars(std::vector<DBCar*>& cars, /*EMake make,*/ ESerie serie);
	void GetTopCars(std::vector<DBCar*>& cars, EMake make);

	void GetUserCars(int userId, std::vector<DBCar*>& cars);
	void GetCarsFiltered(CarFilter* pFilter, std::vector<DBCar*>& cars);

	bool DeleteCar(int userId, int carId);

	void ToJson(DBCar* pCar, std::string& json);

private:
	void _ParseCars(const std::string& json, std::vector<DBCar*>& cars);

private:
	static CarManager* sInstance;
	void* mMap = nullptr;
	// sqlite3* mSqlite = nullptr;
	std::string mBaseUrl = "192.168.1.5:1234";
};

#endif // !__CAR_MANAGER__
