#include "AuthManager.h"

static int get_user_callback(void* pUsrPtr, int argc, char **argv, char **azColName)
{
	DBUser* pUser = (DBUser*)pUsrPtr;

	pUser->Id = atoi(argv[(int)EDBUserColumn::Id]);
	pUser->Phone = argv[(int)EDBUserColumn::Password];
	pUser->Password = argv[(int)EDBUserColumn::Password];
	pUser->Type = (EUserType)atoi(argv[(int)EDBUserColumn::Type]);
	pUser->FirstName = argv[(int)EDBUserColumn::FirstName];
	pUser->SecondName = argv[(int)EDBUserColumn::SecondName];
	pUser->NumGolds = atoi(argv[(int)EDBUserColumn::NumGolds]);
	pUser->Reputation = atof(argv[(int)EDBUserColumn::Reputation]);
	return 0;
}

AuthManager* AuthManager::sInstance = nullptr;

AuthManager* AuthManager::Get() 
{
	if (!sInstance) sInstance = new AuthManager();
	return sInstance;
}

AuthManager::AuthManager() 
{
	// mUser = new User();
}

/*void AuthManager::SetDb(sqlite3* pSqlite) 
{
	mSqlite = pSqlite;
}*/

std::string AuthManager::GetToken()
{
	return mToken;
}

bool AuthManager::CheckUser(const std::string& phone)
{
	/*std::string cmd = "SELECT * FROM users WHERE phone='" + phone + "';";
	char *zErrMsg = 0;
	//int rc = sqlite3_exec(mSqlite, cmd.c_str(), get_user_callback, pUser, &zErrMsg);
	struct sqlite3_stmt *selectstmt;
	int result = sqlite3_prepare_v2(mSqlite, cmd.c_str(), -1, &selectstmt, NULL);
	bool b = false;
	if (sqlite3_step(selectstmt) == SQLITE_ROW)
	{
		b = true;
	}

	sqlite3_finalize(selectstmt);
	return b;*/
	return false;
}

#include <cpr/cpr.h>
#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>
#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>

bool AuthManager::CreateUser(const std::string& phone, const std::string& password, EUserType type, const std::string& firstName, const std::string& secondName)
{
	rapidjson::Document d;
	d.SetObject();
	rapidjson::Value value;
	value.SetString(phone.c_str(), d.GetAllocator());
	d.AddMember("phone", value, d.GetAllocator());

	value.SetString(password.c_str(), d.GetAllocator());
	d.AddMember("password", value, d.GetAllocator());

	value.SetInt((int)type);
	d.AddMember("type", value, d.GetAllocator());

	value.SetString(firstName.c_str(), d.GetAllocator());
	d.AddMember("first_name", value, d.GetAllocator());

	value.SetString(secondName.c_str(), d.GetAllocator());
	d.AddMember("second_name", value, d.GetAllocator());

	rapidjson::StringBuffer buffer;
	buffer.Clear();
	rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
	d.Accept(writer);
	std::string json = buffer.GetString();

	cpr::Response res = cpr::Post(cpr::Url{mBaseUrl + "/api/v1/signup"}, cpr::Body{ json });

	return res.error.code == cpr::ErrorCode::OK;

	/*std::string cmd = "INSERT INTO users (phone, password, type, first_name, second_name) VALUES ('"
		+ phone + "', '" // phone
		+ password + "', "// password
		+ std::to_string((int)type) + ", '" // type
		+ firstName + "', '" // first_name
		+ secondName + "'"// second_name
		+ ");";

	char *zErrMsg = 0;
	int rc = sqlite3_exec(mSqlite, cmd.c_str(), nullptr, nullptr, &zErrMsg);
	return rc == 0;*/
}

ELoginStatus AuthManager::Login(const std::string& phone, const std::string& password)
{
	rapidjson::Document d;
	d.SetObject();
	rapidjson::Value value;
	value.SetString(phone.c_str(), d.GetAllocator());
	d.AddMember("phone", value, d.GetAllocator());

	value.SetString(password.c_str(), d.GetAllocator());
	d.AddMember("password", value, d.GetAllocator());

	rapidjson::StringBuffer buffer;
	buffer.Clear();
	rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
	d.Accept(writer);
	std::string json = buffer.GetString();

	cpr::Response res = cpr::Post(cpr::Url{ mBaseUrl + "/api/v1/signin" }, cpr::Body{ json });
	if (res.status_code == 200)
	{
		mToken = res.text;
		cpr::Header h;// { std::string("Authentication"), mToken };
		h["Authentication"] = mToken;
		res = cpr::Get(cpr::Url{ mBaseUrl + "/api/v1/me" }, h);
		if (res.status_code == 200)
		{
			rapidjson::Document d;
			d.Parse(res.text.c_str());

			if (!mUser) mUser = new DBUser();
			mUser->Id = d["id"].GetInt();
			mUser->Phone = d["phone"].GetString();
			mUser->Type = (EUserType)d["type"].GetInt();
			mUser->FirstName = d["first_name"].GetString();
			mUser->SecondName = d["second_name"].GetString();
			mUser->NumGolds = d["num_golds"].GetInt();
			mUser->Reputation = d["reputation"].GetFloat();
		}

	}
	return res.status_code == 200 ? ELoginStatus::Ok : ELoginStatus::UserNotFound;

	/*std::string cmd = "SELECT * FROM users WHERE phone='" + phone + "';";
	char *zErrMsg = 0;
	if (!mUser) mUser = new DBUser();
	int rc = sqlite3_exec(mSqlite, cmd.c_str(), get_user_callback, mUser, &zErrMsg);
	if (rc == 0)
	{
		if (password == mUser->Password)
			return ELoginStatus::Ok;
		else if (mUser->Phone == "")
		{
			delete mUser;
			mUser = nullptr;
			return ELoginStatus::UserNotFound;
		}
		else
		{
			delete mUser;
			mUser = nullptr;
			return ELoginStatus::WrongPassword;
		}
	}
	return ELoginStatus::UserNotFound;*/
}

DBUser* AuthManager::GetUser() 
{
	return mUser;
}

void AuthManager::SetUser(DBUser* pUser)
{
	if (mUser) delete mUser;
	mUser = pUser;
}

bool AuthManager::SetNumGolds(int numGolds)
{
	if (!mUser) return false;

	/*mUser->NumGolds = numGolds;
	std::string cmd = "UPDATE users SET num_golds=" + std::to_string(numGolds) + " WHERE id=" + std::to_string(mUser->Id) + ";";
	char *zErrMsg = 0;
	int rc = sqlite3_exec(mSqlite, cmd.c_str(), nullptr, nullptr, &zErrMsg);
	return rc == 0;*/
}

bool AuthManager::SetReputation(float reputation)
{
	/*if (!mUser) return false;

	mUser->Reputation = reputation;
	std::string cmd = "UPDATE users SET reputation=" + std::to_string(reputation) + " WHERE id=" + std::to_string(mUser->Id) + ";";
	char *zErrMsg = 0;
	int rc = sqlite3_exec(mSqlite, cmd.c_str(), nullptr, nullptr, &zErrMsg);
	return rc == 0;*/
	return false;
}