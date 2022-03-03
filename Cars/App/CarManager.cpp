#include "CarManager.h"
#include <sstream>
#include <cpr/cpr.h>
#include "AuthManager.h"
#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>

static int get_top_cars_callback(void* pUsrPtr, int argc, char **argv, char **azColName)
{
	std::vector<DBCar*>* cars = (std::vector<DBCar*>*)pUsrPtr;
	DBCar* pCar = new DBCar();
	pCar->Id = atoi(argv[(int)EDBCarsColumn::Id]);
	pCar->UserId = atoi(argv[(int)EDBCarsColumn::UserId]);
	pCar->Make = atoi(argv[(int)EDBCarsColumn::Make]);
	pCar->Class = atoi(argv[(int)EDBCarsColumn::Class]);
	pCar->Model = atoi(argv[(int)EDBCarsColumn::Model]);
	pCar->Submodel = atoi(argv[(int)EDBCarsColumn::Submodel]);
	pCar->Country = atoi(argv[(int)EDBCarsColumn::Country]);
	pCar->Province = atoi(argv[(int)EDBCarsColumn::Province]);
	pCar->SubProvince = atoi(argv[(int)EDBCarsColumn::SubProvince]);
	pCar->Price = atoi(argv[(int)EDBCarsColumn::Price]);
	pCar->BodyType = atoi(argv[(int)EDBCarsColumn::BodyType]);
	pCar->Year = atoi(argv[(int)EDBCarsColumn::Year]);
	pCar->EngineType = atoi(argv[(int)EDBCarsColumn::EngineType]);
	pCar->EngineSize = atof(argv[(int)EDBCarsColumn::EngineSize]);
	pCar->EnginePower = atoi(argv[(int)EDBCarsColumn::EnginePower]);
	pCar->Acc0To100 = atof(argv[(int)EDBCarsColumn::Acc0To100]);
	pCar->Transmission = atoi(argv[(int)EDBCarsColumn::Transmission]);
	pCar->StearingWheel = atoi(argv[(int)EDBCarsColumn::StearingWheel]);
	pCar->Exchange = atoi(argv[(int)EDBCarsColumn::Exchange]);
	pCar->CustomsCleared = atoi(argv[(int)EDBCarsColumn::CustomsCleared]);
	pCar->Color = atoi(argv[(int)EDBCarsColumn::Color]);
	pCar->Avatar = argv[(int)EDBCarsColumn::Avatar];
	pCar->OnSale = atoi(argv[(int)EDBCarsColumn::OnSale]);

	std::string images = argv[(int)EDBCarsColumn::Images];
	std::string tmp;
	std::stringstream ss(images);
	std::vector<std::string> words;

	while (getline(ss, tmp, ',')) {
		pCar->Images.push_back(tmp);
	}

	//pCar->Images.push_back();
	cars->push_back(pCar);
	return 0;
}

CarManager* CarManager::sInstance = nullptr;

CarManager* CarManager::Get() 
{
	if (!sInstance) sInstance = new CarManager();
	return sInstance;
}

void CarManager::GetTopCars(std::vector<DBCar*>& cars, EMake make)
{
	cpr::Response res = cpr::Get(cpr::Url{ mBaseUrl + "/api/v1/top_cars?make=" + std::to_string((int)make) });
	std::string json = res.text;
	_ParseCars(json, cars);
	/*std::string cmd;
	if (make == EMake::All)
		cmd = "SELECT * FROM cars WHERE on_sale = 1 AND on_top = 1;";
	else 
		cmd = "SELECT * FROM cars WHERE make=" + std::to_string(int(make)) + " AND on_sale = 1 AND on_top = 1;";

	char *zErrMsg = 0;
	int rc = sqlite3_exec(mSqlite, cmd.c_str(), get_top_cars_callback, &cars, &zErrMsg);*/
}

void CarManager::_ParseCars(const std::string& json, std::vector<DBCar*>& cars)
{
	if (!json.size()) return;

	rapidjson::Document d;
	d.Parse(json.c_str());

	for (rapidjson::Value::ConstValueIterator itr = d.Begin(); itr != d.End(); ++itr)
	{
		DBCar* pCar = new DBCar();
		pCar->Id = (*itr)["id"].GetInt();
		pCar->UserId = (*itr)["user_id"].GetInt();
		pCar->Make = (*itr)["make"].GetInt();
		pCar->Class = (*itr)["class"].GetInt();
		pCar->Model = (*itr)["model"].GetInt();
		pCar->Submodel = (*itr)["sub_model"].GetInt();
		pCar->Country = (*itr)["country"].GetInt();
		pCar->Province = (*itr)["province"].GetInt();
		pCar->SubProvince = (*itr)["sub_province"].GetInt();
		pCar->Price = (*itr)["price"].GetInt();
		pCar->BodyType = (*itr)["body_type"].GetInt();
		pCar->Year = (*itr)["year"].GetInt();
		pCar->EngineType = (*itr)["engine_type"].GetInt();
		pCar->EngineSize = (*itr)["engine_size"].GetInt();
		pCar->EnginePower = (*itr)["engine_power"].GetInt();
		pCar->Acc0To100 = (*itr)["acc_0_100"].GetInt();
		pCar->Transmission = (*itr)["transmission"].GetInt();
		pCar->StearingWheel = (*itr)["stearing_wheel"].GetInt();
		pCar->Exchange = (*itr)["exchange"].GetInt();
		pCar->CustomsCleared = (*itr)["customs_cleared"].GetInt();
		pCar->Color = (*itr)["color"].GetInt();
		pCar->Avatar = (*itr)["avatar"].GetString();
		pCar->OnSale = (*itr)["on_sale"].GetInt();
		pCar->OnTop = (*itr)["on_top"].GetInt();

		auto images = (*itr)["images"].GetArray();
		for (rapidjson::Value::ConstValueIterator iitr = images.Begin(); iitr != images.End(); ++iitr)
		{
			pCar->Images.push_back((*iitr).GetString());
		}

		cars.push_back(pCar);
	}
}

void CarManager::GetUserCars(int userId, std::vector<DBCar*>& cars)
{
	cpr::Header h;// { std::string("Authentication"), mToken };
	h["Authentication"] = AuthManager::Get()->GetToken();
	cpr::Response res = cpr::Get(cpr::Url{ mBaseUrl + "/api/v1/my_cars" }, h);
	std::string json = res.text;
	_ParseCars(json, cars);
	

	/*std::string cmd = "SELECT * FROM cars WHERE user_id=" + std::to_string(userId) + ";";
	char *zErrMsg = 0;
	int rc = sqlite3_exec(mSqlite, cmd.c_str(), get_top_cars_callback, &cars, &zErrMsg);*/
}

void CarManager::GetCarsFiltered(CarFilter* pFilter, std::vector<DBCar*>& cars)
{
	cpr::Response res = cpr::Get(cpr::Url{ mBaseUrl + "/api/v1/cars?make=" + std::to_string((int)pFilter->Make) + "&serie=" + std::to_string((int)pFilter->Class) + "&model=" + std::to_string((int)pFilter->Model) });
	std::string json = res.text;
	_ParseCars(json, cars);
	/*std::string cmd = "SELECT * FROM cars ";
	std::string t = " AND";
	if (pFilter->Color != ECarColor::All) cmd += "WHERE color=" + std::to_string(int(pFilter->Color));
	else t = "WHERE";
	if (pFilter->OnSale != -1) cmd += t + " on_sale = " + std::to_string(pFilter->OnSale);
	//+ " AND on_top = " + std::to_string(pFilter->OnTop) +
	cmd	+= ";";
	char *zErrMsg = 0;
	int rc = sqlite3_exec(mSqlite, cmd.c_str(), get_top_cars_callback, &cars, &zErrMsg);*/
}

DBCar* CarManager::GetCar(int carId)
{
	/*std::string cmd = "SELECT * FROM cars WHERE id=" + std::to_string(carId) + ";";
	char *zErrMsg = 0;
	std::vector<DBCar*> cars;
	int rc = sqlite3_exec(mSqlite, cmd.c_str(), get_top_cars_callback, &cars, &zErrMsg);
	if (!cars.size()) return nullptr;
	return cars[0];*/
	return nullptr;
}

void CarManager::AddCar(DBCar* pCar)
{
	std::string json;
	ToJson(pCar, json);

	cpr::Response res = cpr::Post(cpr::Url{ mBaseUrl + "/api/v1/cars" }, cpr::Body{ json });
	if (res.status_code == 200)
	{
		int id = atoi(res.text.c_str());
		pCar->Id = id;
	}
}

void CarManager::UploadAvatar(int userId, int carId, const std::string& filename)
{
	cpr::Response r = cpr::Post(cpr::Url{ mBaseUrl + "/api/v1/cars/avatar?user_id=" + std::to_string(userId) + "&car_id=" + std::to_string(carId) },
		cpr::Multipart{ /*{ "key", "large value" },*/
			{ "image_file", cpr::File{ filename } } });
	printf("asdfasd");
}

void CarManager::UploadImages(int userId, int carId, const std::vector<std::string> images)
{
	for (auto& f : images)
	{
		cpr::Response r = cpr::Post(cpr::Url{ mBaseUrl + "/api/v1/cars/image?user_id=" + std::to_string(userId) + "&car_id=" + std::to_string(carId) },
			cpr::Multipart{ /*{ "key", "large value" },*/
				{ "image_file", cpr::File{ f } } });
	}
}

void CarManager::GetTopCars(std::vector<DBCar*>& cars, /*EMake make, */ESerie serie)
{
	cpr::Response res = cpr::Get(cpr::Url{ mBaseUrl + "/api/v1/top_cars?serie=" + std::to_string((int)serie)/* + "&serie=" + std::to_string((int)serie)*/ });
	std::string json = res.text;
	_ParseCars(json, cars);

	/*std::string cmd = "SELECT * FROM cars WHERE class=" + std::to_string(int(serie)) + ";";
	char *zErrMsg = 0;
	int rc = sqlite3_exec(mSqlite, cmd.c_str(), get_top_cars_callback, &cars, &zErrMsg);*/
}

bool CarManager::DeleteCar(int userId, int carId)
{
	/*std::string cmd = "DELETE FROM cars WHERE user_id=" + std::to_string(userId) + " AND id=" + std::to_string(carId) + ";";
	char *zErrMsg = 0;
	int rc = sqlite3_exec(mSqlite, cmd.c_str(), nullptr, nullptr, &zErrMsg);
	return rc == 0;*/
	return false;
}

void CarManager::ToJson(DBCar* pCar, std::string& json)
{
	rapidjson::Document o;
	o.SetObject();
	rapidjson::Document& d = o;
	/*rapidjson::Value o;
	o.SetObject();*/
	rapidjson::Value v;

	v.SetInt(pCar->Id);
	o.AddMember("id", v, d.GetAllocator());

	v.SetInt(pCar->UserId);
	o.AddMember("user_id", v, d.GetAllocator());

	v.SetInt(pCar->Make);
	o.AddMember("make", v, d.GetAllocator());

	v.SetInt(pCar->Class);
	o.AddMember("class", v, d.GetAllocator());

	v.SetInt(pCar->Model);
	o.AddMember("model", v, d.GetAllocator());

	v.SetInt(pCar->Submodel);
	o.AddMember("submodel", v, d.GetAllocator());

	v.SetInt(pCar->Country);
	o.AddMember("country", v, d.GetAllocator());

	v.SetInt(pCar->Province);
	o.AddMember("province", v, d.GetAllocator());

	v.SetInt(pCar->SubProvince);
	o.AddMember("sub_province", v, d.GetAllocator());

	v.SetInt(pCar->Class);
	o.AddMember("class", v, d.GetAllocator());

	v.SetInt(pCar->Model);
	o.AddMember("model", v, d.GetAllocator());

	v.SetInt(pCar->Price);
	o.AddMember("price", v, d.GetAllocator());

	v.SetInt(pCar->BodyType);
	o.AddMember("body_type", v, d.GetAllocator());

	v.SetInt(pCar->Year);
	o.AddMember("year", v, d.GetAllocator());

	v.SetInt(pCar->EngineType);
	o.AddMember("engine_type", v, d.GetAllocator());

	v.SetInt(pCar->EngineSize);
	o.AddMember("engine_size", v, d.GetAllocator());

	v.SetInt(pCar->EnginePower);
	o.AddMember("engine_power", v, d.GetAllocator());

	v.SetInt(pCar->Acc0To100);
	o.AddMember("acc_0_100", v, d.GetAllocator());

	v.SetInt(pCar->Transmission);
	o.AddMember("transmission", v, d.GetAllocator());

	v.SetInt(pCar->StearingWheel);
	o.AddMember("stearing_wheel", v, d.GetAllocator());

	v.SetInt(pCar->Exchange);
	o.AddMember("exchange", v, d.GetAllocator());

	v.SetInt(pCar->CustomsCleared);
	o.AddMember("customs_cleared", v, d.GetAllocator());

	v.SetInt(pCar->Color);
	o.AddMember("color", v, d.GetAllocator());

	v.SetString(pCar->Avatar.c_str(), d.GetAllocator());
	o.AddMember("avatar", v, d.GetAllocator());

	v.SetInt(pCar->OnSale);
	o.AddMember("on_sale", v, d.GetAllocator());

	v.SetInt(pCar->OnTop);
	o.AddMember("on_top", v, d.GetAllocator());

	rapidjson::StringBuffer buffer;
	buffer.Clear();

	rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
	d.Accept(writer);
	json = buffer.GetString();
}

/*void CarManager::SetDb(sqlite3* pSqlite) 
{
	mSqlite = pSqlite;
}*/

void CarManager::SetMap(void* pMap)
{
	mMap = pMap;
}

void* CarManager::GetMap()
{
	return mMap;
}