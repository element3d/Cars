#ifndef __AUTH_MANAGER__
#define __AUTH_MANAGER__

#include <string>
#include "Enum.h"
//#include "sqlite3/sqlite3.h"

enum class ELoginStatus 
{
	Ok,
	WrongPassword,
	UserNotFound
};

class AuthManager
{
public:
	static AuthManager* Get();

	//void SetDb(sqlite3* pSqlite);
	std::string GetToken();

	bool CheckUser(const std::string& phone);
	bool CreateUser(const std::string& phone, const std::string& password, EUserType type, const std::string& firstName, const std::string& secondName);
	ELoginStatus Login(const std::string& phone, const std::string& password);
	DBUser* GetUser();
	void SetUser(DBUser* pUser);
	bool SetNumGolds(int numGolds);
	bool SetReputation(float reputation);
private:
	AuthManager();
	
private:
	static AuthManager* sInstance;
	DBUser* mUser = nullptr;
	//sqlite3* mSqlite = nullptr;
	std::string mToken;
	std::string mBaseUrl = "192.168.1.5:1234";
};

#endif // !__AUTH_MANAGER__
