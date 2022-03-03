#include "Utils.h"

std::string Utils::ProvinceEnumToString(EProvince province) 
{
	switch (province)
	{
	case EProvince::Erevan:
		return "EREVAN";
	case EProvince::Armavir:
		return "ARMAVIR";
	case EProvince::Ararat:
		return "ARARAT";
	case EProvince::Aragacotn:
		return "ARAGACOTN";
	case EProvince::Kotayk:
		return "KOTAYK";
	case EProvince::Shirak:
		return "SHIRAK";
	case EProvince::Lori:
		return "LORI";
	case EProvince::Gegharkunik:
		return "GEGHARKUNIK";
	case EProvince::Syunik:
		return "SYUNIK";
	case EProvince::Tavush:
		return "TAVUSH";
	case EProvince::VayotsDzor:
		return "VAYOTS DZOR";
	case EProvince::Artsakh:
		return "ARTSAKH";
	default:
		break;
	}
	return "";
}

std::string Utils::SubProvinceEnumToString(ESubProvince subProvince)
{
	switch (subProvince)
	{
	case ESubProvince::Erevan_Ajapnyak:
		return "AJAPNYAK";
	case ESubProvince::Erevan_Arabkir:
		return "ARABKIR";
	case ESubProvince::Erevan_Avan:
		return "AVAN";
	case ESubProvince::Erevan_Davitashen:
		return "DAVITASHEN";
	case ESubProvince::Erevan_Erebuni:
		return "EREBUNI";
	case ESubProvince::Erevan_KanakerZeytun:
		return "KANAKER ZEYTUN";
	case ESubProvince::Erevan_Kentron:
		return "KENTRON";
	case ESubProvince::Erevan_MalatiaSebastia:
		return "MALATIA SEBASTIA";
	case ESubProvince::Erevan_NorNork:
		return "NOR NORK";
	case ESubProvince::Erevan_Shengavit:
		return "SHENGAVIT";
	case ESubProvince::Erevan_NorkMarash:
		return "NORK MARASH";
	case ESubProvince::Erevan_Nubarashen:
		return "NUBARASHEN";
	default:
		break;
	}
	return "";
}

std::string Utils::BodyTypeEnumToString(EBodyType bodyType)
{
	switch (bodyType)
	{
	case EBodyType::Sedan:
		return "SEDAN";
	case EBodyType::Coupe:
		return "COUPE";
	case EBodyType::Hatchback:
		return "HATCHBACK";
	case EBodyType::Convertible:
		return "CONVERTIBLE";
	case EBodyType::Universal:
		return "UNIVERSAL";
	case EBodyType::SUV:
		return "SUV";
	case EBodyType::Miniven:
		return "MINIVAN";
	case EBodyType::Pickup:
		return "PICKUP";
	case EBodyType::Limusin:
		return "LIMUSIN";
	case EBodyType::Furgon:
		return "FURGON";
	default:
		break;
	}

	return "";
}

std::string Utils::EngineTypeEnumToString(EEngineType engineType)
{
	switch (engineType)
	{
	case EEngineType::Petrol:
		return "PETROL";
	case EEngineType::Diesel:
		return "DIESEL";
	case EEngineType::Hybrid:
		return "HYBRID";
	case EEngineType::Electro:
		return "ELECTRO";
	default:
		break;
	}
	return "";
}

std::string Utils::MakeEnumToString(EMake make)
{
	switch (make)
	{
	case EMake::Bmw:
		return "BMW";
	case EMake::MercedesBenz:
		return "MERCEDES BENZ";
	case EMake::Audi:
		return "AUDI";
	case EMake::Porsche:
		return "PORSCHE";
	case EMake::Lexus:
		return "LEXUS";
	case EMake::Infiniti:
		return "INFINITI";
	case EMake::Toyota:
		return "TOYOTA";
	case EMake::Nissan:
		return "NISSAN";
	case EMake::Ford:
		return "FORD";
	case EMake::Chevrolet:
		return "CHEVROLET";
	case EMake::Volkswagen:
		return "VOLKWAGEN";
	case EMake::Opel:
		return "OPEL";
		break;
	case EMake::Mitsubishi:
		return "MITSUBISHI";
		break;
		/*	case EMake::Bentley:
		break;*/
	case EMake::Kia:
		return "KIA";
		break;
	case EMake::Hyundai:
		return "HYUNDAI";
		break;
	case EMake::Honda:
		return "HONDA";
		break;

	case EMake::Mazda:
		return "MAZDA";
		break;
	default:
		break;
	}
	return "";
}

void Utils::GetMakesData(std::vector<std::string>& names, std::vector<std::string>& images, std::vector<std::string>& logos) 
{
	names.push_back("BMW");
	names.push_back("MERCEDES BENZ");
	names.push_back("AUDI");
	names.push_back("PORSCHE");
	names.push_back("LEXUS");
	names.push_back("INFINITI");
	names.push_back("TOYOTA");
	names.push_back("NISSAN");
	names.push_back("FORD");
	names.push_back("CHEVROLET");
	names.push_back("VOLKSWAGEN");
	names.push_back("OPEL");
	names.push_back("MITSUBISHI");
	names.push_back("KIA");
	names.push_back("HYUNDAI");
	names.push_back("HONDA");
	names.push_back("MAZDA");

	images.push_back("Cars/images/car_images/bmw.png");
	images.push_back("Cars/images/car_images/mercedes.png");
	images.push_back("Cars/images/car_images/audi.png");
	images.push_back("Cars/images/car_images/porsche.png");
	images.push_back("Cars/images/car_images/lexus.png");
	images.push_back("Cars/images/car_images/infiniti.png");
	images.push_back("Cars/images/car_images/toyota.png");
	images.push_back("Cars/images/car_images/nissan.png");
	images.push_back("Cars/images/car_images/ford.png");
	images.push_back("Cars/images/car_images/chevrolet.png");
	images.push_back("Cars/images/car_images/volkswagen.png");
	images.push_back("Cars/images/car_images/opel.png");
	images.push_back("Cars/images/car_images/mitsubishi.png");
	images.push_back("Cars/images/car_images/kia.png");
	images.push_back("Cars/images/car_images/hyundai.png");
	images.push_back("Cars/images/car_images/honda.png");
	images.push_back("Cars/images/car_images/mazda.png");

	logos.push_back("Cars/images/car_brands/bmw.png");
	logos.push_back("Cars/images/car_brands/mercedes.png");
	logos.push_back("Cars/images/car_brands/audi.png");
	logos.push_back("Cars/images/car_brands/porsche.png");
	logos.push_back("Cars/images/car_brands/lexus.png");
	logos.push_back("Cars/images/car_brands/infiniti.png");
	logos.push_back("Cars/images/car_brands/toyota.png");
	logos.push_back("Cars/images/car_brands/nissan.png");
	logos.push_back("Cars/images/car_brands/ford.png");
	logos.push_back("Cars/images/car_brands/chevrolet.png");
	logos.push_back("Cars/images/car_brands/volkswagen.png");
	logos.push_back("Cars/images/car_brands/opel.png");
	logos.push_back("Cars/images/car_brands/mitsubishi.png");
	logos.push_back("Cars/images/car_brands/kia.png");
	logos.push_back("Cars/images/car_brands/hyundai.png");
	logos.push_back("Cars/images/car_brands/honda.png");
	logos.push_back("Cars/images/car_brands/mazda.png");
}

void Utils::GetClassListFromMake(EMake make, std::vector<std::string>& names, std::vector<ESerie>& classes, std::vector<std::string>& images, std::vector<std::string>& backgrounds)
{
	switch (make)
	{
	case EMake::Bmw:
		_GetBmwClassList(names, classes, images, backgrounds);
		return;
	case EMake::MercedesBenz:
		_GetMercedesBenzClassList(names, classes);
		break;
	case EMake::Audi:
		_GetAudiClassList(names, classes);
		break;
	case EMake::Porsche:
		_GetPorscheClassList(names, classes, images, backgrounds);
		break;
	case EMake::Lexus:
		_GetLexusClassList(names, classes);
		break;
	case EMake::Infiniti:
		_GetInfinitiClassList(names, classes);
		break;
	case EMake::Toyota:
		_GetToyotaClassList(names, classes);
		break;
	case EMake::Nissan:
		_GetNissanClassList(names, classes);
		break;
	case EMake::Ford:
		_GetFordClassList(names, classes, images);
		break;
	case EMake::Chevrolet:
		_GetChevroletClassList(names, classes);
		break;
	case EMake::Volkswagen:
		_GetVolkswagenClassList(names, classes);
		break;
	case EMake::Opel:
		_GetOpelClassList(names, classes);
		break;
	case EMake::Mitsubishi:
		_GetMitsubishiClassList(names, classes);
		break;
		/*	case EMake::Bentley:
		break;*/
	case EMake::Kia:
		_GetKIAClassList(names, classes);
		break;
	case EMake::Hyundai:
		_GetHyundaiClassList(names, classes);
		break;
	case EMake::Honda:
		_GetHondaClassList(names, classes);
		break;

	case EMake::Mazda:
		_GetMazdaClassList(names, classes);
		break;
	default:
		break;
	}
}

void Utils::GetModelsFromClass(ESerie cl, std::string& make, std::vector<std::string>& names, std::vector<EModel>& models, std::vector<std::string>& images)
{
	switch (cl)
	{
	case ESerie::Bmw1:
		make = "BMW";
		_GetBmw1Models(names, models);
		break;
	case ESerie::Bmw2:
		make = "BMW";
		_GetBmw2Models(names, models);
		break;
	case ESerie::Bmw3:
		make = "BMW";
		_GetBmw3Models(names, models, images);
		break;
	case ESerie::Bmw4:
		_GetBmw4Models(names, models);
		make = "BMW";
		break;
	case ESerie::Bmw5:
		_GetBmw5Models(names, models);
		make = "BMW";
		break;
	case ESerie::Bmw6:
		_GetBmw6Models(names, models);
		make = "BMW";
		break;
	case ESerie::Bmw7:
		_GetBmw7Models(names, models);
		make = "BMW";
		break;
	case ESerie::BmwX1:
		_GetBmwX1Models(names, models);
		make = "BMW";
		break;
	case ESerie::BmwX3:
		_GetBmwX3Models(names, models);
		make = "BMW";
		break;
	case ESerie::BmwX4:
		_GetBmwX4Models(names, models);
		make = "BMW";
		break;
	case ESerie::BmwX5:
		_GetBmwX5Models(names, models);
		make = "BMW";
		break;
	case ESerie::BmwX6:
		_GetBmwX6Models(names, models);
		make = "BMW";
		break;
	case ESerie::BmwX7:
		_GetBmwX7Models(names, models);
		make = "BMW";
		break;
	case ESerie::BmwZ4:
		_GetBmwZ4Models(names, models);
		make = "BMW";
		break;
	case ESerie::BmwM:
		make = "BMW";
		break;
	case ESerie::MercedesBenz190Class:
		_GetMB190ClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzAClass:
		_GetMBAClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzBClass:
		_GetMBBClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzCClass:
		_GetMBCClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzEClass:
		_GetMBEClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzSClass:
		_GetMBSClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzCLClass:
		_GetMBCLClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzCLAClass:
		_GetMBCLAClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzCLKClass:
		_GetMBCLKClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzCLSClass:
		_GetMBCLSClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzMLClass:
		_GetMBMLClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzGClass:
		_GetMBGClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzGLClass:
		_GetMBGLClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzGLAClass:
		_GetMBGLAClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzGLCCLass:
		_GetMBGLCClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzGLEClass:
		_GetMBGLEClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzGLKClass:
		_GetMBGLKClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzGLSClass:
		_GetMBGLSClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzRClass:
		_GetMBRClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzSLClass:
		_GetMBSLClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzSLKClass:
		_GetMBSLKClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzVClass:
		_GetMBVClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzSprinter:
		_GetMBSprinterClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzVaneo:
		_GetMBVaneoClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzViano:
		_GetMBVianoClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzVito:
		_GetMBVitoClassModels(names, models);
		make = "MERCEDES BENZ";
		break;
	case ESerie::MercedesBenzAMG:
		break;
		/* Audi */
	case ESerie::AudiA3:
		_GetAudiA3Models(names, models);
		make = "AUDI";
		break;
	case ESerie::AudiA4:
		_GetAudiA4Models(names, models);
		make = "AUDI";
		break;
	case ESerie::AudiA5:
		_GetAudiA5Models(names, models);
		make = "AUDI";
		break;
	case ESerie::AudiA6:
		_GetAudiA6Models(names, models);
		make = "AUDI";
		break;
	case ESerie::AudiA7:
		_GetAudiA7Models(names, models);
		make = "AUDI";
		break;
	case ESerie::AudiA8:
		_GetAudiA8Models(names, models);
		make = "AUDI";
		break;
	case ESerie::AudiQ5:
		_GetAudiQ5Models(names, models);
		make = "AUDI";
		break;
	case ESerie::AudiQ7:
		_GetAudiQ7Models(names, models);
		make = "AUDI";
		break;
	case ESerie::AudiTT:
		_GetAudiTTModels(names, models);
		make = "AUDI";
		break;
	case ESerie::AudiRS:
		break;
		/* Porsche */
	case ESerie::PorscheCayenne:
		_GetPorscheCayenneModels(names, models);
		make = "PORSCHE";
		break;
	case ESerie::PorscheMacan:
		_GetPorscheMacanModels(names, models);
		make = "PORSCHE";
		break;
	case ESerie::PorschePanamera:
		_GetPorschePanameraModels(names, models, images);
		make = "PORSCHE";
		break;
		/* Lexus */
	case ESerie::LexusCT:
		_GetLexusCTModels(names, models);
		make = "LEXUS";
		break;
	case ESerie::LexusIS:
		_GetLexusISModels(names, models);
		make = "LEXUS";
		break;
	case ESerie::LexusES:
		_GetLexusESModels(names, models);
		make = "LEXUS";
		break;
	case ESerie::LexusGS:
		_GetLexusGSModels(names, models);
		make = "LEXUS";
		break;
	case ESerie::LexusLS:
		_GetLexusLSModels(names, models);
		make = "LEXUS";
		break;
	case ESerie::LexusNX:
		_GetLexusNXModels(names, models);
		make = "LEXUS";
		break;
	case ESerie::LexusRX:
		_GetLexusRXModels(names, models);
		make = "LEXUS";
		break;
	case ESerie::LexusGX:
		_GetLexusGXModels(names, models);
		make = "LEXUS";
		break;
	case ESerie::LexusLX:
		_GetLexusLXModels(names, models);
		make = "LEXUS";
		break;
	case ESerie::LexusF:

		break;
		/* Infiniti */
	case ESerie::InfinitiEXSeries:
		_GetInfinitiEXModels(names, models);
		make = "INFINITI";
		break;
	case ESerie::InfinitiJXSeries:
		_GetInfinitiJXModels(names, models);
		make = "INFINITI";
		break;
	case ESerie::InfinitiFXSeries:
		_GetInfinitiFXModels(names, models);
		make = "INFINITI";
		break;
	case ESerie::InfinityGSeries:
		_GetInfinitiGModels(names, models);
		make = "INFINITI";
		break;
	case ESerie::InfinityMSeries:
		_GetInfinitiMModels(names, models);
		make = "INFINITI";
		break;
	case ESerie::InfinitiQ3Series:
		_GetInfinitiQ3Models(names, models);
		make = "INFINITI";
		break;
	case ESerie::InfinitiQX4Series:
		_GetInfinitiQX4Models(names, models);
		make = "INFINITI";
		break;
	case ESerie::InfinitiQX50Series:
		_GetInfinitiQX50Models(names, models);
		make = "INFINITI";
		break;
	case ESerie::InfinitiQX56Series:
		_GetInfinitiQX56Models(names, models);
		make = "INFINITI";
		break;
	case ESerie::InfinitiQX60Series:
		_GetInfinitiQX60Models(names, models);
		make = "INFINITI";
		break;
	case ESerie::InfinitiQX70Series:
		_GetInfinitiQX70Models(names, models);
		make = "INFINITI";
		break;
	case ESerie::InfinitiQX80Series:
		_GetInfinitiQX80Models(names, models);
		make = "INFINITI";
		break;
		/* Toyota */
	case ESerie::ToyotaAlphard:
		_GetToyotaAplphardModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaAltezza:
		_GetToyotaAltezzaModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaAvalon:
		_GetToyotaAvalonModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaAvensis:
		_GetToyotaAplphardModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaBelta:
		_GetToyotaBeltaModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaBlade:
		_GetToyotaBladeModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaCHR:
		_GetToyotaCHRModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaCamry:
		_GetToyotaCamryModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaCorolla:
		_GetToyotaCorollaModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaEstima:
		_GetToyotaEstimaModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaFJCruiser:
		_GetToyotaFJCruiserModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaFortuner:
		_GetToyotaFortunerModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaHarrier:
		_GetToyotaHarrierModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaHighlander:
		_GetToyotaHighlanderModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaHilux:
		_GetToyotaHiluxModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaIpsum:
		_GetToyotaIpsumModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaIst:
		_GetToyotaIstModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaLandCruiser:
		_GetToyotaLandCruiserModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaLandCruiserPrado:
		_GetToyotaLandCruiserPradoModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaNoah:
		_GetToyotaNoahModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaPasso:
		_GetToyotaPassoModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaPrius:
		_GetToyotaPriusModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaRAV4:
		_GetToyotaRAV4Models(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaSequoia:
		_GetToyotaSequoiaModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaSienna:
		_GetToyotaSiennaModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaTacoma:
		_GetToyotaTacomaModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaTundra:
		_GetToyotaTundraModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaVellfire:
		_GetToyotaVellfireModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaVitz:
		_GetToyotaVitzModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaVoxy:
		_GetToyotaVoxyModels(names, models);
		make = "TOYOTA";
		break;
	case ESerie::ToyotaYaris:
		_GetToyotaYarisModels(names, models);
		make = "TOYOTA";
		break;
		/* Nissan */
	case ESerie::NissanAlmera:
		_GetNissanAlmeraModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanAltima:
		_GetNissanAltimaModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanArmada:
		_GetNissanArmadaModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanBluebird:
		_GetNissanBluebirdModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanCube:
		_GetNissanCubeModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanElgrand:
		_GetNissanElgrandModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanFrontier:
		_GetNissanFrontierModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanFuga:
		_GetNissanFugaModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanJuke:
		_GetNissanJukeModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanKicks:
		_GetNissanKicksModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanLatio:
		_GetNissanLatioModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanLeaf:
		_GetNissanLeafModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanMarch:
		_GetNissanMarchModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanMaxima:
		_GetNissanMaximaModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanMicra:
		_GetNissanMicraModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanMurano:
		_GetNissanMuranoModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanNote:
		_GetNissanNoteModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanPathfinder:
		_GetNissanPathfinderModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanPatrol:
		_GetNissanPatrolModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanPresage:
		_GetNissanPresageModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanQashqai:
		_GetNissanQashqaiModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanQuest:
		_GetNissanQuestModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanRogue:
		_GetNissanRogueModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanSentra:
		_GetNissanSentraModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanSerena:
		_GetNissanSerenaModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanSkyline:
		_GetNissanSkylineModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanSunny:
		_GetNissanSunnyModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanTeana:
		_GetNissanTeanaModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanTerrano:
		_GetNissanTerranoModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanTiida:
		_GetNissanTiidaModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanVersa:
		_GetNissanVersaModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanXTrail:
		_GetNissanXTrailModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::NissanXTerra:
		_GetNissanXTerraModels(names, models);
		make = "NISSAN";
		break;
	case ESerie::Nissan350Z:
		_GetNissan350ZModels(names, models);
		make = "NISSAN";
		break;
		/* Ford */
	case ESerie::FordEdge:
		_GetFordEdgeModels(names, models);
		make = "FORD";
		break;
	case ESerie::FordEscape:
		_GetFordEscapeModels(names, models);
		make = "FORD";
		break;
	case ESerie::FordExplorer:
		_GetFordExplorerModels(names, models);
		make = "FORD";
		break;
	case ESerie::FordF150:
		_GetFordF150Models(names, models);
		make = "FORD";
		break;
	case ESerie::FordFiesta:
		_GetFordFiestaModels(names, models);
		make = "FORD";
		break;
	case ESerie::FordFocus:
		_GetFordFocusModels(names, models);
		make = "FORD";
		break;
	case ESerie::FordFusion:
		_GetFordFusionModels(names, models);
		make = "FORD";
		break;
	case ESerie::FordTaurus:
		_GetFordTaurusModels(names, models);
		make = "FORD";
		break;
	case ESerie::FordTransit:
		_GetFordTransitModels(names, models);
		make = "FORD";
		break;
	case ESerie::FordMustang:
		_GetFordMustangModels(names, models, images);
		make = "FORD";
		break;
		/* CHEVROLET */
	case ESerie::ChevroletAvalanche:
		_GetChevroletAvalancheModels(names, models);
		make = "CHEVROLET";
		break;
	case ESerie::ChevroletAveo:
		_GetChevroletAveoModels(names, models);
		make = "CHEVROLET";
		break;
	case ESerie::ChevroletCaptiva:
		_GetChevroletCaptivaModels(names, models);
		make = "CHEVROLET";
		break;
	case ESerie::ChevroletCruze:
		_GetChevroletCruzeModels(names, models);
		make = "CHEVROLET";
		break;
	case ESerie::ChevroletEpica:
		_GetChevroletEpicaModels(names, models);
		make = "CHEVROLET";
		break;
	case ESerie::ChevroletEquinox:
		_GetChevroletEquinoxModels(names, models);
		make = "CHEVROLET";
		break;
	case ESerie::ChevroletMalibu:
		_GetChevroletMalibuModels(names, models);
		make = "CHEVROLET";
		break;
	case ESerie::ChevroletNiva:
		_GetChevroletNivaModels(names, models);
		make = "CHEVROLET";
		break;
	case ESerie::ChevroletTahoe:
		_GetChevroletTahoeModels(names, models);
		make = "CHEVROLET";
		break;
	case ESerie::ChevroletTrailBlazer:
		_GetChevroletTrailBlazerModels(names, models);
		make = "CHEVROLET";
		break;
	case ESerie::ChevroletVolt:
		_GetChevroletVoltModels(names, models);
		make = "CHEVROLET";
		break;
	case ESerie::ChevroletCamaro:
		_GetChevroletCamaroModels(names, models, images);
		make = "CHEVROLET";
		break;
	case ESerie::ChevroletCorvette:
		_GetChevroletCorvetteModels(names, models);
		make = "CHEVROLET";
		break;
		/* VOLKSWAGEN */
	case ESerie::VolkswagenBeetle:
		_GetVolkswagenBeetleModels(names, models);
		make = "VOLKSWAGEN";
		break;
	case ESerie::VolkswagenBora:
		_GetVolkswagenBoraModels(names, models);
		make = "VOLKSWAGEN";
		break;
	case ESerie::VolkswagenCaddy:
		_GetVolkswagenCaddyModels(names, models);
		make = "VOLKSWAGEN";
		break;
	case ESerie::VolkswagenCrafter:
		_GetVolkswagenCrafterModels(names, models);
		make = "VOLKSWAGEN";
		break;
	case ESerie::VolkswagenGolf:
		_GetVolkswagenGolfModels(names, models);
		make = "VOLKSWAGEN";
		break;
	case ESerie::VolkswagenJetta:
		_GetVolkswagenJettaModels(names, models);
		make = "VOLKSWAGEN";
		break;
	case ESerie::VolkswagenPassat:
		_GetVolkswagenPassatModels(names, models);
		make = "VOLKSWAGEN";
		break;
	case ESerie::VolkswagenPassatCC:
		_GetVolkswagenPassatCCModels(names, models);
		make = "VOLKSWAGEN";
		break;
	case ESerie::VolkswagenPolo:
		_GetVolkswagenPoloModels(names, models);
		make = "VOLKSWAGEN";
		break;
	case ESerie::VolkswagenRoutan:
		_GetVolkswagenRoutanModels(names, models);
		make = "VOLKSWAGEN";
		break;
	case ESerie::VolkswagenTiguan:
		_GetVolkswagenTiguanModels(names, models);
		make = "VOLKSWAGEN";
		break;
	case ESerie::VolkswagenTouareg:
		_GetVolkswagenTouaregModels(names, models);
		make = "VOLKSWAGEN";
		break;
	case ESerie::VolkswagenTouran:
		_GetVolkswagenTouranModels(names, models);
		make = "VOLKSWAGEN";
		break;
	case ESerie::VolkswagenTransporter:
		_GetVolkswagenTransporterModels(names, models);
		make = "VOLKSWAGEN";
		break;
	case ESerie::VolkswagenVento:
		_GetVolkswagenVentoModels(names, models);
		make = "VOLKSWAGEN";
		break;
		/* OPEL */
	case ESerie::OpelAstra:
		_GetOpelAstraModels(names, models);
		make = "OPEL";
		break;
	case ESerie::OpelCombo:
		_GetOpelComboModels(names, models);
		make = "OPEL";
		break;
	case ESerie::OpelCorsa:
		_GetOpelCorsaModels(names, models);
		make = "OPEL";
		break;
	case ESerie::OpelFrontera:
		_GetOpelFronteraModels(names, models);
		make = "OPEL";
		break;
	case ESerie::OpelInsignia:
		_GetOpelInsigniaModels(names, models);
		make = "OPEL";
		break;
	case ESerie::OpelMeriva:
		_GetOpelMerivaModels(names, models);
		make = "OPEL";
		break;
	case ESerie::OpelOmega:
		_GetOpelOmegaModels(names, models);
		make = "OPEL";
		break;
	case ESerie::OpelSignum:
		_GetOpelSignumModels(names, models);
		make = "OPEL";
		break;
	case ESerie::OpelSintra:
		_GetOpelSintraModels(names, models);
		make = "OPEL";
		break;
	case ESerie::OpelVectra:
		_GetOpelVectraModels(names, models);
		make = "OPEL";
		break;
	case ESerie::OpelZafira:
		_GetOpelZafiraModels(names, models);
		make = "OPEL";
		break;
		/* MITSUBISHI */
	case ESerie::MitsubishiAirtrek:
		_GetMitsubishiAirtrekModels(names, models);
		make = "MITSUBISHI";
		break;
	case ESerie::MitsubishiChariot:
		_GetMitsubishiChariotModels(names, models);
		make = "MITSUBISHI";
		break;
	case ESerie::MitsubishiColt:
		_GetMitsubishiColtModels(names, models);
		make = "MITSUBISHI";
		break;
	case ESerie::MitsubishiGalant:
		_GetMitsubishiGalantModels(names, models);
		make = "MITSUBISHI";
		break;
	case ESerie::MitsubishiGrandis:
		_GetMitsubishiGrandisModels(names, models);
		make = "MITSUBISHI";
		break;
	case ESerie::MitsubishiLancer:
		_GetMitsubishiLancerModels(names, models);
		make = "MITSUBISHI";
		break;
	case ESerie::MitsubishiMontero:
		_GetMitsubishiMonteroModels(names, models);
		make = "MITSUBISHI";
		break;
	case ESerie::MitsubishiOutlander:
		_GetMitsubishiOutlanderModels(names, models);
		make = "MITSUBISHI";
		break;
	case ESerie::MitsubishiPajero:
		_GetMitsubishiPajeroModels(names, models);
		make = "MITSUBISHI";
		break;
		/* KIA */
	case ESerie::KIACadenza:
		_GetKiaCadenzaModels(names, models);
		make = "KIA";
		break;
	case ESerie::KIACerato:
		_GetKiaCeratoModels(names, models);
		make = "KIA";
		break;
	case ESerie::KIAForte:
		_GetKiaForteModels(names, models);
		make = "KIA";
		break;
	case ESerie::KIAK5:
		_GetKiaK5Models(names, models);
		make = "KIA";
		break;
	case ESerie::KIAOptima:
		_GetKiaOptimaModels(names, models);
		make = "KIA";
		break;
	case ESerie::KIARio:
		_GetKiaRioModels(names, models);
		make = "KIA";
		break;
	case ESerie::KIASedona:
		_GetKiaSedonaModels(names, models);
		make = "KIA";
		break;
	case ESerie::KIASorento:
		_GetKiaSorentoModels(names, models);
		make = "KIA";
		break;
	case ESerie::KIASportage:
		_GetKiaSportageModels(names, models);
		make = "KIA";
		break;
		/* HYUNDAI */
	case ESerie::HyundaiAccent:
		_GetHyundaiAccentModels(names, models);
		make = "HYUNDAI";
		break;
	case ESerie::HyundaiCreta:
		_GetHyundaiCretaModels(names, models);
		make = "HYUNDAI";
		break;
	case ESerie::HyundaiElantra:
		_GetHyundaiElantraModels(names, models);
		make = "HYUNDAI";
		break;
	case ESerie::HyundaiGenesis:
		_GetHyundaiGenesisModels(names, models);
		make = "HYUNDAI";
		break;
	case ESerie::HyundaiGenesisCoupe:
		_GetHyundaiGenesisCoupeModels(names, models);
		make = "HYUNDAI";
		break;
	case ESerie::HyundaiIX35:
		_GetHyundaiIX35Models(names, models);
		make = "HYUNDAI";
		break;
	case ESerie::HyundaiKona:
		_GetHyundaiKonaModels(names, models);
		make = "HYUNDAI";
		break;
	case ESerie::HyundaiSantaFe:
		_GetHyundaiSantaFeModels(names, models);
		make = "HYUNDAI";
		break;
	case ESerie::HyundaiSolaris:
		_GetHyundaiSolarisModels(names, models);
		make = "HYUNDAI";
		break;
	case ESerie::HyundaiSonata:
		_GetHyundaiSonataModels(names, models);
		make = "HYUNDAI";
		break;
	case ESerie::HyundaiTucson:
		_GetHyundaiTucsonModels(names, models);
		make = "HYUNDAI";
		break;
	case ESerie::HyundaiVeloster:
		_GetHyundaiVelosterModels(names, models);
		make = "HYUNDAI";
		break;
		/* HONDA */
	case ESerie::HondaAccord:
		_GetHondaAccordModels(names, models);
		make = "HONDA";
		break;
	case ESerie::HondaCivic:
		_GetHondaCivicModels(names, models);
		make = "HONDA";
		break;
	case ESerie::HondaCRV:
		_GetHondaCRVModels(names, models);
		make = "HONDA";
		break;
	case ESerie::HondaCrosstour:
		_GetHondaCrosstourModels(names, models);
		make = "HONDA";
		break;
	case ESerie::HondaElyson:
		_GetHondaElysionModels(names, models);
		make = "HONDA";
		break;
	case ESerie::HondaFit:
		_GetHondaFitModels(names, models);
		make = "HONDA";
		break;
	case ESerie::HondaHRV:
		_GetHondaHRVModels(names, models);
		make = "HONDA";
		break;
	case ESerie::HondaOdyssey:
		_GetHondaOdysseyModels(names, models);
		make = "HONDA";
		break;
	case ESerie::HondaPilot:
		_GetHondaPilotModels(names, models);
		make = "HONDA";
		break;
	case ESerie::HondaRidgeline:
		_GetHondaRidgelineModels(names, models);
		make = "HONDA";
		break;
	case ESerie::HondaStepwgn:
		_GetHondaStepwgnModels(names, models);
		make = "HONDA";
		break;
		/* MAZDA */
	case ESerie::MazdaAtenza:
		_GetMazdaAtenzaModels(names, models);
		make = "MAZDA";
		break;
	case ESerie::MazdaCX3:
		_GetMazdaCX3Models(names, models);
		make = "MAZDA";
		break;
	case ESerie::MazdaCX5:
		_GetMazdaCX5Models(names, models);
		make = "MAZDA";
		break;
	case ESerie::MazdaCX7:
		_GetMazdaCX7Models(names, models);
		make = "MAZDA";
		break;
	case ESerie::MazdaCX9:
		_GetMazdaCX9Models(names, models);
		make = "MAZDA";
		break;
	case ESerie::MazdaDemio:
		_GetMazdaDemioModels(names, models);
		make = "MAZDA";
		break;
	case ESerie::MazdaMPV:
		_GetMazdaMPVModels(names, models);
		make = "MAZDA";
		break;
	case ESerie::MazdaRX8:
		_GetMazdaRX8Models(names, models);
		make = "MAZDA";
		break;
	case ESerie::MazdaTribute:
		_GetMazdaTributeModels(names, models);
		make = "MAZDA";
		break;
	case ESerie::Mazda3:
		_GetMazda3Models(names, models);
		make = "MAZDA";
		break;
	case ESerie::Mazda5:
		_GetMazda5Models(names, models);
		make = "MAZDA";
		break;
	case ESerie::Mazda6:
		_GetMazda6Models(names, models);
		make = "MAZDA";
		break;
	default:
		break;
	}
}

void Utils::_GetBmwClassList(std::vector<std::string>& names, std::vector<ESerie>& classes, std::vector<std::string>& images, std::vector<std::string>& backgrounds)
{

	names.push_back("1 SERIES");
	names.push_back("2 SERIES");
	names.push_back("3 SERIES");
	names.push_back("4 SERIES");
	names.push_back("5 SERIES");
	names.push_back("6 SERIES");
	names.push_back("7 SERIES");
	names.push_back("X1 SERIES");
	names.push_back("X3 SERIES");
	names.push_back("X4 SERIES");
	names.push_back("X5 SERIES");
	names.push_back("X6 SERIES");
	names.push_back("X7 SERIES");
	names.push_back("Z4 SERIES");
	names.push_back("M SERIES");

	classes.push_back(ESerie::Bmw1);
	classes.push_back(ESerie::Bmw2);
	classes.push_back(ESerie::Bmw3);
	classes.push_back(ESerie::Bmw4);
	classes.push_back(ESerie::Bmw5);
	classes.push_back(ESerie::Bmw6);
	classes.push_back(ESerie::Bmw7);
	classes.push_back(ESerie::BmwX1);
	classes.push_back(ESerie::BmwX3);
	classes.push_back(ESerie::BmwX4);
	classes.push_back(ESerie::BmwX5);
	classes.push_back(ESerie::BmwX6);
	classes.push_back(ESerie::BmwX7);
	classes.push_back(ESerie::BmwZ4);
	classes.push_back(ESerie::BmwM);

	images.push_back("Cars/images/bmw/bmw1.png");
	images.push_back("Cars/images/bmw/bmw2.png");
	images.push_back("Cars/images/bmw/bmw3.png");
	images.push_back("Cars/images/bmw/bmw4.png");
	images.push_back("Cars/images/bmw/bmw5.png");
	images.push_back("Cars/images/bmw/bmw6.png");
	images.push_back("Cars/images/bmw/bmw7.png");
	images.push_back("Cars/images/bmw/bmw1.png");
	images.push_back("Cars/images/bmw/bmw1.png");
	images.push_back("Cars/images/bmw/bmw1.png");
	images.push_back("Cars/images/bmw/bmw1.png");
	images.push_back("Cars/images/bmw/bmw1.png");
	images.push_back("Cars/images/bmw/bmw1.png");
	images.push_back("Cars/images/bmw/bmw1.png");
	images.push_back("Cars/images/bmw/bmw1.png");

	backgrounds.push_back("Cars/images/blue.png");
	backgrounds.push_back("Cars/images/blue.png");
	backgrounds.push_back("Cars/images/blue.png");
	backgrounds.push_back("Cars/images/blue.png");
	backgrounds.push_back("Cars/images/blue.png");
	backgrounds.push_back("Cars/images/blue.png");
	backgrounds.push_back("Cars/images/blue.png");
	backgrounds.push_back("Cars/images/blue.png");
	backgrounds.push_back("Cars/images/blue.png");
	backgrounds.push_back("Cars/images/blue.png");
	backgrounds.push_back("Cars/images/blue.png");
	backgrounds.push_back("Cars/images/blue.png");
	backgrounds.push_back("Cars/images/blue.png");
	backgrounds.push_back("Cars/images/blue.png");
	backgrounds.push_back("Cars/images/blue.png");

}

void Utils::_GetMercedesBenzClassList(std::vector<std::string>& names, std::vector<ESerie>& classes)
{
	names.push_back("190 Class");
	names.push_back("A Class");
	names.push_back("B Class");
	names.push_back("C Class");
	names.push_back("E Class");
	names.push_back("S Class");
	names.push_back("CL Class");
	names.push_back("CLA Class");
	names.push_back("CLK Class");
	names.push_back("CLS Class");
	names.push_back("ML Class");
	names.push_back("G Class");
	names.push_back("GL Class");
	names.push_back("GLA Class");
	names.push_back("GLC CLass");
	names.push_back("GLE Class");
	names.push_back("GLK Class");
	names.push_back("GLS Class");
	names.push_back("R Class");
	names.push_back("SL Class");
	names.push_back("SLK Class");
	names.push_back("V Class");
	names.push_back("Sprinter");
	names.push_back("Vaneo");
	names.push_back("Viano");
	names.push_back("Vito");
	names.push_back("AMG");

	classes.push_back(ESerie::MercedesBenz190Class);
	classes.push_back(ESerie::MercedesBenzAClass);
	classes.push_back(ESerie::MercedesBenzBClass);
	classes.push_back(ESerie::MercedesBenzCClass);
	classes.push_back(ESerie::MercedesBenzEClass);
	classes.push_back(ESerie::MercedesBenzSClass);
	classes.push_back(ESerie::MercedesBenzCLClass);
	classes.push_back(ESerie::MercedesBenzCLAClass);
	classes.push_back(ESerie::MercedesBenzCLKClass);
	classes.push_back(ESerie::MercedesBenzCLSClass);
	classes.push_back(ESerie::MercedesBenzMLClass);
	classes.push_back(ESerie::MercedesBenzGClass);
	classes.push_back(ESerie::MercedesBenzGLClass);
	classes.push_back(ESerie::MercedesBenzGLAClass);
	classes.push_back(ESerie::MercedesBenzGLCCLass);
	classes.push_back(ESerie::MercedesBenzGLEClass);
	classes.push_back(ESerie::MercedesBenzGLKClass);
	classes.push_back(ESerie::MercedesBenzGLSClass);
	classes.push_back(ESerie::MercedesBenzRClass);
	classes.push_back(ESerie::MercedesBenzSLClass);
	classes.push_back(ESerie::MercedesBenzSLKClass);
	classes.push_back(ESerie::MercedesBenzVClass);
	classes.push_back(ESerie::MercedesBenzSprinter);
	classes.push_back(ESerie::MercedesBenzVaneo);
	classes.push_back(ESerie::MercedesBenzViano);
	classes.push_back(ESerie::MercedesBenzVito);
	classes.push_back(ESerie::MercedesBenzAMG);

}

void Utils::_GetAudiClassList(std::vector<std::string>& names, std::vector<ESerie>& classes)
{
	names.push_back("AUDI A3");
	names.push_back("AUDI A4");
	names.push_back("AUDI A5");
	names.push_back("AUDI A6");
	names.push_back("AUDI A7");
	names.push_back("AUDI A8");
	names.push_back("AUDI Q5");
	names.push_back("AUDI Q7");
	names.push_back("AUDI TT");
	names.push_back("AUDI RS");

	classes.push_back(ESerie::AudiA3);
	classes.push_back(ESerie::AudiA4);
	classes.push_back(ESerie::AudiA5);
	classes.push_back(ESerie::AudiA6);
	classes.push_back(ESerie::AudiA7);
	classes.push_back(ESerie::AudiA8);
	classes.push_back(ESerie::AudiQ5);
	classes.push_back(ESerie::AudiQ7);
	classes.push_back(ESerie::AudiTT);
	classes.push_back(ESerie::AudiRS);
}

void Utils::_GetPorscheClassList(std::vector<std::string>& names, std::vector<ESerie>& classes, std::vector<std::string>& images, std::vector<std::string>& backgrounds)
{
	names.push_back("CAYENNE");
	names.push_back("MACAN");
	names.push_back("PANAMERA");

	classes.push_back(ESerie::PorscheCayenne);
	classes.push_back(ESerie::PorscheMacan);
	classes.push_back(ESerie::PorschePanamera);

	images.push_back("Cars/images/porsche/cayenne.png");
	images.push_back("Cars/images/porsche/macan.png");
	images.push_back("Cars/images/porsche/panamera.png");

	backgrounds.push_back("Cars/images/purple2.png");
	backgrounds.push_back("Cars/images/orange.png");
	backgrounds.push_back("Cars/images/blue.png");
}

void Utils::_GetLexusClassList(std::vector<std::string>& names, std::vector<ESerie>& classes)
{
	names.push_back("LEXUS CT");
	names.push_back("LEXUS IS");
	names.push_back("LEXUS ES");
	names.push_back("LEXUS GS");
	names.push_back("LEXUS LS");
	names.push_back("LEXUS NX");
	names.push_back("LEXUS RX");
	names.push_back("LEXUS GX");
	names.push_back("LEXUS LX");
	names.push_back("LEXUS F");

	classes.push_back(ESerie::LexusCT);
	classes.push_back(ESerie::LexusIS);
	classes.push_back(ESerie::LexusES);
	classes.push_back(ESerie::LexusGS);
	classes.push_back(ESerie::LexusLS);
	classes.push_back(ESerie::LexusNX);
	classes.push_back(ESerie::LexusRX);
	classes.push_back(ESerie::LexusGX);
	classes.push_back(ESerie::LexusLX);
	classes.push_back(ESerie::LexusF);
}

void Utils::_GetInfinitiClassList(std::vector<std::string>& names, std::vector<ESerie>& classes)
{
	names.push_back("EX SERIES");
	names.push_back("JX SERIES");
	names.push_back("FX SERIES");
	names.push_back("G SERIES");
	names.push_back("M SERIES");
	names.push_back("Q3 SERIES");
	names.push_back("QX4 SERIES");
	names.push_back("QX50 SERIES");
	names.push_back("QX56 SERIES");
	names.push_back("QX60 SERIES");
	names.push_back("QX70 SERIES");
	names.push_back("QX80 SERIES");

	classes.push_back(ESerie::InfinitiEXSeries);
	classes.push_back(ESerie::InfinitiJXSeries);
	classes.push_back(ESerie::InfinitiFXSeries);
	classes.push_back(ESerie::InfinityGSeries);
	classes.push_back(ESerie::InfinityMSeries);
	classes.push_back(ESerie::InfinitiQ3Series);
	classes.push_back(ESerie::InfinitiQX4Series);
	classes.push_back(ESerie::InfinitiQX50Series);
	classes.push_back(ESerie::InfinitiQX56Series);
	classes.push_back(ESerie::InfinitiQX60Series);
	classes.push_back(ESerie::InfinitiQX70Series);
	classes.push_back(ESerie::InfinitiQX80Series);
}

void Utils::_GetToyotaClassList(std::vector<std::string>& names, std::vector<ESerie>& classes)
{
	names.push_back("ALPHARD");
	names.push_back("ALTEZZA");
	names.push_back("AVALON");
	names.push_back("AVENSIS");
	names.push_back("BELTA");
	names.push_back("BLADE");
	names.push_back("CHR");
	names.push_back("CAMRY");
	names.push_back("COROLLA");
	names.push_back("ESTIMA");
	names.push_back("FJ CRUISER");
	names.push_back("FORTUNER");
	names.push_back("HARRIER");
	names.push_back("HIGHLANDER");
	names.push_back("HILUX");
	names.push_back("IPSUM");
	names.push_back("IST");
	names.push_back("LAND CRUISER");
	names.push_back("LAND CRUISER PRADO");
	names.push_back("NOAH");
	names.push_back("PASSO");
	names.push_back("PRIUS");
	names.push_back("RAV 4");
	names.push_back("SEQUOIA");
	names.push_back("SIENNA");
	names.push_back("TACOMA");
	names.push_back("TUNDRA");
	names.push_back("VELLFIRE");
	names.push_back("VITS");
	names.push_back("VOXY");
	names.push_back("YARIS");

	classes.push_back(ESerie::ToyotaAlphard);
	classes.push_back(ESerie::ToyotaAltezza);
	classes.push_back(ESerie::ToyotaAvalon);
	classes.push_back(ESerie::ToyotaAvensis);
	classes.push_back(ESerie::ToyotaBelta);
	classes.push_back(ESerie::ToyotaBlade);
	classes.push_back(ESerie::ToyotaCHR);
	classes.push_back(ESerie::ToyotaCamry);
	classes.push_back(ESerie::ToyotaCorolla);
	classes.push_back(ESerie::ToyotaEstima);
	classes.push_back(ESerie::ToyotaFJCruiser);
	classes.push_back(ESerie::ToyotaFortuner);
	classes.push_back(ESerie::ToyotaHarrier);
	classes.push_back(ESerie::ToyotaHighlander);
	classes.push_back(ESerie::ToyotaHilux);
	classes.push_back(ESerie::ToyotaIpsum);
	classes.push_back(ESerie::ToyotaIst);
	classes.push_back(ESerie::ToyotaLandCruiser);
	classes.push_back(ESerie::ToyotaLandCruiserPrado);
	classes.push_back(ESerie::ToyotaNoah);
	classes.push_back(ESerie::ToyotaPasso);
	classes.push_back(ESerie::ToyotaPrius);
	classes.push_back(ESerie::ToyotaRAV4);
	classes.push_back(ESerie::ToyotaSequoia);
	classes.push_back(ESerie::ToyotaSienna);
	classes.push_back(ESerie::ToyotaTacoma);
	classes.push_back(ESerie::ToyotaTundra);
	classes.push_back(ESerie::ToyotaVellfire);
	classes.push_back(ESerie::ToyotaVitz);
	classes.push_back(ESerie::ToyotaVoxy);
	classes.push_back(ESerie::ToyotaYaris);
}

void Utils::_GetNissanClassList(std::vector<std::string>& names, std::vector<ESerie>& classes)
{
	names.push_back("ALMERA");
	names.push_back("ALTIMA");
	names.push_back("ARMADA");
	names.push_back("BUEBIRD");
	names.push_back("CUBE");
	names.push_back("ELGRAND");
	names.push_back("FRONTIER");
	names.push_back("FUGA");
	names.push_back("JUKE");
	names.push_back("KICKS");

	names.push_back("LATIO");
	names.push_back("LEAF");
	names.push_back("MARCH");
	names.push_back("MAXIMA");
	names.push_back("MICRA");
	names.push_back("MURANO");
	names.push_back("NOTE");
	names.push_back("PATHFINDER");
	names.push_back("PATROL");
	names.push_back("PRESAGE");

	names.push_back("QASHQAI");
	names.push_back("QUEST");
	names.push_back("ROGUE");
	names.push_back("SENTRA");
	names.push_back("SERENA");
	names.push_back("SKYLINE");
	names.push_back("SUNNY");
	names.push_back("TEANA");
	names.push_back("TERRANO");
	names.push_back("TIIDA");

	names.push_back("VERSA");
	names.push_back("X TRAIL");
	names.push_back("X TERRA");
	names.push_back("350Z");

	classes.push_back(ESerie::NissanAlmera);
	classes.push_back(ESerie::NissanAltima);
	classes.push_back(ESerie::NissanArmada);
	classes.push_back(ESerie::NissanBluebird);
	classes.push_back(ESerie::NissanCube);
	classes.push_back(ESerie::NissanElgrand);
	classes.push_back(ESerie::NissanFrontier);
	classes.push_back(ESerie::NissanFuga);
	classes.push_back(ESerie::NissanJuke);
	classes.push_back(ESerie::NissanKicks);
	classes.push_back(ESerie::NissanLatio);
	classes.push_back(ESerie::NissanLeaf);
	classes.push_back(ESerie::NissanMarch);
	classes.push_back(ESerie::NissanMaxima);
	classes.push_back(ESerie::NissanMicra);
	classes.push_back(ESerie::NissanMurano);
	classes.push_back(ESerie::NissanNote);
	classes.push_back(ESerie::NissanPathfinder);
	classes.push_back(ESerie::NissanPatrol);
	classes.push_back(ESerie::NissanPresage);
	classes.push_back(ESerie::NissanQashqai);
	classes.push_back(ESerie::NissanQuest);
	classes.push_back(ESerie::NissanRogue);
	classes.push_back(ESerie::NissanSentra);
	classes.push_back(ESerie::NissanSerena);
	classes.push_back(ESerie::NissanSkyline);
	classes.push_back(ESerie::NissanSunny);
	classes.push_back(ESerie::NissanTeana);
	classes.push_back(ESerie::NissanTerrano);
	classes.push_back(ESerie::NissanTiida);
	classes.push_back(ESerie::NissanVersa);
	classes.push_back(ESerie::NissanXTrail);
	classes.push_back(ESerie::NissanXTerra);
	classes.push_back(ESerie::Nissan350Z);
}

void Utils::_GetFordClassList(std::vector<std::string>& names, std::vector<ESerie>& classes, std::vector<std::string>& images)
{
	names.push_back("EDGE");
	names.push_back("ESCAPE");
	names.push_back("EXPLORER");
	names.push_back("F 150");
	names.push_back("FIESTA");
	names.push_back("FOCUS");
	names.push_back("FUSION");
	names.push_back("TAURUS");
	names.push_back("TRANSIT");
	names.push_back("MUSTANG");

	classes.push_back(ESerie::FordEdge);
	classes.push_back(ESerie::FordEscape);
	classes.push_back(ESerie::FordExplorer);
	classes.push_back(ESerie::FordF150);
	classes.push_back(ESerie::FordFiesta);
	classes.push_back(ESerie::FordFocus);
	classes.push_back(ESerie::FordFusion);
	classes.push_back(ESerie::FordTaurus);
	classes.push_back(ESerie::FordTransit);
	classes.push_back(ESerie::FordMustang);

	images.push_back("Cars/images/ford/mustang.png");
	images.push_back("Cars/images/ford/mustang.png");
	images.push_back("Cars/images/ford/mustang.png");
	images.push_back("Cars/images/ford/mustang.png");
	images.push_back("Cars/images/ford/mustang.png");
	images.push_back("Cars/images/ford/mustang.png");
	images.push_back("Cars/images/ford/mustang.png");
	images.push_back("Cars/images/ford/mustang.png");
	images.push_back("Cars/images/ford/mustang.png");
	images.push_back("Cars/images/ford/mustang.png");
}

void Utils::_GetChevroletClassList(std::vector<std::string>& names, std::vector<ESerie>& classes)
{
	names.push_back("AVALANCHE");
	names.push_back("AVEO");
	names.push_back("CAPTIVA");
	names.push_back("CRUZE");
	names.push_back("EPICA");
	names.push_back("EQUINOX");
	names.push_back("MALIBU");
	names.push_back("NIVA");
	names.push_back("TAHOE");
	names.push_back("TRAIL BLAZER");
	names.push_back("VOLT");
	names.push_back("CAMARO");
	names.push_back("CORVETTE");

	classes.push_back(ESerie::ChevroletAvalanche);
	classes.push_back(ESerie::ChevroletAveo);
	classes.push_back(ESerie::ChevroletCaptiva);
	classes.push_back(ESerie::ChevroletCruze);
	classes.push_back(ESerie::ChevroletEpica);
	classes.push_back(ESerie::ChevroletEquinox);
	classes.push_back(ESerie::ChevroletMalibu);
	classes.push_back(ESerie::ChevroletNiva);
	classes.push_back(ESerie::ChevroletTahoe);
	classes.push_back(ESerie::ChevroletTrailBlazer);
	classes.push_back(ESerie::ChevroletVolt);
	classes.push_back(ESerie::ChevroletCamaro);
	classes.push_back(ESerie::ChevroletCorvette);
}

void Utils::_GetVolkswagenClassList(std::vector<std::string>& names, std::vector<ESerie>& classes)
{
	names.push_back("BEATLE");
	names.push_back("Bora");
	names.push_back("Caddy");
	names.push_back("CRAFTER");
	names.push_back("GOLF");
	names.push_back("JETTA");
	names.push_back("PASSAT");
	names.push_back("PASSAT CC");
	names.push_back("POLO");
	names.push_back("ROUTAN");
	names.push_back("TIGUAN");
	names.push_back("TOUAREG");
	names.push_back("TOURAN");
	names.push_back("TRANSPORTER");
	names.push_back("VENTO");

	classes.push_back(ESerie::VolkswagenBeetle);
	classes.push_back(ESerie::VolkswagenBora);
	classes.push_back(ESerie::VolkswagenCaddy);
	classes.push_back(ESerie::VolkswagenCrafter);
	classes.push_back(ESerie::VolkswagenGolf);
	classes.push_back(ESerie::VolkswagenJetta);
	classes.push_back(ESerie::VolkswagenPassat);
	classes.push_back(ESerie::VolkswagenPassatCC);
	classes.push_back(ESerie::VolkswagenPolo);
	classes.push_back(ESerie::VolkswagenRoutan);
	classes.push_back(ESerie::VolkswagenTiguan);
	classes.push_back(ESerie::VolkswagenTouareg);
	classes.push_back(ESerie::VolkswagenTouran);
	classes.push_back(ESerie::VolkswagenTransporter);
	classes.push_back(ESerie::VolkswagenVento);
}

void Utils::_GetOpelClassList(std::vector<std::string>& names, std::vector<ESerie>& classes)
{
	names.push_back("ASTRA");
	names.push_back("COMBO");
	names.push_back("CORSA");
	names.push_back("FRONTERA");
	names.push_back("INSIGNIA");
	names.push_back("MERIVA");
	names.push_back("OMEGA");
	names.push_back("SIGNUM");
	names.push_back("SINTRA");
	names.push_back("VECTRA");
	names.push_back("ZAFIRA");

	classes.push_back(ESerie::OpelAstra);
	classes.push_back(ESerie::OpelCombo);
	classes.push_back(ESerie::OpelCorsa);
	classes.push_back(ESerie::OpelFrontera);
	classes.push_back(ESerie::OpelInsignia);
	classes.push_back(ESerie::OpelMeriva);
	classes.push_back(ESerie::OpelOmega);
	classes.push_back(ESerie::OpelSignum);
	classes.push_back(ESerie::OpelSintra);
	classes.push_back(ESerie::OpelVectra);
	classes.push_back(ESerie::OpelZafira);
}

void Utils::_GetMitsubishiClassList(std::vector<std::string>& names, std::vector<ESerie>& classes)
{
	names.push_back("AIRTREK");
	names.push_back("CHARIOT");
	names.push_back("COLT");
	names.push_back("GALANT");
	names.push_back("GRANDIS");
	names.push_back("LANCER");
	names.push_back("MONTERO");
	names.push_back("OUTLANDER");
	names.push_back("PAJERO");

	classes.push_back(ESerie::MitsubishiAirtrek);
	classes.push_back(ESerie::MitsubishiChariot);
	classes.push_back(ESerie::MitsubishiColt);
	classes.push_back(ESerie::MitsubishiGalant);
	classes.push_back(ESerie::MitsubishiGrandis);
	classes.push_back(ESerie::MitsubishiLancer);
	classes.push_back(ESerie::MitsubishiMontero);
	classes.push_back(ESerie::MitsubishiOutlander);
	classes.push_back(ESerie::MitsubishiPajero);
}

void Utils::_GetKIAClassList(std::vector<std::string>& names, std::vector<ESerie>& classes)
{
	names.push_back("CADENZA");
	names.push_back("CERATO");
	names.push_back("FORTE");
	names.push_back("K5");
	names.push_back("OPTIMA");
	names.push_back("RIO");
	names.push_back("SEDONA");
	names.push_back("SORENTO");
	names.push_back("SPORTAGE");

	classes.push_back(ESerie::KIACadenza);
	classes.push_back(ESerie::KIACerato);
	classes.push_back(ESerie::KIAForte);
	classes.push_back(ESerie::KIAK5);
	classes.push_back(ESerie::KIAOptima);
	classes.push_back(ESerie::KIARio);
	classes.push_back(ESerie::KIASedona);
	classes.push_back(ESerie::KIASorento);
	classes.push_back(ESerie::KIASportage);
}

void Utils::_GetHyundaiClassList(std::vector<std::string>& names, std::vector<ESerie>& classes)
{
	names.push_back("ACCENT");
	names.push_back("CRETA");
	names.push_back("ELANTRA");
	names.push_back("GENESIS");
	names.push_back("IX35");
	names.push_back("KONA");
	names.push_back("SANTA FE");
	names.push_back("SOLARIS");
	names.push_back("SONATA");
	names.push_back("TUCSON");
	names.push_back("VELOSTER");

	classes.push_back(ESerie::HyundaiAccent);
	classes.push_back(ESerie::HyundaiCreta);
	classes.push_back(ESerie::HyundaiElantra);
	classes.push_back(ESerie::HyundaiGenesis);
	classes.push_back(ESerie::HyundaiIX35);
	classes.push_back(ESerie::HyundaiKona);
	classes.push_back(ESerie::HyundaiSantaFe);
	classes.push_back(ESerie::HyundaiSolaris);
	classes.push_back(ESerie::HyundaiSonata);
	classes.push_back(ESerie::HyundaiTucson);
	classes.push_back(ESerie::HyundaiVeloster);
}

void Utils::_GetHondaClassList(std::vector<std::string>& names, std::vector<ESerie>& classes)
{
	names.push_back("ACCORD");
	names.push_back("CIVIC");
	names.push_back("CRV");
	names.push_back("CROSSTOUR");
	names.push_back("ELYSON");
	names.push_back("FIT");
	names.push_back("HRV");
	names.push_back("ODYSSEY");
	names.push_back("PILOT");
	names.push_back("RIDGELINE");
	names.push_back("STEPWGN");

	classes.push_back(ESerie::HondaAccord);
	classes.push_back(ESerie::HondaCivic);
	classes.push_back(ESerie::HondaCRV);
	classes.push_back(ESerie::HondaCrosstour);
	classes.push_back(ESerie::HondaElyson);
	classes.push_back(ESerie::HondaFit);
	classes.push_back(ESerie::HondaHRV);
	classes.push_back(ESerie::HondaOdyssey);
	classes.push_back(ESerie::HondaPilot);
	classes.push_back(ESerie::HondaRidgeline);
	classes.push_back(ESerie::HondaStepwgn);
}

void Utils::_GetMazdaClassList(std::vector<std::string>& names, std::vector<ESerie>& classes)
{
	names.push_back("MAZDA ALTEZA");
	names.push_back("MAZDA CX3");
	names.push_back("MAZDA CX5");
	names.push_back("MAZDA CX7");
	names.push_back("MAZDA CX9");
	names.push_back("MAZDA DEMIO");
	names.push_back("MAZDA MPV");
	names.push_back("MAZDA RX8");
	names.push_back("MAZDA TRIBUTE");
	names.push_back("MAZDA 3");
	names.push_back("MAZDA 5");
	names.push_back("MAZDA 6");

	classes.push_back(ESerie::MazdaAtenza);
	classes.push_back(ESerie::MazdaCX3);
	classes.push_back(ESerie::MazdaCX5);
	classes.push_back(ESerie::MazdaCX7);
	classes.push_back(ESerie::MazdaCX9);
	classes.push_back(ESerie::MazdaDemio);
	classes.push_back(ESerie::MazdaMPV);
	classes.push_back(ESerie::MazdaRX8);
	classes.push_back(ESerie::MazdaTribute);
	classes.push_back(ESerie::Mazda3);
	classes.push_back(ESerie::Mazda5);
	classes.push_back(ESerie::Mazda6);
}

std::string Utils::TransmissionEnumToString(ETransmission transmission)
{
	switch (transmission)
	{
	case ETransmission::Automatic:
		return "AUTOMATIC";
	case ETransmission::Manual:
		return "MANUAL";
	case ETransmission::Robot:
		return "ROBOT";
	case ETransmission::Variator:
		return "VARIATOR";
	default:
		break;
	}

	return "";
}

AutoPartData Utils::GetAutoPartData(EAutoPartType autoPartType)
{
	AutoPartData d;
	d.Type = autoPartType;
	switch (autoPartType)
	{
	case EAutoPartType::BodyParts:
		d.Title = "BODY PARTS";
		d.Image = "Cars/images/car_parts/body_parts.png";
		d.Color = glm::vec4(3, 207, 252, 255);
		break;
	case EAutoPartType::Brakes:
		d.Title = "BRAKES";
		d.Image = "Cars/images/car_parts/brakes.png";
		d.Color = glm::vec4(147, 250, 57, 255);
		break;
	case EAutoPartType::Engine:
		d.Title = "ENGINE";
		d.Image = "Cars/images/car_parts/engine.png";
		d.Color = glm::vec4(250, 218, 57, 255);
		break;
	case EAutoPartType::Interior:
		d.Title = "INTERIOR";
		d.Image = "Cars/images/car_parts/interior.png";
		d.Color = glm::vec4(3, 207, 252, 255);
		break;
	case EAutoPartType::Transmission:
		d.Title = "TRANSMISSION";
		d.Image = "Cars/images/car_parts/transmission.png";
		d.Color = glm::vec4(118, 57, 250, 255);
		break;
	case EAutoPartType::Wheels:
		d.Title = "WHEELS";
		d.Image = "Cars/images/car_parts/wheels.png";
		d.Color = glm::vec4(250, 57, 215, 255);
		break;
	}
	d.Color = glm::vec4(0, 88, 221, 255);
	return d;
}

AutoPartSubTypeData Utils::GetAutoPartSubTypeData(EAutoPartSubType autoPartSubType)
{
	AutoPartSubTypeData d;
	d.Type = autoPartSubType;
	switch (autoPartSubType)
	{
	case EAutoPartSubType::BodyPartBumpers:
		d.Title = "BUMPERS";
		d.Image = "Cars/images/car_parts/body_parts/bumpers.png";
		d.Color = glm::vec4(3, 207, 252, 255);
		break;
	case EAutoPartSubType::BodyParDoors:
		d.Title = "DOORS";
		d.Image = "Cars/images/car_parts/body_parts/doors.png";
		d.Color = glm::vec4(147, 250, 57, 255);
		break;
	case EAutoPartSubType::BodyParEmblems:
		d.Title = "EMBLEMS";
		d.Image = "Cars/images/car_parts/body_parts/emblems.png";
		d.Color = glm::vec4(250, 218, 57, 255);
		break;
	case EAutoPartSubType::BodyParFenders:
		d.Title = "FENDERS";
		d.Image = "Cars/images/car_parts/body_parts/fenders.png";
		d.Color = glm::vec4(3, 207, 252, 255);
		break;
	case EAutoPartSubType::BodyParHood:
		d.Title = "HOOD";
		d.Image = "Cars/images/car_parts/body_parts/hood.png";
		d.Color = glm::vec4(118, 57, 250, 255);
		break;
	case EAutoPartSubType::BodyParMirrors:
		d.Title = "MIRRORS";
		d.Image = "Cars/images/car_parts/body_parts/mirrors.png";
		d.Color = glm::vec4(250, 57, 215, 255);
		break;
	case EAutoPartSubType::BodyParWindows:
		d.Title = "WINDOWS";
		d.Image = "Cars/images/car_parts/body_parts/windows.png";
		d.Color = glm::vec4(250, 57, 215, 255);
		break;
	}
	return d;
}

CarModelData Utils::GetCarModelData(EModel model)
{
	CarModelData data;
	switch (model)
	{
	case EModel::Bmw1E81:
		break;
	case EModel::Bmw1E82:
		break;
	case EModel::Bmw1E87:
		break;
	case EModel::Bmw1E88:
		break;
	case EModel::Bmw1F20:
		break;
	case EModel::Bmw1F21:
		break;
	case EModel::Bmw1F40:
		break;
	case EModel::Bmw1F52:
		break;
	case EModel::Bmw2F22:
		break;
	case EModel::Bmw2F23:
		break;
	case EModel::Bmw2F45:
		break;
	case EModel::Bmw2F46:
		break;
	case EModel::Bmw2F44:
		break;
	case EModel::Bmw2G42:
		break;
	case EModel::Bmw3E30:
		break;
	case EModel::Bmw3E36:
		break;
	case EModel::Bmw3E46:
		break;
	case EModel::Bmw3E90:
		break;
	case EModel::Bmw3E92:
		break;
	case EModel::Bmw3F30:
		data.Make = "BMW";
		data.Class = "3 SERIES";
		data.Model = "F30";
		break;
	case EModel::Bmw3G20:
		break;
	case EModel::Bmw4F32:
		break;
	case EModel::Bmw4F33:
		break;
	case EModel::Bmw4F36:
		break;
	case EModel::Bmw4G22:
		break;
	case EModel::Bmw4G23:
		break;
	case EModel::Bmw4G26:
		break;
	case EModel::Bmw5E34:
		break;
	case EModel::Bmw5E39:
		break;
	case EModel::Bmw5E60:
		break;
	case EModel::Bmw5E61:
		break;
	case EModel::Bmw5F10:
		break;
	case EModel::Bmw5F11:
		break;
	case EModel::Bmw5F07:
		break;
	case EModel::Bmw5F18:
		break;
	case EModel::Bmw5G30:
		break;
	case EModel::Bmw5G31:
		break;
	case EModel::Bmw5G38:
		break;
	case EModel::Bmw6E63:
		break;
	case EModel::Bmw6E64:
		break;
	case EModel::Bmw6F06:
		break;
	case EModel::Bmw6F12:
		break;
	case EModel::Bmw6F13:
		break;
	case EModel::Bmw6G32:
		break;
	case EModel::Bmw7E38:
		break;
	case EModel::Bmw7E65:
		break;
	case EModel::Bmw7E66:
		break;
	case EModel::Bmw7E67:
		break;
	case EModel::Bmw7F68:
		break;
	case EModel::Bmw7F01:
		break;
	case EModel::Bmw7F02:
		break;
	case EModel::Bmw7F03:
		break;
	case EModel::Bmw7F04:
		break;
	case EModel::Bmw7G11:
		break;
	case EModel::Bmw7G12:
		break;
	case EModel::BmwX1E84:
		break;
	case EModel::BmwX1F48:
		break;
	case EModel::BmwX3E83:
		break;
	case EModel::BmwX3F25:
		break;
	case EModel::BmwX3G01:
		break;
	case EModel::BmwX4F26:
		break;
	case EModel::BmwX4G02:
		break;
	case EModel::BmwX5E53:
		break;
	case EModel::BmwX5E70:
		break;
	case EModel::BmwX5F15:
		break;
	case EModel::BmwX5G05:
		break;
	case EModel::BmwX6E71:
		break;
	case EModel::BmwX6F16:
		break;
	case EModel::BmwX6G06:
		break;
	case EModel::BmwX7G07:
		break;
	case EModel::BmwZ4E85:
		break;
	case EModel::BmwZ4E86:
		break;
	case EModel::BmwZ4E89:
		break;
	case EModel::BmwZ4G29:
		break;
	case EModel::MercedesBenz190W201:
		break;
	case EModel::MercedesBenzAW168:
		break;
	case EModel::MercedesBenzAW169:
		break;
	case EModel::MercedesBenzAW176:
		break;
	case EModel::MercedesBenzAW177:
		break;
	case EModel::MercedesBenzBW245:
		break;
	case EModel::MercedesBenzBW246:
		break;
	case EModel::MercedesBenzBW247:
		break;
	case EModel::MercedesBencCW202:
		break;
	case EModel::MercedesBencCW203:
		break;
	case EModel::MercedesBencCW204:
		break;
	case EModel::MercedesBencCW205:
		break;
	case EModel::MercedesBencCW206:
		break;
	case EModel::MercedesBencEW124:
		break;
	case EModel::MercedesBencEW210:
		break;
	case EModel::MercedesBencEW211:
		break;
	case EModel::MercedesBencEW212:
		break;
	case EModel::MercedesBencEC207:
		break;
	case EModel::MercedesBencEA207:
		break;
	case EModel::MercedesBencEW213:
		break;
	case EModel::MercedesBencSW140:
		break;
	case EModel::MercedesBencSW220:
		break;
	case EModel::MercedesBencSW221:
		break;
	case EModel::MercedesBencSW222:
		break;
	case EModel::MercedesBencSW223:
		break;
	case EModel::MercedesBencCLC140:
		break;
	case EModel::MercedesBencCLC215:
		break;
	case EModel::MercedesBencCLC216:
		break;
	case EModel::MercedesBencCLAC117:
		break;
	case EModel::MercedesBencCLKC208:
		break;
	case EModel::MercedesBencCLKA208:
		break;
	case EModel::MercedesBencCLKC209:
		break;
	case EModel::MercedesBencCLKA209:
		break;
	case EModel::MercedesBencCLSC219:
		break;
	case EModel::MercedesBencCLSC256:
		break;
	case EModel::MercedesBencMLW163:
		break;
	case EModel::MercedesBencMLW164:
		break;
	case EModel::MercedesBencMLW166:
		break;
	case EModel::MercedesBencMLW167:
		break;
	case EModel::MercedesBencGW463:
		break;
	case EModel::MercedesBencGLX164:
		break;
	case EModel::MercedesBencGLX166:
		break;
	case EModel::MercedesBencGLAX156:
		break;
	case EModel::MercedesBencGLAH247:
		break;
	case EModel::MercedesBencGLCX253:
		break;
	case EModel::MercedesBencGLCC253:
		break;
	case EModel::MercedesBencGLEV167:
		break;
	case EModel::MercedesBencGLKX204:
		break;
	case EModel::MercedesBencGLSX167:
		break;
	case EModel::MercedesBencRW251:
		break;
	case EModel::MercedesBencSLR230:
		break;
	case EModel::MercedesBencSLR231:
		break;
	case EModel::MercedesBencSLKR170:
		break;
	case EModel::MercedesBencSLKR171:
		break;
	case EModel::MercedesBencSLKR172:
		break;
	case EModel::MercedesBencVW638:
		break;
	case EModel::MercedesBencVW639:
		break;
	case EModel::MercedesBencVW447:
		break;
	case EModel::MercedesBencSprinterW901:
		break;
	case EModel::MercedesBencSprinterW905:
		break;
	case EModel::MercedesBencSprinternNCV3:
		break;
	case EModel::MercedesBencVaneoW414:
		break;
	case EModel::MercedesBencViano:
		break;
	case EModel::MercedesBencVito:
		break;
	case EModel::AudiA38L:
		break;
	case EModel::AudiA38P:
		break;
	case EModel::AudiA38V:
		break;
	case EModel::AudiA38Y:
		break;
	case EModel::AudiA4B5:
		break;
	case EModel::AudiA4B6:
		break;
	case EModel::AudiA4B7:
		break;
	case EModel::AudiA4B8:
		break;
	case EModel::AudiA4B9:
		break;
	case EModel::AudiA58T:
		break;
	case EModel::AudiA5F5:
		break;
	case EModel::AudiA6C5:
		break;
	case EModel::AudiA6C6:
		break;
	case EModel::AudiA6C7:
		break;
	case EModel::AudiA6C8:
		break;
	case EModel::AudiA7G4:
		break;
	case EModel::AudiA74K:
		break;
	case EModel::AudiA8D2:
		break;
	case EModel::AudiA8D3:
		break;
	case EModel::AudiA8D4:
		break;
	case EModel::AudiA8D5:
		break;
	case EModel::AudiQ58R:
		break;
	case EModel::AudiQ5FY:
		break;
	case EModel::AudiQ74L:
		break;
	case EModel::AudiQ74M:
		break;
	case EModel::AudiTT8N:
		break;
	case EModel::AudiTT8J:
		break;
	case EModel::AudiTT8S:
		break;
	case EModel::PorscheCayenne1:
		break;
	case EModel::PorscheCayenne2:
		break;
	case EModel::PorscheCayenne3:
		break;
	case EModel::PorscheMacan1:
		break;
	case EModel::PorschePanamera1:
		break;
	case EModel::PorschePanamera2:
		break;
	case EModel::LexusCT1:
		break;
	case EModel::LexusIS1:
		break;
	case EModel::LexusIS2:
		break;
	case EModel::LexusIS3:
		break;
	case EModel::LexusES4:
		break;
	case EModel::LexusES5:
		break;
	case EModel::LexusES6:
		break;
	case EModel::LexusES7:
		break;
	case EModel::LexusGS2:
		break;
	case EModel::LexusGS3:
		break;
	case EModel::LexusGS4:
		break;
	case EModel::LexusLS4:
		break;
	case EModel::LexusLS5:
		break;
	case EModel::LexusNX1:
		break;
	case EModel::LexusNX2:
		break;
	case EModel::LexusRX1:
		break;
	case EModel::LexusRX2:
		break;
	case EModel::LexusRX3:
		break;
	case EModel::LexusRX4:
		break;
	case EModel::LexusGX1:
		break;
	case EModel::LexusGX2:
		break;
	case EModel::LexusLX2:
		break;
	case EModel::LexusLX3:
		break;
	case EModel::InfinitiEX1J50:
		break;
	case EModel::InfinitiFX1S50:
		break;
	case EModel::InfinitiFX2S51:
		break;
	case EModel::InfinitiJX1:
		break;
	case EModel::InfinitiG3:
		break;
	case EModel::InfinitiG4:
		break;
	case EModel::InfinitiM3:
		break;
	case EModel::InfinitiM4:
		break;
	case EModel::InfinitiQ3:
		break;
	case EModel::InfinitiQX4:
		break;
	case EModel::InfinitiQX501:
		break;
	case EModel::InfinitiQX502:
		break;
	case EModel::InfinitiQX561:
		break;
	case EModel::InfinitiQX562:
		break;
	case EModel::InfinitiQX601:
		break;
	case EModel::InfinitiQX70:
		break;
	case EModel::InfinitiQX801:
		break;
	case EModel::InfinitiQX802:
		break;
	case EModel::ToyotaAplphard1:
		break;
	case EModel::ToyotaAplphard2:
		break;
	case EModel::ToyotaAplphard3:
		break;
	case EModel::ToyotaAltezza:
		break;
	case EModel::ToyotaAvalon3:
		break;
	case EModel::ToyotaAvalon4:
		break;
	case EModel::ToyotaAvalon5:
		break;
	case EModel::ToyotaAvensis2:
		break;
	case EModel::ToyotaAvensis3:
		break;
	case EModel::ToyotaBelta:
		break;
	case EModel::ToyotaBlade1E150:
		break;
	case EModel::ToyotaCHR1:
		break;
	case EModel::ToyotaCamryXV40:
		break;
	case EModel::ToyotaCamryXV50:
		break;
	case EModel::ToyotaCamryXV70:
		break;
	case EModel::ToyotaCorollaE140:
		break;
	case EModel::ToyotaCorollaE160:
		break;
	case EModel::ToyotaCorollaE210:
		break;
	case EModel::ToyotaEstima2:
		break;
	case EModel::ToyotaEstima3:
		break;
	case EModel::ToyotaFJCruiser:
		break;
	case EModel::ToyotaFortuner1:
		break;
	case EModel::ToyotaFortuner2:
		break;
	case EModel::ToyotaHarrierXU10:
		break;
	case EModel::ToyotaHarrierXU30:
		break;
	case EModel::ToyotaHarrierXU60:
		break;
	case EModel::ToyotaHighlanderU20:
		break;
	case EModel::ToyotaHighlanderU40:
		break;
	case EModel::ToyotaHighlanderU50:
		break;
	case EModel::ToyotaHighlanderU70:
		break;
	case EModel::ToyotaHilux6:
		break;
	case EModel::ToyotaHilux7:
		break;
	case EModel::ToyotaHilux8:
		break;
	case EModel::ToyotaIpsumM10:
		break;
	case EModel::ToyotaIpsumM20:
		break;
	case EModel::ToyotaIst1:
		break;
	case EModel::ToyotaIst2:
		break;
	case EModel::ToyotaLandCruiser100:
		break;
	case EModel::ToyotaLandCruiser200:
		break;
	case EModel::ToyotaLandCruiser300:
		break;
	case EModel::ToyotaLandCruiserPrado120:
		break;
	case EModel::ToyotaLandCruiserPrado150:
		break;
	case EModel::ToyotaNoahR60:
		break;
	case EModel::ToyotaNoahR70:
		break;
	case EModel::ToyotaNoahR80:
		break;
	case EModel::ToyotaPasso1:
		break;
	case EModel::ToyotaPasso2:
		break;
	case EModel::ToyotaPasso3:
		break;
	case EModel::ToyotaPriusXW10:
		break;
	case EModel::ToyotaPriusXW20:
		break;
	case EModel::ToyotaPriusXW30:
		break;
	case EModel::ToyotaPriusXW50:
		break;
	case EModel::ToyotaRAV4XA10:
		break;
	case EModel::ToyotaRAV4XA20:
		break;
	case EModel::ToyotaRAV4XA30:
		break;
	case EModel::ToyotaRAV4CA40:
		break;
	case EModel::ToyotaRAV4XA50:
		break;
	case EModel::ToyotaSequoia1:
		break;
	case EModel::ToyotaSequoia2:
		break;
	case EModel::ToyotaSienna1:
		break;
	case EModel::ToyotaSienna2:
		break;
	case EModel::ToyotaSienna3:
		break;
	case EModel::ToyotaSienna4:
		break;
	case EModel::ToyotaTacoma1:
		break;
	case EModel::ToyotaTacoma2:
		break;
	case EModel::ToyotaTacoma3:
		break;
	case EModel::ToyotaTundra1:
		break;
	case EModel::ToyotaTundra2:
		break;
	case EModel::ToyotaVellfire1:
		break;
	case EModel::ToyotaVellfire2:
		break;
	case EModel::ToyotaVitzP10:
		break;
	case EModel::ToyotaVitzXP90:
		break;
	case EModel::ToyotaVitzXP130:
		break;
	case EModel::ToyotaVoxyR60:
		break;
	case EModel::ToyotaVoxyR70:
		break;
	case EModel::ToyotaVoxyR80:
		break;
	case EModel::ToyotaYaris:
		break;
	case EModel::NissanAlmeraN16:
		break;
	case EModel::NissanAlmeraG15:
		break;
	case EModel::NissanAltimaL32:
		break;
	case EModel::NissanAltimaL33:
		break;
	case EModel::NissanAltimaL34:
		break;
	case EModel::NissanArmada1:
		break;
	case EModel::NissanArmada2:
		break;
	case EModel::NissanBluebird:
		break;
	case EModel::NissanCubeZ10:
		break;
	case EModel::NissanCubeZ11:
		break;
	case EModel::NissanCubeZ12:
		break;
	case EModel::NissanElgrandE50:
		break;
	case EModel::NissanElgrandE51:
		break;
	case EModel::NissanElgrandE52:
		break;
	case EModel::NissanFrontier:
		break;
	case EModel::NissanFuga1:
		break;
	case EModel::NissanFuga2:
		break;
	case EModel::NissanJuke1:
		break;
	case EModel::NissanJuke2:
		break;
	case EModel::NissanKicks1:
		break;
	case EModel::NissanLatioN71:
		break;
	case EModel::NissanLeafZE0:
		break;
	case EModel::NissanLeafZE1:
		break;
	case EModel::NissanMarchK12:
		break;
	case EModel::NissanMarchK13:
		break;
	case EModel::NissanMaximaA34:
		break;
	case EModel::NissanMaximaA35:
		break;
	case EModel::NissanMaximaA36:
		break;
	case EModel::NissanMicra3:
		break;
	case EModel::NissanMicra4:
		break;
	case EModel::NissanMicra5:
		break;
	case EModel::NissanMuranoZ50:
		break;
	case EModel::NissanMuranoZ51:
		break;
	case EModel::NissanMuranoZ52:
		break;
	case EModel::NissanNote1:
		break;
	case EModel::NissanNote2:
		break;
	case EModel::NissanPathfinder3:
		break;
	case EModel::NissanPathfinder4:
		break;
	case EModel::NissanPathfinder5:
		break;
	case EModel::NissanPatrolY61:
		break;
	case EModel::NissanPatrolY62:
		break;
	case EModel::NissanPresage1:
		break;
	case EModel::NissanPresage2:
		break;
	case EModel::NissanQashqai1:
		break;
	case EModel::NissanQashqai2:
		break;
	case EModel::NissanQashqai3:
		break;
	case EModel::NissanQuest3:
		break;
	case EModel::NissanQuest4:
		break;
	case EModel::NissanRogue1:
		break;
	case EModel::NissanRogue2:
		break;
	case EModel::NissanRogue3:
		break;
	case EModel::NissanSentraB16:
		break;
	case EModel::NissanSentraB17:
		break;
	case EModel::NissanSentraB18:
		break;
	case EModel::NissanSerenaC24:
		break;
	case EModel::NissanSerenaC25:
		break;
	case EModel::NissanSerenaC26:
		break;
	case EModel::NissanSerenaC27:
		break;
	case EModel::NissanSkylineR34:
		break;
	case EModel::NissanSkylineV35:
		break;
	case EModel::NissanSkylineV36:
		break;
	case EModel::NissanSkylineV37:
		break;
	case EModel::NissanSunnyN16:
		break;
	case EModel::NissanSunnyB10:
		break;
	case EModel::NissanTeana1:
		break;
	case EModel::NissanTeana2:
		break;
	case EModel::NissanTeana3:
		break;
	case EModel::NissanTerrano2:
		break;
	case EModel::NissanTerrano3:
		break;
	case EModel::NissanTiida1:
		break;
	case EModel::NissanTiida2:
		break;
	case EModel::NissanVersa1:
		break;
	case EModel::NissanVersa2:
		break;
	case EModel::NissanVersa3:
		break;
	case EModel::NissanXTrail1:
		break;
	case EModel::NissanXTrail2:
		break;
	case EModel::NissanXTrail3:
		break;
	case EModel::NissanXTerra1:
		break;
	case EModel::NissanXTerra2:
		break;
	case EModel::Nissan350Z:
		break;
	case EModel::FordEdge1:
		break;
	case EModel::FordEdge2:
		break;
	case EModel::FordEscape1:
		break;
	case EModel::FordEscape2:
		break;
	case EModel::FordEscape3:
		break;
	case EModel::FordEscape4:
		break;
	case EModel::FordExplorer1:
		break;
	case EModel::FordExplorer2:
		break;
	case EModel::FordExplorer3:
		break;
	case EModel::FordExplorer4:
		break;
	case EModel::FordExplorer5:
		break;
	case EModel::FordExplorer6:
		break;
	case EModel::FordF15010:
		break;
	case EModel::FordF15011:
		break;
	case EModel::FordF15012:
		break;
	case EModel::FordF15013:
		break;
	case EModel::FordFiestaMK6:
		break;
	case EModel::FordFiestaMK7:
		break;
	case EModel::FordFocus1:
		break;
	case EModel::FordFocus2:
		break;
	case EModel::FordFocus3:
		break;
	case EModel::FordFocus4:
		break;
	case EModel::FordFusion2:
		break;
	case EModel::FordTaurus6:
		break;
	case EModel::FordTransit:
		break;
	case EModel::FordMustang4:
		data.Make = "FORD";
		data.Model = "MUSTANG 4";
		data.Image = "Cars/images/ford/mustang/ford_mustang4.png";
		break;
	case EModel::FordMustang5:
		data.Make = "FORD";
		data.Model = "MUSTANG 5";
		data.Image = "Cars/images/ford/mustang/ford_mustang5.png";
		break;
	case EModel::FordMustang6:
		data.Make = "FORD";
		data.Model = "MUSTANG 6";
		data.Image = "Cars/images/ford/mustang/ford_mustang6.png";
		break;
	case EModel::ChevroletAvalanche1:
		break;
	case EModel::ChevroletAvalanche2:
		break;
	case EModel::ChevroletAveo1:
		break;
	case EModel::ChevroletAveo2:
		break;
	case EModel::ChevroletAveo3:
		break;
	case EModel::ChevroletCaptiva1:
		break;
	case EModel::ChevroletCruze1:
		break;
	case EModel::ChevroletCruze2:
		break;
	case EModel::ChevroletEpicaV250:
		break;
	case EModel::ChevroletEquinox1:
		break;
	case EModel::ChevroletEquinox2:
		break;
	case EModel::ChevroletEquinox3:
		break;
	case EModel::ChevroletMalibu7:
		break;
	case EModel::ChevroletMalibu8:
		break;
	case EModel::ChevroletMalibu9:
		break;
	case EModel::ChevroletNiva:
		break;
	case EModel::ChevroletTahoe2:
		break;
	case EModel::ChevroletTahoe3:
		break;
	case EModel::ChevroletTahoe4:
		break;
	case EModel::ChevroletTahoe5:
		break;
	case EModel::ChevroletTrailBlazer1:
		break;
	case EModel::ChevroletTrailBlazer2:
		break;
	case EModel::ChevroletTrailBlazer3:
		break;
	case EModel::ChevroletVolt1:
		break;
	case EModel::ChevroletVolt2:
		break;
	case EModel::ChevroletCamaro5:
		data.Make = "CHEVROLET";
		data.Model = "CAMARO 5";
		data.Image = "Cars/images/chevrolet/camaro/camaro5.png";
		break;
	case EModel::ChevroletCamaro6:
		data.Make = "CHEVROLET";
		data.Model = "CAMARO 6";
		data.Image = "Cars/images/chevrolet/camaro/camaro6.png";
		break;
	case EModel::ChevroletCorvette:
		break;
	case EModel::VolkswagenBeetleA4:
		break;
	case EModel::VolkswagenBeetleA5:
		break;
	case EModel::VolkswagenBora1998:
		break;
	case EModel::VolkswagenBora4:
		break;
	case EModel::VolkswagenCaddy2:
		break;
	case EModel::VolkswagenCaddy3:
		break;
	case EModel::VolkswagenCaddy4:
		break;
	case EModel::VolkswagenCaddy5:
		break;
	case EModel::VolkswagenCrafter:
		break;
	case EModel::VolkswagenGolf2:
		break;
	case EModel::VolkswagenGolf3:
		break;
	case EModel::VolkswagenGolf4:
		break;
	case EModel::VolkswagenGolf5:
		break;
	case EModel::VolkswagenGolf6:
		break;
	case EModel::VolkswagenGolf7:
		break;
	case EModel::VolkswagenGolf8:
		break;
	case EModel::VolkswagenJetta3:
		break;
	case EModel::VolkswagenJetta4:
		break;
	case EModel::VolkswagenJetta5:
		break;
	case EModel::VolkswagenJetta6:
		break;
	case EModel::VolkswagenJetta7:
		break;
	case EModel::VolkswagenPassatB5:
		break;
	case EModel::VolkswagenPassatB6:
		break;
	case EModel::VolkswagenPassatB7:
		break;
	case EModel::VolkswagenPassatB8:
		break;
	case EModel::VolkswagenPassatCC1:
		break;
	case EModel::VolkswagenPolo3:
		break;
	case EModel::VolkswagenPolo4:
		break;
	case EModel::VolkswagenPolo5:
		break;
	case EModel::VolkswagenPolo6:
		break;
	case EModel::VolkswagenRoutan:
		break;
	case EModel::VolkswagenTiguan1:
		break;
	case EModel::VolkswagenTiguan2:
		break;
	case EModel::VolkswagenTouareg1:
		break;
	case EModel::VolkswagenTouareg2:
		break;
	case EModel::VolkswagenTouareg3:
		break;
	case EModel::VolkswagenTouran1:
		break;
	case EModel::VolkswagenTouran2:
		break;
	case EModel::VolkswagenTouran3:
		break;
	case EModel::VolkswagenTransporterT4:
		break;
	case EModel::VolkswagenTransporterT5:
		break;
	case EModel::VolkswagenTransporterT6:
		break;
	case EModel::VolkswagenVento:
		break;
	case EModel::OpelAstraF:
		break;
	case EModel::OpelAstraG:
		break;
	case EModel::OpelAstraH:
		break;
	case EModel::OpelAstraJ:
		break;
	case EModel::OpelAstraK:
		break;
	case EModel::OpelComboC:
		break;
	case EModel::OpelComboD:
		break;
	case EModel::OpelComboE:
		break;
	case EModel::OpelComboPCMA:
		break;
	case EModel::OpelCorsaA:
		break;
	case EModel::OpelCorsaB:
		break;
	case EModel::OpelCorsaC:
		break;
	case EModel::OpelCorsaD:
		break;
	case EModel::OpelCorsaE:
		break;
	case EModel::OpelCorsaF:
		break;
	case EModel::OpelFronteraA:
		break;
	case EModel::OpelFronteraB:
		break;
	case EModel::OpelInsignia1:
		break;
	case EModel::OpelInsignia2:
		break;
	case EModel::OpelMerivaA:
		break;
	case EModel::OpelMerivaB:
		break;
	case EModel::OpelOmegaA:
		break;
	case EModel::OpelOmegaB:
		break;
	case EModel::OpelSignum:
		break;
	case EModel::OpelSintra:
		break;
	case EModel::OpelVectraA:
		break;
	case EModel::OpelVectraB:
		break;
	case EModel::OpelVectraC:
		break;
	case EModel::OpelZafiraA:
		break;
	case EModel::OpelZafiraB:
		break;
	case EModel::OpelZafiraC:
		break;
	case EModel::MitsubishiAirtrek:
		break;
	case EModel::MitsubishiChariot2:
		break;
	case EModel::MitsubishiChariot3:
		break;
	case EModel::MitsubishiColtZ30:
		break;
	case EModel::MitsubishiGalant8:
		break;
	case EModel::MitsubishiGalant9:
		break;
	case EModel::MitsubishiGrandis:
		break;
	case EModel::MitsubishiLancer9:
		break;
	case EModel::MitsubishiLancer10:
		break;
	case EModel::MitsubishiMontero3:
		break;
	case EModel::MitsubishiMontero4:
		break;
	case EModel::MitsubishiOutlander1:
		break;
	case EModel::MitsubishiOutlander2:
		break;
	case EModel::MitsubishiOutlander3:
		break;
	case EModel::MitsubishiPajero2:
		break;
	case EModel::MitsubishiPajero3:
		break;
	case EModel::MitsubishiPajero4:
		break;
	case EModel::KIACadenza1:
		break;
	case EModel::KIACadenza2:
		break;
	case EModel::KIACerato1:
		break;
	case EModel::KIACerato2:
		break;
	case EModel::KIACerato3:
		break;
	case EModel::KIAForte1:
		break;
	case EModel::KIAForte2:
		break;
	case EModel::KIAForte3:
		break;
	case EModel::KIAK51:
		break;
	case EModel::KIAK52:
		break;
	case EModel::KIAK53:
		break;
	case EModel::KIAOptima2:
		break;
	case EModel::KIAOptima3:
		break;
	case EModel::KIAOptima4:
		break;
	case EModel::KIARio2:
		break;
	case EModel::KIARio3:
		break;
	case EModel::KIARio4:
		break;
	case EModel::KIASedona1:
		break;
	case EModel::KIASedona2:
		break;
	case EModel::KIASedona3:
		break;
	case EModel::KIASorento1:
		break;
	case EModel::KIASorento2:
		break;
	case EModel::KIASorento3:
		break;
	case EModel::KIASorento4:
		break;
	case EModel::KIASportage2:
		break;
	case EModel::KIASportage3:
		break;
	case EModel::KIASportage4:
		break;
	case EModel::HyundaiAccent2:
		break;
	case EModel::HyundaiAccent3:
		break;
	case EModel::HyundaiAccent4:
		break;
	case EModel::HyundaiAccent5:
		break;
	case EModel::HyundaiCreta1:
		break;
	case EModel::HyundaiCreta2:
		break;
	case EModel::HyundaiElantra4:
		break;
	case EModel::HyundaiElantra5:
		break;
	case EModel::HyundaiElantra6:
		break;
	case EModel::HyundaiElantra7:
		break;
	case EModel::HyundaiGenesis1:
		break;
	case EModel::HyundaiGenesis2:
		break;
	case EModel::HyundaiGenesisCoupe1:
		break;
	case EModel::HyundaiIX351:
		break;
	case EModel::HyundaiKona1:
		break;
	case EModel::HyundaiSantaFe1:
		break;
	case EModel::HyundaiSantaFe2:
		break;
	case EModel::HyundaiSantaFe3:
		break;
	case EModel::HyundaiSantaFe4:
		break;
	case EModel::HyundaiSolaris1:
		break;
	case EModel::HyundaiSolaris2:
		break;
	case EModel::HyundaiSonata5:
		break;
	case EModel::HyundaiSonata6:
		break;
	case EModel::HyundaiSonata7:
		break;
	case EModel::HyundaiSonata8:
		break;
	case EModel::HyundaiTucson1:
		break;
	case EModel::HyundaiTucson2:
		break;
	case EModel::HyundaiTucson3:
		break;
	case EModel::HyundaiTucson4:
		break;
	case EModel::HyundaiVeloster1:
		break;
	case EModel::HyundaiVeloster2:
		break;
	case EModel::HondaAccord7:
		break;
	case EModel::HondaAccord8:
		break;
	case EModel::HondaAccord9:
		break;
	case EModel::HondaAccord10:
		break;
	case EModel::HondaCivic7:
		break;
	case EModel::HondaCivic8:
		break;
	case EModel::HondaCivic9:
		break;
	case EModel::HondaCivic10:
		break;
	case EModel::HondaCivic11:
		break;
	case EModel::HondaCRV1:
		break;
	case EModel::HondaCRV2:
		break;
	case EModel::HondaCRV3:
		break;
	case EModel::HondaCRV4:
		break;
	case EModel::HondaCRV5:
		break;
	case EModel::HondaCrosstour1:
		break;
	case EModel::HondaElysion1:
		break;
	case EModel::HondaFit1:
		break;
	case EModel::HondaFit2:
		break;
	case EModel::HondaFit3:
		break;
	case EModel::HondaHRV1:
		break;
	case EModel::HondaHRV2:
		break;
	case EModel::HondaOdyssey3:
		break;
	case EModel::HondaOdyssey4:
		break;
	case EModel::HondaOdyssey5:
		break;
	case EModel::HondaOdyssey6:
		break;
	case EModel::HondaPilot1:
		break;
	case EModel::HondaPilot2:
		break;
	case EModel::HondaPilot3:
		break;
	case EModel::HondaRidgeline1:
		break;
	case EModel::HondaRidgeline2:
		break;
	case EModel::HondaStepwgn2:
		break;
	case EModel::HondaStepwgn3:
		break;
	case EModel::HondaStepwgn4:
		break;
	case EModel::HondaStepwgn5:
		break;
	case EModel::MazdaAtenza1:
		break;
	case EModel::MazdaAtenza2:
		break;
	case EModel::MazdaAtenza3:
		break;
	case EModel::MazdaCX31:
		break;
	case EModel::MazdaCX51:
		break;
	case EModel::MazdaCX52:
		break;
	case EModel::MazdaCX71:
		break;
	case EModel::MazdaCX91:
		break;
	case EModel::MazdaCX92:
		break;
	case EModel::MazdaDemio1:
		break;
	case EModel::MazdaDemio2:
		break;
	case EModel::MazdaDemio3:
		break;
	case EModel::MazdaDemio4:
		break;
	case EModel::MazdaMPV2:
		break;
	case EModel::MazdaMPV3:
		break;
	case EModel::MazdaRX8:
		break;
	case EModel::MazdaTribute1:
		break;
	case EModel::MazdaTribute2:
		break;
	case EModel::Mazda32:
		break;
	case EModel::Mazda33:
		break;
	case EModel::Mazda34:
		break;
	case EModel::Mazda51:
		break;
	case EModel::Mazda52:
		break;
	case EModel::Mazda61:
		break;
	case EModel::Mazda62:
		break;
	case EModel::Mazda63:
		break;
	default:
		break;
	}

	return data;
}



void Utils::_GetBmw1Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("1 SERIES E81");
	names.push_back("1 SERIES E82");
	names.push_back("1 SERIES E87");
	names.push_back("1 SERIES E88");
	names.push_back("1 SERIES F20");
	names.push_back("1 SERIES F21");
	names.push_back("1 SERIES F40");
	names.push_back("1 SERIES F52");

	models.push_back(EModel::Bmw1E81);
	models.push_back(EModel::Bmw1E82);
	models.push_back(EModel::Bmw1E87);
	models.push_back(EModel::Bmw1E88);
	models.push_back(EModel::Bmw1F20);
	models.push_back(EModel::Bmw1F21);
	models.push_back(EModel::Bmw1F40);
	models.push_back(EModel::Bmw1F52);
}

void Utils::_GetBmw2Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("2 SERIES F22");
	names.push_back("2 SERIES F23");
	names.push_back("2 SERIES F45");
	names.push_back("2 SERIES F46");
	names.push_back("2 SERIES F44");
	names.push_back("2 SERIES G42");

	models.push_back(EModel::Bmw2F22);
	models.push_back(EModel::Bmw2F23);
	models.push_back(EModel::Bmw2F45);
	models.push_back(EModel::Bmw2F46);
	models.push_back(EModel::Bmw2F44);
	models.push_back(EModel::Bmw2G42);
}



void Utils::_GetBmw3Models(std::vector<std::string>& names, std::vector<EModel>& models, std::vector<std::string>& images)
{
	names.push_back("3 SERIES E30");
	names.push_back("3 SERIES E36");
	names.push_back("3 SERIES E46");
	names.push_back("3 SERIES E90");
	names.push_back("3 SERIES E92");
	names.push_back("3 SERIES F30");
	names.push_back("3 SERIES G20");

	models.push_back(EModel::Bmw3E30);
	models.push_back(EModel::Bmw3E36);
	models.push_back(EModel::Bmw3E46);
	models.push_back(EModel::Bmw3E90);
	models.push_back(EModel::Bmw3E92);
	models.push_back(EModel::Bmw3F30);
	models.push_back(EModel::Bmw3G20);

	images.push_back("Cars/images/bmw/bmw3/e30.png");
	images.push_back("Cars/images/bmw/bmw3/e36.png");
	images.push_back("Cars/images/bmw/bmw3/e46.png");
	images.push_back("Cars/images/bmw/bmw3/e90.png");
	images.push_back("Cars/images/bmw/bmw3/e92.png");
	images.push_back("Cars/images/bmw/bmw3/f30.png");
	images.push_back("Cars/images/bmw/bmw3/g20.png");
}


void Utils::_GetBmw4Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("4 SERIES F32");
	names.push_back("4 SERIES F33");
	names.push_back("4 SERIES F36");
	names.push_back("4 SERIES G22");
	names.push_back("4 SERIES G23");
	names.push_back("4 SERIES G26");

	models.push_back(EModel::Bmw4F32);
	models.push_back(EModel::Bmw4F33);
	models.push_back(EModel::Bmw4F36);
	models.push_back(EModel::Bmw4G22);
	models.push_back(EModel::Bmw4G23);
	models.push_back(EModel::Bmw4G26);
}

void Utils::_GetBmw5Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("5 SERIES E34");
	names.push_back("5 SERIES E39");
	names.push_back("5 SERIES E60");
	names.push_back("5 SERIES E61");
	names.push_back("5 SERIES F10");
	names.push_back("5 SERIES F11");
	names.push_back("5 SERIES F07");
	names.push_back("5 SERIES F18");
	names.push_back("5 SERIES G30");
	names.push_back("5 SERIES G30");
	names.push_back("5 SERIES G38");

	models.push_back(EModel::Bmw5E34);
	models.push_back(EModel::Bmw5E39);
	models.push_back(EModel::Bmw5E60);
	models.push_back(EModel::Bmw5E61);
	models.push_back(EModel::Bmw5F10);
	models.push_back(EModel::Bmw5F11);
	models.push_back(EModel::Bmw5F07);
	models.push_back(EModel::Bmw5F18);
	models.push_back(EModel::Bmw5G30);
	models.push_back(EModel::Bmw5G31);
	models.push_back(EModel::Bmw5G38);
}

void Utils::_GetBmw6Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("6 SERIES E63");
	names.push_back("6 SERIES E64");
	names.push_back("6 SERIES F06");
	names.push_back("6 SERIES F12");
	names.push_back("6 SERIES F13");
	names.push_back("6 SERIES G32");

	models.push_back(EModel::Bmw6E63);
	models.push_back(EModel::Bmw6E64);
	models.push_back(EModel::Bmw6F06);
	models.push_back(EModel::Bmw6F12);
	models.push_back(EModel::Bmw6F13);
	models.push_back(EModel::Bmw6G32);
}

void Utils::_GetBmw7Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("7 SERIES F38");
	names.push_back("7 SERIES E65");
	names.push_back("7 SERIES E66");
	names.push_back("7 SERIES E67");
	names.push_back("7 SERIES E68");
	names.push_back("7 SERIES F01");
	names.push_back("7 SERIES F02");
	names.push_back("7 SERIES F03");
	names.push_back("7 SERIES G04");
	names.push_back("7 SERIES G11");
	names.push_back("7 SERIES G12");

	models.push_back(EModel::Bmw7E38);
	models.push_back(EModel::Bmw7E65);
	models.push_back(EModel::Bmw7E66);
	models.push_back(EModel::Bmw7E67);
	models.push_back(EModel::Bmw7F68);
	models.push_back(EModel::Bmw7F01);
	models.push_back(EModel::Bmw7F02);
	models.push_back(EModel::Bmw7F03);
	models.push_back(EModel::Bmw7F04);
	models.push_back(EModel::Bmw7G11);
	models.push_back(EModel::Bmw7G12);
}

void Utils::_GetBmwX1Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("X1 SERIES E84");
	names.push_back("X1 SERIES F48");

	models.push_back(EModel::BmwX1E84);
	models.push_back(EModel::BmwX1F48);
}

void Utils::_GetBmwX3Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("X3 SERIES E83");
	names.push_back("X3 SERIES F25");
	names.push_back("X3 SERIES G01");

	models.push_back(EModel::BmwX3E83);
	models.push_back(EModel::BmwX3F25);
	models.push_back(EModel::BmwX3G01);
}

void Utils::_GetBmwX4Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("X4 SERIES F26");
	names.push_back("X4 SERIES G02");

	models.push_back(EModel::BmwX4F26);
	models.push_back(EModel::BmwX4G02);
}

void Utils::_GetBmwX5Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("X5 SERIES E53");
	names.push_back("X5 SERIES E70");
	names.push_back("X5 SERIES F15");
	names.push_back("X5 SERIES G05");

	models.push_back(EModel::BmwX5E53);
	models.push_back(EModel::BmwX5E70);
	models.push_back(EModel::BmwX5F15);
	models.push_back(EModel::BmwX5G05);
}

void Utils::_GetBmwX6Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("X6 SERIES E71");
	names.push_back("X6 SERIES E72");
	names.push_back("X6 SERIES F16");
	names.push_back("X6 SERIES G06");

	models.push_back(EModel::BmwX6E71);
	models.push_back(EModel::BmwX6F16);
	models.push_back(EModel::BmwX6G06);
}

void Utils::_GetBmwX7Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("X7 SERIES G07");

	models.push_back(EModel::BmwX7G07);
}

void Utils::_GetBmwZ4Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("Z4 SERIES E85");
	names.push_back("Z4 SERIES E86");
	names.push_back("Z4 SERIES E89");
	names.push_back("Z4 SERIES G29");

	models.push_back(EModel::BmwZ4E85);
	models.push_back(EModel::BmwZ4E86);
	models.push_back(EModel::BmwZ4E89);
	models.push_back(EModel::BmwZ4G29);
}

void Utils::_GetMB190ClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("190 W201");

	models.push_back(EModel::MercedesBenz190W201);
}

void Utils::_GetMBAClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("A CLASS W168");
	names.push_back("A CLASS W169");
	names.push_back("A CLASS W176");
	names.push_back("A CLASS W177");

	models.push_back(EModel::MercedesBenzAW168);
	models.push_back(EModel::MercedesBenzAW169);
	models.push_back(EModel::MercedesBenzAW176);
	models.push_back(EModel::MercedesBenzAW177);
}

void Utils::_GetMBBClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("B CLASS W245");
	names.push_back("B CLASS W246");
	names.push_back("B CLASS W247");

	models.push_back(EModel::MercedesBenzBW245);
	models.push_back(EModel::MercedesBenzBW246);
	models.push_back(EModel::MercedesBenzBW247);
}

void Utils::_GetMBCClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("C CLASS W202");
	names.push_back("C CLASS W203");
	names.push_back("C CLASS W204");
	names.push_back("C CLASS W205");
	names.push_back("C CLASS W206");

	models.push_back(EModel::MercedesBencCW202);
	models.push_back(EModel::MercedesBencCW203);
	models.push_back(EModel::MercedesBencCW204);
	models.push_back(EModel::MercedesBencCW205);
	models.push_back(EModel::MercedesBencCW206);
}

void Utils::_GetMBEClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("E CLASS W124");
	names.push_back("E CLASS W210");
	names.push_back("E CLASS W211");
	names.push_back("E CLASS W212");
	names.push_back("E CLASS C207");
	names.push_back("E CLASS A207");
	names.push_back("E CLASS W213");

	models.push_back(EModel::MercedesBencEW124);
	models.push_back(EModel::MercedesBencEW210);
	models.push_back(EModel::MercedesBencEW211);
	models.push_back(EModel::MercedesBencEW212);
	models.push_back(EModel::MercedesBencEC207);
	models.push_back(EModel::MercedesBencEA207);
	models.push_back(EModel::MercedesBencEW213);
}

void Utils::_GetMBSClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("S CLASS W140");
	names.push_back("S CLASS W220");
	names.push_back("S CLASS W221");
	names.push_back("S CLASS W222");
	names.push_back("S CLASS W223");

	models.push_back(EModel::MercedesBencSW140);
	models.push_back(EModel::MercedesBencSW220);
	models.push_back(EModel::MercedesBencSW221);
	models.push_back(EModel::MercedesBencSW222);
	models.push_back(EModel::MercedesBencSW223);
}

void Utils::_GetMBCLClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CL CLASS C140");
	names.push_back("CL CLASS C215");
	names.push_back("CL CLASS C216");

	models.push_back(EModel::MercedesBencCLC140);
	models.push_back(EModel::MercedesBencCLC215);
	models.push_back(EModel::MercedesBencCLC216);
}

void Utils::_GetMBCLAClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CLA CLASS C117");

	models.push_back(EModel::MercedesBencCLAC117);
}

void Utils::_GetMBCLKClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CLK CLASS C208");
	names.push_back("CLK CLASS A208");
	names.push_back("CLK CLASS C209");
	names.push_back("CLK CLASS A209");

	models.push_back(EModel::MercedesBencCLKC208);
	models.push_back(EModel::MercedesBencCLKA208);
	models.push_back(EModel::MercedesBencCLKC209);
	models.push_back(EModel::MercedesBencCLKA209);
}

void Utils::_GetMBCLSClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CLS CLASS C219");
	names.push_back("CLS CLASS C256");

	models.push_back(EModel::MercedesBencCLSC219);
	models.push_back(EModel::MercedesBencCLSC256);
}

void Utils::_GetMBMLClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ML CLASS W163");
	names.push_back("ML CLASS W164");
	names.push_back("ML CLASS W166");
	names.push_back("ML CLASS W167");

	models.push_back(EModel::MercedesBencMLW163);
	models.push_back(EModel::MercedesBencMLW164);
	models.push_back(EModel::MercedesBencMLW166);
	models.push_back(EModel::MercedesBencMLW167);
}

void Utils::_GetMBGClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("G CLASS W463");

	models.push_back(EModel::MercedesBencGW463);
}

void Utils::_GetMBGLClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("GL CLASS X164");
	names.push_back("GL CLASS X166");

	models.push_back(EModel::MercedesBencGLX164);
	models.push_back(EModel::MercedesBencGLX166);
}

void Utils::_GetMBGLAClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("GLA CLASS X156");
	names.push_back("GLA CLASS H247");

	models.push_back(EModel::MercedesBencGLAX156);
	models.push_back(EModel::MercedesBencGLAH247);
}

void Utils::_GetMBGLCClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("GLC CLASS X253");
	names.push_back("GLC CLASS C253");

	models.push_back(EModel::MercedesBencGLCX253);
	models.push_back(EModel::MercedesBencGLCC253);
}

void Utils::_GetMBGLEClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("GLE CLASS V167");

	models.push_back(EModel::MercedesBencGLEV167);
}

void Utils::_GetMBGLKClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("GLK CLASS X204");

	models.push_back(EModel::MercedesBencGLKX204);
}

void Utils::_GetMBGLSClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("GLS CLASS X167");

	models.push_back(EModel::MercedesBencGLSX167);
}

void Utils::_GetMBRClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("R CLASS W251");

	models.push_back(EModel::MercedesBencRW251);
}

void Utils::_GetMBSLClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("SL CLASS R230");
	names.push_back("SL CLASS R231");

	models.push_back(EModel::MercedesBencSLR230);
	models.push_back(EModel::MercedesBencSLR231);
}

void Utils::_GetMBSLKClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("SLK CLASS R170");
	names.push_back("SLK CLASS R171");
	names.push_back("SLK CLASS R172");

	models.push_back(EModel::MercedesBencSLKR170);
	models.push_back(EModel::MercedesBencSLKR171);
	models.push_back(EModel::MercedesBencSLKR172);
}

void Utils::_GetMBVClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("V CLASS W638");
	names.push_back("V CLASS W639");
	names.push_back("V CLASS W447");

	models.push_back(EModel::MercedesBencVW638);
	models.push_back(EModel::MercedesBencVW639);
	models.push_back(EModel::MercedesBencVW447);
}

void Utils::_GetMBSprinterClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("SPRINTER W901");
	names.push_back("SPRINTER W905");
	names.push_back("SPRINTER NCV3");

	models.push_back(EModel::MercedesBencSprinterW901);
	models.push_back(EModel::MercedesBencSprinterW905);
	models.push_back(EModel::MercedesBencSprinternNCV3);
}

void Utils::_GetMBVaneoClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("VANEO W414");

	models.push_back(EModel::MercedesBencVaneoW414);
}

void Utils::_GetMBVianoClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("VIANO");

	models.push_back(EModel::MercedesBencViano);
}

void Utils::_GetMBVitoClassModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("VITO");

	models.push_back(EModel::MercedesBencVito);
}
/* AUDI */
void Utils::_GetAudiA3Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("A3 8L");
	names.push_back("A3 8P");
	names.push_back("A3 8V");
	names.push_back("A3 8Y");

	models.push_back(EModel::AudiA38L);
	models.push_back(EModel::AudiA38P);
	models.push_back(EModel::AudiA38V);
	models.push_back(EModel::AudiA38Y);
}

void Utils::_GetAudiA4Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("A4 B5");
	names.push_back("A4 B6");
	names.push_back("A4 B7");
	names.push_back("A4 B8");
	names.push_back("A4 B9");

	models.push_back(EModel::AudiA4B5);
	models.push_back(EModel::AudiA4B6);
	models.push_back(EModel::AudiA4B7);
	models.push_back(EModel::AudiA4B8);
	models.push_back(EModel::AudiA4B9);
}

void Utils::_GetAudiA5Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("A5 8T");
	names.push_back("A5 F5");

	models.push_back(EModel::AudiA58T);
	models.push_back(EModel::AudiA5F5);
}

void Utils::_GetAudiA6Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("A6 C5");
	names.push_back("A6 C6");
	names.push_back("A6 C7");
	names.push_back("A6 C8");

	models.push_back(EModel::AudiA6C5);
	models.push_back(EModel::AudiA6C6);
	models.push_back(EModel::AudiA6C7);
	models.push_back(EModel::AudiA6C8);
}

void Utils::_GetAudiA7Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("A7 G4");
	names.push_back("A7 4k");

	models.push_back(EModel::AudiA7G4);
	models.push_back(EModel::AudiA74K);
}

void Utils::_GetAudiA8Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("A8 D2");
	names.push_back("A8 D3");
	names.push_back("A8 D4");
	names.push_back("A8 D5");

	models.push_back(EModel::AudiA8D2);
	models.push_back(EModel::AudiA8D3);
	models.push_back(EModel::AudiA8D4);
	models.push_back(EModel::AudiA8D5);
}

void Utils::_GetAudiQ5Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("Q5 8R");
	names.push_back("Q5 FY");

	models.push_back(EModel::AudiQ58R);
	models.push_back(EModel::AudiQ5FY);
}

void Utils::_GetAudiQ7Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("Q7 4L");
	names.push_back("Q7 4M");

	models.push_back(EModel::AudiQ74L);
	models.push_back(EModel::AudiQ74M);
}

void Utils::_GetAudiTTModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("TT 8N");
	names.push_back("TT 8J");
	names.push_back("TT 8S");

	models.push_back(EModel::AudiTT8N);
	models.push_back(EModel::AudiTT8J);
	models.push_back(EModel::AudiTT8S);
}

void Utils::_GetPorscheCayenneModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CAYENNE |");
	names.push_back("CAYENNE ||");
	names.push_back("CAYENNE |||");

	models.push_back(EModel::PorscheCayenne1);
	models.push_back(EModel::PorscheCayenne2);
	models.push_back(EModel::PorscheCayenne3);
}

void Utils::_GetPorscheMacanModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("MACAN |");

	models.push_back(EModel::PorscheMacan1);
}

void Utils::_GetPorschePanameraModels(std::vector<std::string>& names, std::vector<EModel>& models, std::vector<std::string>& images)
{
	names.push_back("PANAMERA |");
	names.push_back("PANAMERA ||");

	models.push_back(EModel::PorschePanamera1);
	models.push_back(EModel::PorschePanamera2);

	images.push_back("Cars/images/porsche/panamera/panamera1.png");
	images.push_back("Cars/images/porsche/panamera/panamera2.png");
}

void Utils::_GetLexusCTModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CT |");

	models.push_back(EModel::LexusCT1);
}

void Utils::_GetLexusISModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("IS |");
	names.push_back("IS ||");
	names.push_back("IS |||");

	models.push_back(EModel::LexusIS1);
	models.push_back(EModel::LexusIS2);
	models.push_back(EModel::LexusIS3);
}

void Utils::_GetLexusESModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ES |V");
	names.push_back("ES V");
	names.push_back("ES V|");
	names.push_back("ES V||");

	models.push_back(EModel::LexusES4);
	models.push_back(EModel::LexusES5);
	models.push_back(EModel::LexusES6);
	models.push_back(EModel::LexusES7);
}

void Utils::_GetLexusGSModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("GS ||");
	names.push_back("GS |||");
	names.push_back("GS |V");

	models.push_back(EModel::LexusGS2);
	models.push_back(EModel::LexusGS3);
	models.push_back(EModel::LexusGS4);
}

void Utils::_GetLexusLSModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("LS |V");
	names.push_back("LS V");

	models.push_back(EModel::LexusLS4);
	models.push_back(EModel::LexusLS5);
}

void Utils::_GetLexusNXModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("NX |");
	names.push_back("NX ||");

	models.push_back(EModel::LexusNX1);
	models.push_back(EModel::LexusNX2);
}

void Utils::_GetLexusRXModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("RX |");
	names.push_back("RX ||");
	names.push_back("RX |||");
	names.push_back("RX |V");

	models.push_back(EModel::LexusRX1);
	models.push_back(EModel::LexusRX2);
	models.push_back(EModel::LexusRX3);
	models.push_back(EModel::LexusRX4);
}

void Utils::_GetLexusGXModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("GX |");
	names.push_back("GX ||");
	models.push_back(EModel::LexusGX1);
	models.push_back(EModel::LexusGX2);
}

void Utils::_GetLexusLXModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("LX ||");
	names.push_back("LX |||");

	models.push_back(EModel::LexusLX2);
	models.push_back(EModel::LexusLX3);
}

void Utils::_GetInfinitiEXModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("EX 1J50");
	models.push_back(EModel::InfinitiEX1J50);
}

void Utils::_GetInfinitiFXModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("FX CLASS 1S50");
	names.push_back("FX CLASS 2S51");

	models.push_back(EModel::InfinitiFX1S50);
	models.push_back(EModel::InfinitiFX2S51);
}

void Utils::_GetInfinitiJXModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("JX CLASS |");

	models.push_back(EModel::InfinitiJX1);
}

void Utils::_GetInfinitiGModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("G SERIES |||");
	names.push_back("G SERIES |V");

	models.push_back(EModel::InfinitiG3);
	models.push_back(EModel::InfinitiG4);
}

void Utils::_GetInfinitiMModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("M SERIES |||");
	names.push_back("M SERIES |V");

	models.push_back(EModel::InfinitiM3);
	models.push_back(EModel::InfinitiM4);
}

void Utils::_GetInfinitiQ3Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("Q3");

	models.push_back(EModel::InfinitiQ3);
}

void Utils::_GetInfinitiQX4Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("QX4");

	models.push_back(EModel::InfinitiQX4);
}

void Utils::_GetInfinitiQX50Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("QX50 SERIES |");
	names.push_back("QX50 SERIES ||");

	models.push_back(EModel::InfinitiQX501);
	models.push_back(EModel::InfinitiQX502);
}

void Utils::_GetInfinitiQX56Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("QX56 SERIES |");
	names.push_back("QX56 SERIES ||");

	models.push_back(EModel::InfinitiQX561);
	models.push_back(EModel::InfinitiQX562);
}

void Utils::_GetInfinitiQX60Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("QX60");

	models.push_back(EModel::InfinitiQX601);
}

void Utils::_GetInfinitiQX70Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("QX70");

	models.push_back(EModel::InfinitiQX70);
}

void Utils::_GetInfinitiQX80Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("QX80 SERIES |");
	names.push_back("QX80 SERIES ||");

	models.push_back(EModel::InfinitiQX801);
	models.push_back(EModel::InfinitiQX802);
}

void Utils::_GetToyotaAplphardModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ALPHARD |");
	names.push_back("ALPHARD ||");
	names.push_back("ALPHARD |||");

	models.push_back(EModel::ToyotaAplphard1);
	models.push_back(EModel::ToyotaAplphard2);
	models.push_back(EModel::ToyotaAplphard3);
}

void Utils::_GetToyotaAltezzaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ALTEZZA");

	models.push_back(EModel::ToyotaAltezza);
}

void Utils::_GetToyotaAvalonModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("AVALON |||");
	names.push_back("AVALON |V");
	names.push_back("AVALON V");

	models.push_back(EModel::ToyotaAvalon3);
	models.push_back(EModel::ToyotaAvalon4);
	models.push_back(EModel::ToyotaAvalon5);
}

void Utils::_GetToyotaAvensisModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("AVENSIS ||");
	names.push_back("AVENSIS |||");

	models.push_back(EModel::ToyotaAvensis2);
	models.push_back(EModel::ToyotaAvensis3);
}

void Utils::_GetToyotaBeltaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("BELTA");

	models.push_back(EModel::ToyotaBelta);
}

void Utils::_GetToyotaBladeModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("BLADE E150");

	models.push_back(EModel::ToyotaBlade1E150);
}

void Utils::_GetToyotaCHRModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CHR |");

	models.push_back(EModel::ToyotaCHR1);
}

void Utils::_GetToyotaCamryModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CAMRY XV40");
	names.push_back("CAMRY XV50");
	names.push_back("CAMRY XV70");

	models.push_back(EModel::ToyotaCamryXV40);
	models.push_back(EModel::ToyotaCamryXV50);
	models.push_back(EModel::ToyotaCamryXV70);
}

void Utils::_GetToyotaCorollaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("COROLLA E140");
	names.push_back("COROLLA E160");
	names.push_back("COROLLA E210");

	models.push_back(EModel::ToyotaCorollaE140);
	models.push_back(EModel::ToyotaCorollaE160);
	models.push_back(EModel::ToyotaCorollaE210);
}

void Utils::_GetToyotaEstimaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ESTIMA ||");
	names.push_back("ESTIMA |||");

	models.push_back(EModel::ToyotaEstima2);
	models.push_back(EModel::ToyotaEstima3);
}

void Utils::_GetToyotaFJCruiserModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("FJ CRUISER");

	models.push_back(EModel::ToyotaFJCruiser);
}

void Utils::_GetToyotaFortunerModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("FORTUNER |");
	names.push_back("FORTUNER ||");

	models.push_back(EModel::ToyotaFortuner1);
	models.push_back(EModel::ToyotaFortuner2);
}

void Utils::_GetToyotaHarrierModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("HARRIER XU10");
	names.push_back("HARRIER XU30");
	names.push_back("HARRIER XU60");

	models.push_back(EModel::ToyotaHarrierXU10);
	models.push_back(EModel::ToyotaHarrierXU30);
	models.push_back(EModel::ToyotaHarrierXU60);
}

void Utils::_GetToyotaHighlanderModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("HIGHLANDER U20");
	names.push_back("HIGHLANDER U40");
	names.push_back("HIGHLANDER U50");
	names.push_back("HIGHLANDER U70");

	models.push_back(EModel::ToyotaHighlanderU20);
	models.push_back(EModel::ToyotaHighlanderU40);
	models.push_back(EModel::ToyotaHighlanderU50);
	models.push_back(EModel::ToyotaHighlanderU70);
}

void Utils::_GetToyotaHiluxModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("HILUX V|");
	names.push_back("HILUX V||");
	names.push_back("HILUX V|||");

	models.push_back(EModel::ToyotaHilux6);
	models.push_back(EModel::ToyotaHilux7);
	models.push_back(EModel::ToyotaHilux8);
}

void Utils::_GetToyotaIpsumModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("IPSUM M10");
	names.push_back("IPSUM M20");

	models.push_back(EModel::ToyotaIpsumM10);
	models.push_back(EModel::ToyotaIpsumM20);
}

void Utils::_GetToyotaIstModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("IST |");
	names.push_back("IST ||");

	models.push_back(EModel::ToyotaIst1);
	models.push_back(EModel::ToyotaIst2);
}

void Utils::_GetToyotaLandCruiserModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("LAND CRUISER 100");
	names.push_back("LAND CRUISER 200");
	names.push_back("LAND CRUISER 300");

	models.push_back(EModel::ToyotaLandCruiser100);
	models.push_back(EModel::ToyotaLandCruiser200);
	models.push_back(EModel::ToyotaLandCruiser300);
}

void Utils::_GetToyotaLandCruiserPradoModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("LAND CRUISER PRADO 120");
	names.push_back("LAND CRUISER PRADO 150");

	models.push_back(EModel::ToyotaLandCruiserPrado120);
	models.push_back(EModel::ToyotaLandCruiserPrado150);
}

void Utils::_GetToyotaNoahModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("NOAH R60");
	names.push_back("NOAH R70");
	names.push_back("NOAH R80");

	models.push_back(EModel::ToyotaNoahR60);
	models.push_back(EModel::ToyotaNoahR70);
	models.push_back(EModel::ToyotaNoahR80);
}

void Utils::_GetToyotaPassoModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("PASSO |");
	names.push_back("PASSO ||");
	names.push_back("PASSO |||");

	models.push_back(EModel::ToyotaPasso1);
	models.push_back(EModel::ToyotaPasso2);
	models.push_back(EModel::ToyotaPasso3);
}

void Utils::_GetToyotaPriusModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("PRIUS XW10");
	names.push_back("PRIUS XW20");
	names.push_back("PRIUS XW30");
	names.push_back("PRIUS XW50");

	models.push_back(EModel::ToyotaPriusXW10);
	models.push_back(EModel::ToyotaPriusXW20);
	models.push_back(EModel::ToyotaPriusXW30);
	models.push_back(EModel::ToyotaPriusXW50);
}

void Utils::_GetToyotaRAV4Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("RAV4 XA10");
	names.push_back("RAV4 XA20");
	names.push_back("RAV4 XA30");
	names.push_back("RAV4 CA40");
	names.push_back("RAV4 XA50");

	models.push_back(EModel::ToyotaRAV4XA10);
	models.push_back(EModel::ToyotaRAV4XA20);
	models.push_back(EModel::ToyotaRAV4XA30);
	models.push_back(EModel::ToyotaRAV4CA40);
	models.push_back(EModel::ToyotaRAV4XA50);
}

void Utils::_GetToyotaSequoiaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("SEQUOIA |");
	names.push_back("SEQUOIA ||");

	models.push_back(EModel::ToyotaSequoia1);
	models.push_back(EModel::ToyotaSequoia2);
}

void Utils::_GetToyotaSiennaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("SIENNA |");
	names.push_back("SIENNA ||");
	names.push_back("SIENNA |||");
	names.push_back("SIENNA |V");

	models.push_back(EModel::ToyotaSienna1);
	models.push_back(EModel::ToyotaSienna2);
	models.push_back(EModel::ToyotaSienna3);
	models.push_back(EModel::ToyotaSienna4);
}

void Utils::_GetToyotaTacomaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("TACOMA |");
	names.push_back("TACOMA ||");
	names.push_back("TACOMA |||");

	models.push_back(EModel::ToyotaTacoma1);
	models.push_back(EModel::ToyotaTacoma2);
	models.push_back(EModel::ToyotaTacoma3);
}

void Utils::_GetToyotaTundraModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("TUNDRA |");
	names.push_back("TUNDRA ||");

	models.push_back(EModel::ToyotaTundra1);
	models.push_back(EModel::ToyotaTundra2);
}

void Utils::_GetToyotaVellfireModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("VELLFIRE |");
	names.push_back("VELLFIRE ||");

	models.push_back(EModel::ToyotaVellfire1);
	models.push_back(EModel::ToyotaVellfire2);
}

void Utils::_GetToyotaVitzModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("VITZ P10");
	names.push_back("VITZ XP90");
	names.push_back("VITZ XP130");

	models.push_back(EModel::ToyotaVitzP10);
	models.push_back(EModel::ToyotaVitzXP90);
	models.push_back(EModel::ToyotaVitzXP130);
}

void Utils::_GetToyotaVoxyModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("VOXY R60");
	names.push_back("VOXY R70");
	names.push_back("VOXY R80");

	models.push_back(EModel::ToyotaVoxyR60);
	models.push_back(EModel::ToyotaVoxyR70);
	models.push_back(EModel::ToyotaVoxyR80);
}

void Utils::_GetToyotaYarisModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("YARIS");

	models.push_back(EModel::ToyotaYaris);
}
/* NISSAN */
void Utils::_GetNissanAlmeraModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ALMERA N16");
	names.push_back("ALMERA G15");

	models.push_back(EModel::NissanAlmeraN16);
	models.push_back(EModel::NissanAlmeraG15);
}

void Utils::_GetNissanAltimaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ALTIMA L32");
	names.push_back("ALTIMA L33");
	names.push_back("ALTIMA L34");

	models.push_back(EModel::NissanAltimaL32);
	models.push_back(EModel::NissanAltimaL33);
	models.push_back(EModel::NissanAltimaL34);
}

void Utils::_GetNissanArmadaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ARMADA |");
	names.push_back("ARMADA ||");

	models.push_back(EModel::NissanArmada1);
	models.push_back(EModel::NissanArmada2);
}

void Utils::_GetNissanBluebirdModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("BLUEBIRD");

	models.push_back(EModel::NissanBluebird);
}

void Utils::_GetNissanCubeModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CUBE Z10");
	names.push_back("CUBE Z11");
	names.push_back("CUBE Z12");

	models.push_back(EModel::NissanCubeZ10);
	models.push_back(EModel::NissanCubeZ11);
	models.push_back(EModel::NissanCubeZ12);
}

void Utils::_GetNissanElgrandModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ELGRAND E50");
	names.push_back("ELGRAND E51");
	names.push_back("ELGRAND E52");

	models.push_back(EModel::NissanElgrandE50);
	models.push_back(EModel::NissanElgrandE51);
	models.push_back(EModel::NissanElgrandE52);
}

void Utils::_GetNissanFrontierModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("FRONTIER");

	models.push_back(EModel::NissanFrontier);
}

void Utils::_GetNissanFugaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("FUGA |");
	names.push_back("FUGA ||");

	models.push_back(EModel::NissanFuga1);
	models.push_back(EModel::NissanFuga2);
}

void Utils::_GetNissanJukeModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("JUKE |");
	names.push_back("JUKE ||");

	models.push_back(EModel::NissanJuke1);
	models.push_back(EModel::NissanJuke2);
}

void Utils::_GetNissanKicksModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("KICKS |");

	models.push_back(EModel::NissanKicks1);
}

void Utils::_GetNissanLatioModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("LATIO N71");

	models.push_back(EModel::NissanLatioN71);
}

void Utils::_GetNissanLeafModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("LEAF ZE0");
	names.push_back("LEAF ZE1");

	models.push_back(EModel::NissanLeafZE0);
	models.push_back(EModel::NissanLeafZE1);
}

void Utils::_GetNissanMarchModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("MARCH K12");
	names.push_back("MARCH K13");

	models.push_back(EModel::NissanMarchK12);
	models.push_back(EModel::NissanMarchK13);
}

void Utils::_GetNissanMaximaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("MAXIMA A34");
	names.push_back("MAXIMA A35");
	names.push_back("MAXIMA A36");

	models.push_back(EModel::NissanMaximaA34);
	models.push_back(EModel::NissanMaximaA35);
	models.push_back(EModel::NissanMaximaA36);
}

void Utils::_GetNissanMicraModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("MICRA |||");
	names.push_back("MICRA |V");
	names.push_back("MICRA V");

	models.push_back(EModel::NissanMicra3);
	models.push_back(EModel::NissanMicra4);
	models.push_back(EModel::NissanMicra5);
}

void Utils::_GetNissanMuranoModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("MURANO Z50");
	names.push_back("MURANO Z51");
	names.push_back("MURANO Z52");

	models.push_back(EModel::NissanMuranoZ50);
	models.push_back(EModel::NissanMuranoZ51);
	models.push_back(EModel::NissanMuranoZ52);
}

void Utils::_GetNissanNoteModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("NOTE |");
	names.push_back("NOTE ||");

	models.push_back(EModel::NissanNote1);
	models.push_back(EModel::NissanNote2);

}

void Utils::_GetNissanPathfinderModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("PATHFINDER |||");
	names.push_back("PATHFINDER |V");
	names.push_back("PATHFINDER V");

	models.push_back(EModel::NissanPathfinder3);
	models.push_back(EModel::NissanPathfinder4);
	models.push_back(EModel::NissanPathfinder5);
}

void Utils::_GetNissanPatrolModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("PATROL Y61");
	names.push_back("PATROL Y62");

	models.push_back(EModel::NissanPatrolY61);
	models.push_back(EModel::NissanPatrolY62);
}

void Utils::_GetNissanPresageModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("PRESAGE |");
	names.push_back("PRESAGE ||");

	models.push_back(EModel::NissanPresage1);
	models.push_back(EModel::NissanPresage2);
}

void Utils::_GetNissanQashqaiModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("QASHQAI |");
	names.push_back("QASHQAI ||");
	names.push_back("QASHQAI |||");

	models.push_back(EModel::NissanQashqai1);
	models.push_back(EModel::NissanQashqai2);
	models.push_back(EModel::NissanQashqai3);
}

void Utils::_GetNissanQuestModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("QUEST |||");
	names.push_back("QUEST |V");

	models.push_back(EModel::NissanQuest3);
	models.push_back(EModel::NissanQuest4);
}

void Utils::_GetNissanRogueModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ROGUE |");
	names.push_back("ROGUE ||");
	names.push_back("ROGUE |||");

	models.push_back(EModel::NissanRogue1);
	models.push_back(EModel::NissanRogue2);
	models.push_back(EModel::NissanRogue3);
}

void Utils::_GetNissanSentraModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("SENTRA B16");
	names.push_back("SENTRA B17");
	names.push_back("SENTRA B18");

	models.push_back(EModel::NissanSentraB16);
	models.push_back(EModel::NissanSentraB17);
	models.push_back(EModel::NissanSentraB18);
}

void Utils::_GetNissanSerenaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("SERENA C24");
	names.push_back("SERENA C25");
	names.push_back("SERENA C26");
	names.push_back("SERENA C27");

	models.push_back(EModel::NissanSerenaC24);
	models.push_back(EModel::NissanSerenaC25);
	models.push_back(EModel::NissanSerenaC26);
	models.push_back(EModel::NissanSerenaC27);
}

void Utils::_GetNissanSkylineModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("SKYLINE R34");
	names.push_back("SKYLINE V35");
	names.push_back("SKYLINE V36");
	names.push_back("SKYLINE V37");

	models.push_back(EModel::NissanSkylineR34);
	models.push_back(EModel::NissanSkylineV35);
	models.push_back(EModel::NissanSkylineV36);
	models.push_back(EModel::NissanSkylineV37);
}

void Utils::_GetNissanSunnyModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("SUNNY N16");
	names.push_back("SUNNY B10");

	models.push_back(EModel::NissanSunnyN16);
	models.push_back(EModel::NissanSunnyB10);
}

void Utils::_GetNissanTeanaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("TEANA |");
	names.push_back("TEANA ||");
	names.push_back("TEANA |||");

	models.push_back(EModel::NissanTeana1);
	models.push_back(EModel::NissanTeana2);
	models.push_back(EModel::NissanTeana3);
}

void Utils::_GetNissanTerranoModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("TERRANO ||");
	names.push_back("TERRANO |||");

	models.push_back(EModel::NissanTerrano2);
	models.push_back(EModel::NissanTerrano3);
}

void Utils::_GetNissanTiidaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("TIIDA |");
	names.push_back("TIIDA ||");

	models.push_back(EModel::NissanTiida1);
	models.push_back(EModel::NissanTiida2);
}

void Utils::_GetNissanVersaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("VERSA |");
	names.push_back("VERSA ||");
	names.push_back("VERSA |||");

	models.push_back(EModel::NissanVersa1);
	models.push_back(EModel::NissanVersa2);
	models.push_back(EModel::NissanVersa3);
}

void Utils::_GetNissanXTrailModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("X-TRAIL |");
	names.push_back("X-TRAIL ||");
	names.push_back("X-TRAIL |||");

	models.push_back(EModel::NissanXTrail1);
	models.push_back(EModel::NissanXTrail2);
	models.push_back(EModel::NissanXTrail3);
}

void Utils::_GetNissanXTerraModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("X-TERRA |");
	names.push_back("X-TERRA ||");

	models.push_back(EModel::NissanXTerra1);
	models.push_back(EModel::NissanXTerra2);
}

void Utils::_GetNissan350ZModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("350Z");

	models.push_back(EModel::Nissan350Z);
}
/* Ford */
void Utils::_GetFordEdgeModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("EDGE |");
	names.push_back("EDGE ||");

	models.push_back(EModel::FordEdge1);
	models.push_back(EModel::FordEdge2);
}

void Utils::_GetFordEscapeModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ESCAPE |");
	names.push_back("ESCAPE ||");
	names.push_back("ESCAPE |||");
	names.push_back("ESCAPE |V");

	models.push_back(EModel::FordEscape1);
	models.push_back(EModel::FordEscape2);
	models.push_back(EModel::FordEscape3);
	models.push_back(EModel::FordEscape4);
}

void Utils::_GetFordExplorerModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("EXPLORER |");
	names.push_back("EXPLORER ||");
	names.push_back("EXPLORER |||");
	names.push_back("EXPLORER |V");
	names.push_back("EXPLORER V");
	names.push_back("EXPLORER V|");

	models.push_back(EModel::FordExplorer1);
	models.push_back(EModel::FordExplorer2);
	models.push_back(EModel::FordExplorer3);
	models.push_back(EModel::FordExplorer4);
	models.push_back(EModel::FordExplorer5);
	models.push_back(EModel::FordExplorer6);
}

void Utils::_GetFordF150Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("F150 X");
	names.push_back("F150 X|");
	names.push_back("F150 X||");
	names.push_back("F150 X|||");

	models.push_back(EModel::FordF15010);
	models.push_back(EModel::FordF15011);
	models.push_back(EModel::FordF15012);
	models.push_back(EModel::FordF15013);
}

void Utils::_GetFordFiestaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("FIESTA MK6");
	names.push_back("FIESTA MK7");

	models.push_back(EModel::FordFiestaMK6);
	models.push_back(EModel::FordFiestaMK7);
}

void Utils::_GetFordFocusModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("FOCUS |");
	names.push_back("FOCUS ||");
	names.push_back("FOCUS |||");
	names.push_back("FOCUS |V");

	models.push_back(EModel::FordFocus1);
	models.push_back(EModel::FordFocus2);
	models.push_back(EModel::FordFocus3);
	models.push_back(EModel::FordFocus4);
}

void Utils::_GetFordFusionModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("FUSION ||");
	models.push_back(EModel::FordFusion2);
}

void Utils::_GetFordTaurusModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("TAURUS V|");
	models.push_back(EModel::FordTaurus6);
}

void Utils::_GetFordTransitModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("TRANSIT");
	models.push_back(EModel::FordTransit);
}

void Utils::_GetFordMustangModels(std::vector<std::string>& names, std::vector<EModel>& models, std::vector<std::string>& images)
{
	names.push_back("MUSTANG |V");
	names.push_back("MUSTANG V");
	names.push_back("MUSTANG V|");

	models.push_back(EModel::FordMustang4);
	models.push_back(EModel::FordMustang5);
	models.push_back(EModel::FordMustang6);

	images.push_back("Cars/images/ford/mustang/ford_mustang4.png");
	images.push_back("Cars/images/ford/mustang/ford_mustang5.png");
	images.push_back("Cars/images/ford/mustang/ford_mustang6.png");
}
/* Chevrolet */
void Utils::_GetChevroletAvalancheModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("AVALANCHE |");
	names.push_back("AVALANCHE ||");

	models.push_back(EModel::ChevroletAvalanche1);
	models.push_back(EModel::ChevroletAvalanche2);
}

void Utils::_GetChevroletAveoModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("AVEO |");
	names.push_back("AVEO ||");
	names.push_back("AVEO |||");

	models.push_back(EModel::ChevroletAveo1);
	models.push_back(EModel::ChevroletAveo2);
	models.push_back(EModel::ChevroletAveo3);
}

void Utils::_GetChevroletCaptivaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CAPTIVAL");

	models.push_back(EModel::ChevroletCaptiva1);
}

void Utils::_GetChevroletCruzeModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CRUZE |");
	names.push_back("CRUZE ||");

	models.push_back(EModel::ChevroletCruze1);
	models.push_back(EModel::ChevroletCruze2);
}

void Utils::_GetChevroletEpicaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("EPICA V250");

	models.push_back(EModel::ChevroletEpicaV250);
}

void Utils::_GetChevroletEquinoxModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("EQUINOX |");
	names.push_back("EQUINOX ||");
	names.push_back("EQUINOX |||");

	models.push_back(EModel::ChevroletEquinox1);
	models.push_back(EModel::ChevroletEquinox2);
	models.push_back(EModel::ChevroletEquinox3);
}

void Utils::_GetChevroletMalibuModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("MALIBU V||");
	names.push_back("MALIBU V|||");
	names.push_back("MALIBU |X");

	models.push_back(EModel::ChevroletMalibu7);
	models.push_back(EModel::ChevroletMalibu8);
	models.push_back(EModel::ChevroletMalibu9);
}

void Utils::_GetChevroletNivaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("NIVA");

	models.push_back(EModel::ChevroletNiva);
}

void Utils::_GetChevroletTahoeModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("TAHOE ||");
	names.push_back("TAHOE |||");
	names.push_back("TAHOE |V");
	names.push_back("TAHOE V");

	models.push_back(EModel::ChevroletTahoe2);
	models.push_back(EModel::ChevroletTahoe3);
	models.push_back(EModel::ChevroletTahoe4);
	models.push_back(EModel::ChevroletTahoe5);
}

void Utils::_GetChevroletTrailBlazerModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("TRAIL BLAZER |");
	names.push_back("TRAIL BLAZER ||");
	names.push_back("TRAIL BLAZER |||");

	models.push_back(EModel::ChevroletTrailBlazer1);
	models.push_back(EModel::ChevroletTrailBlazer2);
	models.push_back(EModel::ChevroletTrailBlazer3);
}

void Utils::_GetChevroletVoltModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("VOLT |");
	names.push_back("VOLT ||");

	models.push_back(EModel::ChevroletVolt1);
	models.push_back(EModel::ChevroletVolt2);
}

void Utils::_GetChevroletCamaroModels(std::vector<std::string>& names, std::vector<EModel>& models, std::vector<std::string>& images)
{
	names.push_back("CAMARO V");
	names.push_back("CAMARO V|");

	models.push_back(EModel::ChevroletCamaro5);
	models.push_back(EModel::ChevroletCamaro6);

	images.push_back("Cars/images/chevrolet/camaro/camaro5.png");
	images.push_back("Cars/images/chevrolet/camaro/camaro6.png");
}

void Utils::_GetChevroletCorvetteModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CORVETTE");

	models.push_back(EModel::ChevroletCorvette);
}
/* Volkswagen */
void Utils::_GetVolkswagenBeetleModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("BEETLE A4");
	names.push_back("BEETLE A5");

	models.push_back(EModel::VolkswagenBeetleA4);
	models.push_back(EModel::VolkswagenBeetleA5);
}

void Utils::_GetVolkswagenBoraModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("BORA 1998");
	names.push_back("BORA 4");

	models.push_back(EModel::VolkswagenBora1998);
	models.push_back(EModel::VolkswagenBora4);
}

void Utils::_GetVolkswagenCaddyModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CADDY ||");
	names.push_back("CADDY |||");
	names.push_back("CADDY |V");
	names.push_back("CADDY V");

	models.push_back(EModel::VolkswagenCaddy2);
	models.push_back(EModel::VolkswagenCaddy3);
	models.push_back(EModel::VolkswagenCaddy4);
	models.push_back(EModel::VolkswagenCaddy5);
}

void Utils::_GetVolkswagenCrafterModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CRAFTER");

	models.push_back(EModel::VolkswagenCrafter);
}

void Utils::_GetVolkswagenGolfModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CADDY ||");
	names.push_back("CADDY |||");
	names.push_back("CADDY |V");
	names.push_back("CADDY V");
	names.push_back("CADDY V|");
	names.push_back("CADDY V||");
	names.push_back("CADDY V|||");

	models.push_back(EModel::VolkswagenGolf2);
	models.push_back(EModel::VolkswagenGolf3);
	models.push_back(EModel::VolkswagenGolf4);
	models.push_back(EModel::VolkswagenGolf5);
	models.push_back(EModel::VolkswagenGolf6);
	models.push_back(EModel::VolkswagenGolf7);
	models.push_back(EModel::VolkswagenGolf8);
}

void Utils::_GetVolkswagenJettaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("JETTA |||");
	names.push_back("JETTA |V");
	names.push_back("JETTA V");
	names.push_back("JETTA V|");
	names.push_back("JETTA V||");

	models.push_back(EModel::VolkswagenJetta3);
	models.push_back(EModel::VolkswagenJetta4);
	models.push_back(EModel::VolkswagenJetta5);
	models.push_back(EModel::VolkswagenJetta6);
	models.push_back(EModel::VolkswagenJetta7);
}

void Utils::_GetVolkswagenPassatModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("PASSAT B5");
	names.push_back("PASSAT B6");
	names.push_back("PASSAT B7");
	names.push_back("PASSAT B8");

	models.push_back(EModel::VolkswagenPassatB5);
	models.push_back(EModel::VolkswagenPassatB6);
	models.push_back(EModel::VolkswagenPassatB7);
	models.push_back(EModel::VolkswagenPassatB8);
}

void Utils::_GetVolkswagenPassatCCModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("PASSAT CC");

	models.push_back(EModel::VolkswagenPassatCC1);
}

void Utils::_GetVolkswagenPoloModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("POLO |||");
	names.push_back("POLO |V");
	names.push_back("POLO V");
	names.push_back("POLO V|");

	models.push_back(EModel::VolkswagenPolo3);
	models.push_back(EModel::VolkswagenPolo4);
	models.push_back(EModel::VolkswagenPolo5);
	models.push_back(EModel::VolkswagenPolo6);
}

void Utils::_GetVolkswagenRoutanModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ROUTAN");

	models.push_back(EModel::VolkswagenRoutan);
}

void Utils::_GetVolkswagenTiguanModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("TIGUAN |");
	names.push_back("TIGUAN ||");

	models.push_back(EModel::VolkswagenTiguan1);
	models.push_back(EModel::VolkswagenTiguan2);
}

void Utils::_GetVolkswagenTouaregModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("TOUAREG |");
	names.push_back("TOUAREG ||");
	names.push_back("TOUAREG |||");

	models.push_back(EModel::VolkswagenTouareg1);
	models.push_back(EModel::VolkswagenTouareg2);
	models.push_back(EModel::VolkswagenTouareg3);
}

void Utils::_GetVolkswagenTouranModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("TOURAN |");
	names.push_back("TOURAN ||");
	names.push_back("TOURAN |||");

	models.push_back(EModel::VolkswagenTouran1);
	models.push_back(EModel::VolkswagenTouran2);
	models.push_back(EModel::VolkswagenTouran3);
}

void Utils::_GetVolkswagenTransporterModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("TRANSPORTER T4");
	names.push_back("TRANSPORTER T5");
	names.push_back("TRANSPORTER T6");

	models.push_back(EModel::VolkswagenTransporterT4);
	models.push_back(EModel::VolkswagenTransporterT5);
	models.push_back(EModel::VolkswagenTransporterT6);
}

void Utils::_GetVolkswagenVentoModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("VENTO");

	models.push_back(EModel::VolkswagenVento);
}

/* Opel */
void Utils::_GetOpelAstraModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ASTRA F");
	names.push_back("ASTRA G");
	names.push_back("ASTRA H");
	names.push_back("ASTRA J");
	names.push_back("ASTRA K");

	models.push_back(EModel::OpelAstraF);
	models.push_back(EModel::OpelAstraG);
	models.push_back(EModel::OpelAstraH);
	models.push_back(EModel::OpelAstraJ);
	models.push_back(EModel::OpelAstraK);
}

void Utils::_GetOpelComboModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("COMBO C");
	names.push_back("COMBO D");
	names.push_back("COMBO E");
	names.push_back("COMBO PCMA");

	models.push_back(EModel::OpelComboC);
	models.push_back(EModel::OpelComboD);
	models.push_back(EModel::OpelComboE);
	models.push_back(EModel::OpelComboPCMA);
}

void Utils::_GetOpelCorsaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CORSA A");
	names.push_back("CORSA B");
	names.push_back("CORSA C");
	names.push_back("CORSA D");
	names.push_back("CORSA E");
	names.push_back("CORSA F");

	models.push_back(EModel::OpelCorsaA);
	models.push_back(EModel::OpelCorsaB);
	models.push_back(EModel::OpelCorsaC);
	models.push_back(EModel::OpelCorsaD);
	models.push_back(EModel::OpelCorsaE);
	models.push_back(EModel::OpelCorsaF);
}

void Utils::_GetOpelFronteraModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("FRONTERA A");
	names.push_back("FRONTERA B");

	models.push_back(EModel::OpelFronteraA);
	models.push_back(EModel::OpelFronteraB);
}

void Utils::_GetOpelInsigniaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("INSIGNIA |");
	names.push_back("INSIGNIA ||");

	models.push_back(EModel::OpelInsignia1);
	models.push_back(EModel::OpelInsignia2);
}

void Utils::_GetOpelMerivaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("MERIVA A");
	names.push_back("MERIVA B");

	models.push_back(EModel::OpelMerivaA);
	models.push_back(EModel::OpelMerivaB);
}

void Utils::_GetOpelOmegaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("OMEGA A");
	names.push_back("OMEGA B");

	models.push_back(EModel::OpelOmegaA);
	models.push_back(EModel::OpelOmegaB);

}

void Utils::_GetOpelSignumModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("SIGNUM");
	models.push_back(EModel::OpelSignum);
}

void Utils::_GetOpelSintraModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("SINTRA");
	models.push_back(EModel::OpelSintra);
}

void Utils::_GetOpelVectraModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("VECTRA A");
	names.push_back("VECTRA B");
	names.push_back("VECTRA C");

	models.push_back(EModel::OpelVectraA);
	models.push_back(EModel::OpelVectraB);
	models.push_back(EModel::OpelVectraC);
}

void Utils::_GetOpelZafiraModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ZAFIRA A");
	names.push_back("ZAFIRA B");
	names.push_back("ZAFIRA C");
	models.push_back(EModel::OpelZafiraA);
	models.push_back(EModel::OpelZafiraB);
	models.push_back(EModel::OpelZafiraC);
}

/* Mitsubishi */
void Utils::_GetMitsubishiAirtrekModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("AIRTREK");
	models.push_back(EModel::MitsubishiAirtrek);
}

void Utils::_GetMitsubishiChariotModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CHARIOT ||");
	names.push_back("CHARIOT |||");
	models.push_back(EModel::MitsubishiChariot2);
	models.push_back(EModel::MitsubishiChariot3);
}

void Utils::_GetMitsubishiColtModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("COLT Z30");
	models.push_back(EModel::MitsubishiColtZ30);
}

void Utils::_GetMitsubishiGalantModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("GALANT V|||");
	names.push_back("GALANT |X");
	models.push_back(EModel::MitsubishiGalant8);
	models.push_back(EModel::MitsubishiGalant9);
}

void Utils::_GetMitsubishiGrandisModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("GRANDIS");
	models.push_back(EModel::MitsubishiGrandis);
}

void Utils::_GetMitsubishiLancerModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("LANCER |X");
	names.push_back("LANCER X");
	models.push_back(EModel::MitsubishiLancer9);
	models.push_back(EModel::MitsubishiLancer10);
}

void Utils::_GetMitsubishiMonteroModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("MONTERO |||");
	names.push_back("MONTERO |V");
	models.push_back(EModel::MitsubishiMontero3);
	models.push_back(EModel::MitsubishiMontero4);
}

void Utils::_GetMitsubishiOutlanderModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("OUTLANDER |");
	names.push_back("OUTLANDER ||");
	names.push_back("OUTLANDER |||");
	models.push_back(EModel::MitsubishiOutlander1);
	models.push_back(EModel::MitsubishiOutlander2);
	models.push_back(EModel::MitsubishiOutlander3);
}

void Utils::_GetMitsubishiPajeroModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("PAJERO ||");
	names.push_back("PAJERO |||");
	names.push_back("PAJERO |V");
	models.push_back(EModel::MitsubishiPajero2);
	models.push_back(EModel::MitsubishiPajero3);
	models.push_back(EModel::MitsubishiPajero4);
}
/* Kia */
void Utils::_GetKiaCadenzaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CADENZA |");
	names.push_back("CADENZA ||");
	models.push_back(EModel::KIACadenza1);
	models.push_back(EModel::KIACadenza2);
}

void Utils::_GetKiaCeratoModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CERATO |");
	names.push_back("CERATO ||");
	names.push_back("CERATO |||");
	models.push_back(EModel::KIACerato1);
	models.push_back(EModel::KIACerato2);
	models.push_back(EModel::KIACerato3);
}

void Utils::_GetKiaForteModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("FORTE |");
	names.push_back("FORTE ||");
	names.push_back("FORTE |||");
	models.push_back(EModel::KIAForte1);
	models.push_back(EModel::KIAForte2);
	models.push_back(EModel::KIAForte3);
}

void Utils::_GetKiaK5Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("K5 |");
	names.push_back("K5 ||");
	names.push_back("K5 |||");
	models.push_back(EModel::KIAK51);
	models.push_back(EModel::KIAK52);
	models.push_back(EModel::KIAK53);
}

void Utils::_GetKiaOptimaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("OPTIMA ||");
	names.push_back("OPTIMA |||");
	names.push_back("OPTIMA |V");
	models.push_back(EModel::KIAOptima2);
	models.push_back(EModel::KIAOptima3);
	models.push_back(EModel::KIAOptima4);
}

void Utils::_GetKiaRioModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("RIO ||");
	names.push_back("RIO |||");
	names.push_back("RIO |V");
	models.push_back(EModel::KIARio2);
	models.push_back(EModel::KIARio3);
	models.push_back(EModel::KIARio4);
}

void Utils::_GetKiaSedonaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("SEDONA |");
	names.push_back("SEDONA ||");
	names.push_back("SEDONA |||");
	models.push_back(EModel::KIASedona1);
	models.push_back(EModel::KIASedona2);
	models.push_back(EModel::KIASedona3);
}

void Utils::_GetKiaSorentoModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("SORENTO |");
	names.push_back("SORENTO ||");
	names.push_back("SORENTO |||");
	names.push_back("SORENTO |V");
	models.push_back(EModel::KIASorento1);
	models.push_back(EModel::KIASorento2);
	models.push_back(EModel::KIASorento3);
	models.push_back(EModel::KIASorento4);
}

void Utils::_GetKiaSportageModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("SPORTAGE ||");
	names.push_back("SPORTAGE |||");
	names.push_back("SPORTAGE |V");
	models.push_back(EModel::KIASportage2);
	models.push_back(EModel::KIASportage3);
	models.push_back(EModel::KIASportage4);
}
/* Hyundai */
void Utils::_GetHyundaiAccentModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ACCENT ||");
	names.push_back("ACCENT |||");
	names.push_back("ACCENT |V");
	names.push_back("ACCENT V");
	models.push_back(EModel::HyundaiAccent2);
	models.push_back(EModel::HyundaiAccent3);
	models.push_back(EModel::HyundaiAccent4);
	models.push_back(EModel::HyundaiAccent5);
}

void Utils::_GetHyundaiCretaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CRETA |");
	names.push_back("CRETA ||");

	models.push_back(EModel::HyundaiCreta1);
	models.push_back(EModel::HyundaiCreta2);
}

void Utils::_GetHyundaiElantraModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ELANTRA |V");
	names.push_back("ELANTRA V");
	names.push_back("ELANTRA V|");
	names.push_back("ELANTRA V||");
	models.push_back(EModel::HyundaiElantra4);
	models.push_back(EModel::HyundaiElantra5);
	models.push_back(EModel::HyundaiElantra6);
	models.push_back(EModel::HyundaiElantra7);
}

void Utils::_GetHyundaiGenesisModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("GENESIS |");
	names.push_back("GENESIS ||");

	models.push_back(EModel::HyundaiGenesis1);
	models.push_back(EModel::HyundaiGenesis2);
}

void Utils::_GetHyundaiGenesisCoupeModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("GENESIS COUPE |");

	models.push_back(EModel::HyundaiGenesisCoupe1);
}

void Utils::_GetHyundaiIX35Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("IX35");

	models.push_back(EModel::HyundaiIX351);
}

void Utils::_GetHyundaiKonaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("KONA |");

	models.push_back(EModel::HyundaiKona1);

}

void Utils::_GetHyundaiSantaFeModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("SANTA FE |");
	names.push_back("SANTA FE ||");
	names.push_back("SANTA FE |||");
	names.push_back("SANTA FE |V");
	models.push_back(EModel::HyundaiSantaFe1);
	models.push_back(EModel::HyundaiSantaFe2);
	models.push_back(EModel::HyundaiSantaFe3);
	models.push_back(EModel::HyundaiSantaFe4);
}

void Utils::_GetHyundaiSolarisModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("SOLARIS |");
	names.push_back("SOLARIS ||");

	models.push_back(EModel::HyundaiSolaris1);
	models.push_back(EModel::HyundaiSolaris2);
}

void Utils::_GetHyundaiSonataModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("SONATA V");
	names.push_back("SONATA V|");
	names.push_back("SONATA V||");
	names.push_back("SONATA V|||");

	models.push_back(EModel::HyundaiSonata5);
	models.push_back(EModel::HyundaiSonata6);
	models.push_back(EModel::HyundaiSonata7);
	models.push_back(EModel::HyundaiSonata8);
}

void Utils::_GetHyundaiTucsonModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("TUCSON |");
	names.push_back("TUCSON ||");
	names.push_back("TUCSON |||");
	names.push_back("TUCSON |V");
	models.push_back(EModel::HyundaiTucson1);
	models.push_back(EModel::HyundaiTucson2);
	models.push_back(EModel::HyundaiTucson3);
	models.push_back(EModel::HyundaiTucson4);
}

void Utils::_GetHyundaiVelosterModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("VELOSTER |");
	names.push_back("VELOSTER ||");

	models.push_back(EModel::HyundaiVeloster1);
	models.push_back(EModel::HyundaiVeloster2);
}
/* Honda */
void Utils::_GetHondaAccordModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ACCORD V||");
	names.push_back("ACCORD V|||");
	names.push_back("ACCORD |X");
	names.push_back("ACCORD X");

	models.push_back(EModel::HondaAccord7);
	models.push_back(EModel::HondaAccord8);
	models.push_back(EModel::HondaAccord9);
	models.push_back(EModel::HondaAccord10);
}

void Utils::_GetHondaCivicModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CIVIC V||");
	names.push_back("CIVIC V|||");
	names.push_back("CIVIC |X");
	names.push_back("CIVIC X");
	names.push_back("CIVIC X|");
	models.push_back(EModel::HondaCivic7);
	models.push_back(EModel::HondaCivic8);
	models.push_back(EModel::HondaCivic9);
	models.push_back(EModel::HondaCivic10);
	models.push_back(EModel::HondaCivic11);
}

void Utils::_GetHondaCRVModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CR-V |");
	names.push_back("CR-V ||");
	names.push_back("CR-V |||");
	names.push_back("CR-V |V");
	names.push_back("CR-V V");
	models.push_back(EModel::HondaCRV1);
	models.push_back(EModel::HondaCRV2);
	models.push_back(EModel::HondaCRV3);
	models.push_back(EModel::HondaCRV4);
	models.push_back(EModel::HondaCRV5);
}

void Utils::_GetHondaCrosstourModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CROSSTOUR");
	models.push_back(EModel::HondaCrosstour1);
}

void Utils::_GetHondaElysionModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ELYSION");
	models.push_back(EModel::HondaElysion1);
}

void Utils::_GetHondaFitModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("FIT |");
	names.push_back("FIT ||");
	names.push_back("FIT |||");
	models.push_back(EModel::HondaFit1);
	models.push_back(EModel::HondaFit2);
	models.push_back(EModel::HondaFit3);
}

void Utils::_GetHondaHRVModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("HR-V |");
	names.push_back("HR-V ||");
	models.push_back(EModel::HondaHRV1);
	models.push_back(EModel::HondaHRV2);
}

void Utils::_GetHondaOdysseyModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ODYSSEY |||");
	names.push_back("ODYSSEY |V");
	names.push_back("ODYSSEY V");
	names.push_back("ODYSSEY V|");
	models.push_back(EModel::HondaOdyssey3);
	models.push_back(EModel::HondaOdyssey4);
	models.push_back(EModel::HondaOdyssey5);
	models.push_back(EModel::HondaOdyssey6);
}

void Utils::_GetHondaPilotModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("PILOT |");
	names.push_back("PILOT ||");
	names.push_back("PILOT |||");
	models.push_back(EModel::HondaPilot1);
	models.push_back(EModel::HondaPilot2);
	models.push_back(EModel::HondaPilot3);
}

void Utils::_GetHondaRidgelineModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("RIDGELINE |");
	names.push_back("RIDGELINE ||");
	models.push_back(EModel::HondaRidgeline1);
	models.push_back(EModel::HondaRidgeline2);
}

void Utils::_GetHondaStepwgnModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("STEPWGN ||");
	names.push_back("STEPWGN |||");
	names.push_back("STEPWGN |V");
	names.push_back("STEPWGN V");

	models.push_back(EModel::HondaStepwgn2);
	models.push_back(EModel::HondaStepwgn3);
	models.push_back(EModel::HondaStepwgn4);
	models.push_back(EModel::HondaStepwgn5);
}
/* Mazda */
void Utils::_GetMazdaAtenzaModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("ATENZA |");
	names.push_back("ATENZA ||");
	names.push_back("ATENZA |||");
	models.push_back(EModel::MazdaAtenza1);
	models.push_back(EModel::MazdaAtenza2);
	models.push_back(EModel::MazdaAtenza3);
}

void Utils::_GetMazdaCX3Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CX3 |");

	models.push_back(EModel::MazdaCX31);
}

void Utils::_GetMazdaCX5Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CX5 |");
	names.push_back("CX5 ||");
	models.push_back(EModel::MazdaCX51);
	models.push_back(EModel::MazdaCX52);
}

void Utils::_GetMazdaCX7Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CX7 |");

	models.push_back(EModel::MazdaCX71);
}

void Utils::_GetMazdaCX9Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("CX9 |");
	names.push_back("CX9 ||");
	models.push_back(EModel::MazdaCX91);
	models.push_back(EModel::MazdaCX92);
}

void Utils::_GetMazdaDemioModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("DEMIO |");
	names.push_back("DEMIO ||");
	names.push_back("DEMIO |||");
	names.push_back("DEMIO |V");
	models.push_back(EModel::MazdaDemio1);
	models.push_back(EModel::MazdaDemio2);
	models.push_back(EModel::MazdaDemio3);
	models.push_back(EModel::MazdaDemio4);
}

void Utils::_GetMazdaMPVModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("MPV ||");
	names.push_back("MPV |||");
	models.push_back(EModel::MazdaMPV2);
	models.push_back(EModel::MazdaMPV3);
}

void Utils::_GetMazdaRX8Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("RX8");
	models.push_back(EModel::MazdaRX8);
}

void Utils::_GetMazdaTributeModels(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("TRIBUTE |");
	names.push_back("TRIBUTE ||");

	models.push_back(EModel::MazdaTribute1);
	models.push_back(EModel::MazdaTribute2);
}

void Utils::_GetMazda3Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("MAZDA 3 ||");
	names.push_back("MAZDA 3 |||");
	names.push_back("MAZDA 3 |V");
	models.push_back(EModel::Mazda32);
	models.push_back(EModel::Mazda33);
	models.push_back(EModel::Mazda34);
}

void Utils::_GetMazda5Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("MAZDA 5 |");
	names.push_back("MAZDA 5 ||");

	models.push_back(EModel::Mazda51);
	models.push_back(EModel::Mazda52);
}

void Utils::_GetMazda6Models(std::vector<std::string>& names, std::vector<EModel>& models)
{
	names.push_back("MAZDA 6 |");
	names.push_back("MAZDA 6 ||");
	names.push_back("MAZDA 6 |||");
	models.push_back(EModel::Mazda61);
	models.push_back(EModel::Mazda62);
	models.push_back(EModel::Mazda63);
}