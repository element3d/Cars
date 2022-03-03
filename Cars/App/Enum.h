#ifndef __CARS_ENUM__
#define __CARS_ENUM__

#include <vector>
#include <string>

enum class EAppState
{
	SplashScreen,
	Main,
	Login,
	Garage,
	Driver,
	AutoPartsStore,
	AutoPartsMainMenu,
	AutoPartsSubMenuPage,
	AddAutoPart,
	Makes,
	Classes,
	Models,
	Cars,
	CarParts,
	AddCar,
	AddCarMakes,
	AddCarClasses,
	ViewCar,
	CarFilters,
	EventsPage,
	EventPage,
	ShowEventCar
};

enum class EUserType 
{
	Driver,
	AutoDiller,
	CarShowRoom,
	AutoPartsStore,
	ChopShop,
	AutoService
};

enum class EMainMenu
{
	Garage,
	NewCar,
	AutoParts,
	Tunning,
	Events
};

enum class EMode 
{
	Add,
	Edit,
	View,
	Filters
};

enum class EProvince
{
	All = -1,
	Erevan = 0,
	Armavir,
	Ararat,
	Aragacotn,
	Kotayk,
	Shirak,
	Lori,
	Gegharkunik,
	Syunik,
	Tavush,
	VayotsDzor,
	Artsakh
};

enum class ESubProvince
{
	All = -1,
	Erevan_Ajapnyak = 0,
	Erevan_Arabkir,
	Erevan_Avan,
	Erevan_Davitashen,
	Erevan_Erebuni,
	Erevan_KanakerZeytun,
	Erevan_Kentron,
	Erevan_MalatiaSebastia,
	Erevan_NorNork,
	Erevan_Shengavit,
	Erevan_NorkMarash,
	Erevan_Nubarashen
};

enum class EBodyType
{
	Sedan,
	Coupe,
	Hatchback,
	Convertible,
	Universal,
	SUV,
	Miniven,
	Pickup,
	Limusin,
	Furgon
};

enum class EEngineType
{
	Petrol,
	Diesel,
	Hybrid,
	Electro
};

enum class ETransmission
{
	Automatic,
	Manual,
	Robot,
	Variator
};

enum class ECarColor 
{
	All = -1,
	White = 0,
	Silver,
	Gray,
	Black,
	Brown,
	Gold,
	Red,
	Blue,
	Orange,
	Yellow,
	Green,
	Cyan,
	Maroon,
	Pink,
	Purple
};

enum class EDBUserColumn 
{
	Id,
	Phone,
	Password,
	Type,
	FirstName,
	SecondName,
	NumGolds,
	Reputation
};

enum class EDBCarsColumn
{
	Id,
	UserId,
	Make,
	Class,
	Model,
	Submodel,
	Country,
	Province,
	SubProvince,
	Price,
	BodyType,
	Year,
	EngineType,
	EngineSize,
	EnginePower,
	Acc0To100,
	Transmission,
	StearingWheel,
	Exchange,
	CustomsCleared,
	Color,
	Avatar,
	Images,
	OnSale
};

enum class EDBAutoPartColumn 
{
	Id,
	UserId,
	Country,
	Province,
	SubProvince,
	Type,
	Subtype,
	Originality,
	Condition,
	Price,
	Fits,
	Avatar,
	Images
};

enum class EDBEventsColumn
{
	Id,
	FirstName,
	SecondName,
	Image,
	CarModels,
	NumCars,
	StartDate,
	Status,
	WinnerUserId,
	WinnerCarId,
	Award1,
	Award2,
	Award3,
	Award,
	Awarded
};

enum class EDBEventVotesColumn
{
	EventId,
	UserId,
	CarId
};



#include "DBCar.h"

struct DBUser
{
	int Id;
	std::string Phone;
	std::string Password;
	EUserType Type;
	std::string FirstName;
	std::string SecondName;
	int NumGolds;
	float Reputation;
};

struct DBEventVote 
{
	int EventId;
	int UserId;
	int CarId;
};

enum class EAutoPartType 
{
	All = -1,
	BodyParts,
	Brakes,
	Engine,
	Interior,
	Transmission,
	Wheels,
	Begin = BodyParts,
	End = Wheels
};

enum class EAutoPartSubType
{
	BodyPartBumpers,
	BodyParDoors,
	BodyParEmblems,
	BodyParFenders,
	BodyParHood,
	BodyParMirrors,
	BodyParWindows,
	Begin = BodyPartBumpers,
	End = BodyParWindows
};

enum class EOriginality
{
	All,
	Original,
	Replacement
};

enum class ECondition
{
	All,
	New,
	Used
};

enum class EMake 
{
	All = -1,
	Bmw = 0,
	MercedesBenz,
	Audi,
	Porsche,
	Lexus,
	Infiniti,
	Toyota,
	Nissan,
	Ford,
	Chevrolet,
	Volkswagen,
	Opel,
	Mitsubishi,
	// Bentley,
	Kia,
	Hyundai,
	Honda,
	Mazda
};

enum class ESerie
{
	All = -1,
	Bmw1 = 0,
	Bmw2,
	Bmw3,
	Bmw4,
	Bmw5,
	Bmw6,
	Bmw7,
	BmwX1,
	BmwX3,
	BmwX4,
	BmwX5,
	BmwX6,
	BmwX7,
	BmwZ4,
	BmwM,
	/* MercedesBenz */
	MercedesBenz190Class,
	MercedesBenzAClass,
	MercedesBenzBClass,
	MercedesBenzCClass,
	MercedesBenzEClass,
	MercedesBenzSClass,
	MercedesBenzCLClass,
	MercedesBenzCLAClass,
	MercedesBenzCLKClass,
	MercedesBenzCLSClass,
	MercedesBenzMLClass,
	MercedesBenzGClass,
	MercedesBenzGLClass,
	MercedesBenzGLAClass,
	MercedesBenzGLCCLass,
	MercedesBenzGLEClass,
	MercedesBenzGLKClass,
	MercedesBenzGLSClass,
	MercedesBenzRClass,
	MercedesBenzSLClass,
	MercedesBenzSLKClass,
	MercedesBenzVClass,
	MercedesBenzSprinter,
	MercedesBenzVaneo,
	MercedesBenzViano,
	MercedesBenzVito,
	MercedesBenzAMG,
	/* Audi */
	AudiA3,
	AudiA4,
	AudiA5,
	AudiA6,
	AudiA7,
	AudiA8,
	AudiQ5,
	AudiQ7,
	AudiTT,
	AudiRS,
	/* Porsche */
	PorscheCayenne,
	PorscheMacan,
	PorschePanamera,
	/* Lexus */
	LexusCT,
	LexusIS,
	LexusES,
	LexusGS,
	LexusLS,
	LexusNX,
	LexusRX,
	LexusGX,
	LexusLX,
	LexusF,
	/* Infiniti */
	InfinitiEXSeries,
	InfinitiJXSeries,
	InfinitiFXSeries,
	InfinityGSeries,
	InfinityMSeries,
	InfinitiQ3Series,
	InfinitiQX4Series,
	InfinitiQX50Series,
	InfinitiQX56Series,
	InfinitiQX60Series,
	InfinitiQX70Series,
	InfinitiQX80Series,
	/* Toyota */
	ToyotaAlphard,
	ToyotaAltezza,
	ToyotaAvalon,
	ToyotaAvensis,
	ToyotaBelta,
	ToyotaBlade,
	ToyotaCHR,
	ToyotaCamry,
	ToyotaCorolla,
	ToyotaEstima,
	ToyotaFJCruiser,
	ToyotaFortuner,
	ToyotaHarrier,
	ToyotaHighlander,
	ToyotaHilux,
	ToyotaIpsum,
	ToyotaIst,
	ToyotaLandCruiser,
	ToyotaLandCruiserPrado,
	ToyotaNoah,
	ToyotaPasso,
	ToyotaPrius,
	ToyotaRAV4,
	ToyotaSequoia,
	ToyotaSienna,
	ToyotaTacoma,
	ToyotaTundra,
	ToyotaVellfire,
	ToyotaVitz,
	ToyotaVoxy,
	ToyotaYaris,
	/* Nissan */
	NissanAlmera,
	NissanAltima,
	NissanArmada,
	NissanBluebird,
	NissanCube,
	NissanElgrand,
	NissanFrontier,
	NissanFuga,
	NissanJuke,
	NissanKicks,
	NissanLatio,
	NissanLeaf,
	NissanMarch,
	NissanMaxima,
	NissanMicra,
	NissanMurano,
	NissanNote,
	NissanPathfinder,
	NissanPatrol,
	NissanPresage,
	NissanQashqai,
	NissanQuest,
	NissanRogue,
	NissanSentra,
	NissanSerena,
	NissanSkyline,
	NissanSunny,
	NissanTeana,
	NissanTerrano,
	NissanTiida,
	NissanVersa,
	NissanXTrail,
	NissanXTerra,
	Nissan350Z,
	/* Ford */
	FordEdge,
	FordEscape,
	FordExplorer,
	FordF150,
	FordFiesta,
	FordFocus,
	FordFusion,
	FordTaurus,
	FordTransit,
	FordMustang,
	/* Chevrolet */
	ChevroletAvalanche,
	ChevroletAveo,
	ChevroletCaptiva,
	ChevroletCruze,
	ChevroletEpica,
	ChevroletEquinox,
	ChevroletMalibu,
	ChevroletNiva,
	ChevroletTahoe,
	ChevroletTrailBlazer,
	ChevroletVolt,
	ChevroletCamaro,
	ChevroletCorvette,
	/* Volkswagen */
	VolkswagenBeetle,
	VolkswagenBora,
	VolkswagenCaddy,
	VolkswagenCrafter,
	VolkswagenGolf,
	VolkswagenJetta,
	VolkswagenPassat,
	VolkswagenPassatCC,
	VolkswagenPolo,
	VolkswagenRoutan,
	VolkswagenTiguan,
	VolkswagenTouareg,
	VolkswagenTouran,
	VolkswagenTransporter,
	VolkswagenVento,
	/* Opel */
	OpelAstra,
	OpelCombo,
	OpelCorsa,
	OpelFrontera,
	OpelInsignia,
	OpelMeriva,
	OpelOmega,
	OpelSignum,
	OpelSintra,
	OpelVectra,
	OpelZafira,
	/* Mitsubishi */
	MitsubishiAirtrek,
	MitsubishiChariot,
	MitsubishiColt,
	MitsubishiGalant,
	MitsubishiGrandis,
	MitsubishiLancer,
	MitsubishiMontero,
	MitsubishiOutlander,
	MitsubishiPajero,
	/* KIA */
	KIACadenza,
	KIACerato,
	KIAForte,
	KIAK5,
	KIAOptima,
	KIARio,
	KIASedona,
	KIASorento,
	KIASportage,
	/* Hyundai */
	HyundaiAccent,
	HyundaiCreta,
	HyundaiElantra,
	HyundaiGenesis,
	HyundaiGenesisCoupe,
	HyundaiIX35,
	HyundaiKona,
	HyundaiSantaFe,
	HyundaiSolaris,
	HyundaiSonata,
	HyundaiTucson,
	HyundaiVeloster,
	/* Honda */
	HondaAccord,
	HondaCivic,
	HondaCRV,
	HondaCrosstour,
	HondaElyson,
	HondaFit,
	HondaHRV,
	HondaOdyssey,
	HondaPilot,
	HondaRidgeline,
	HondaStepwgn,
	/* Mazda */
	MazdaAtenza,
	MazdaCX3,
	MazdaCX5,
	MazdaCX7,
	MazdaCX9,
	MazdaDemio,
	MazdaMPV,
	MazdaRX8,
	MazdaTribute,
	Mazda3,
	Mazda5,
	Mazda6,

};

enum class EModel 
{
	/* BMW1 */
	Bmw1E81 = 0,
	Bmw1E82,
	Bmw1E87,
	Bmw1E88,
	Bmw1F20,
	Bmw1F21,
	Bmw1F40,
	Bmw1F52,
	/* BMW2 */
	Bmw2F22,
	Bmw2F23,
	Bmw2F45,
	Bmw2F46,
	Bmw2F44,
	Bmw2G42,
	/* BMW3 */
	Bmw3E30,
	Bmw3E36,
	Bmw3E46,
	Bmw3E90,
	Bmw3E92,
	Bmw3F30,
	Bmw3G20,
	/* BMW4 */
	Bmw4F32,
	Bmw4F33,
	Bmw4F36,
	Bmw4G22,
	Bmw4G23,
	Bmw4G26,
	/* BMW5 */
	Bmw5E34,
	Bmw5E39,
	Bmw5E60,
	Bmw5E61,
	Bmw5F10,
	Bmw5F11,
	Bmw5F07,
	Bmw5F18,
	Bmw5G30,
	Bmw5G31,
	Bmw5G38,
	/* BMW6 */
	Bmw6E63,
	Bmw6E64,
	Bmw6F06,
	Bmw6F12,
	Bmw6F13,
	Bmw6G32,
	/* BMW7 */
	Bmw7E38,
	Bmw7E65,
	Bmw7E66,
	Bmw7E67,
	Bmw7F68,
	Bmw7F01,
	Bmw7F02,
	Bmw7F03,
	Bmw7F04,
	Bmw7G11,
	Bmw7G12,
	/* BMWX1 */
	BmwX1E84,
	BmwX1F48,
	/* BMWX3 */
	BmwX3E83,
	BmwX3F25,
	BmwX3G01,
	/* BMWX4 */
	BmwX4F26,
	BmwX4G02,
	/* BMWX5 */
	BmwX5E53,
	BmwX5E70,
	BmwX5F15,
	BmwX5G05,
	/* BMWX6 */
	BmwX6E71,
	BmwX6F16,
	BmwX6G06,
	/* BMWX7 */
	BmwX7G07,
	/* BMWZ4 */
	BmwZ4E85,
	BmwZ4E86,
	BmwZ4E89,
	BmwZ4G29,
	/* MB 190 */
	MercedesBenz190W201,
	/* MB A */
	MercedesBenzAW168,
	MercedesBenzAW169,
	MercedesBenzAW176,
	MercedesBenzAW177,
	/* MB B */
	MercedesBenzBW245,
	MercedesBenzBW246,
	MercedesBenzBW247,
	/* MB C Class */
	MercedesBencCW202,
	MercedesBencCW203,
	MercedesBencCW204,
	MercedesBencCW205,
	MercedesBencCW206,
	/* MB E Class */
	MercedesBencEW124,
	MercedesBencEW210,
	MercedesBencEW211,
	MercedesBencEW212,
	MercedesBencEC207,
	MercedesBencEA207,
	MercedesBencEW213,
	/* MB S Class */
	MercedesBencSW140,
	MercedesBencSW220,
	MercedesBencSW221,
	MercedesBencSW222,
	MercedesBencSW223,
	/* MB CL Class */
	MercedesBencCLC140,
	MercedesBencCLC215,
	MercedesBencCLC216,
	/* MB CLA Class */
	MercedesBencCLAC117,
	/* MB CLK Class */
	MercedesBencCLKC208,
	MercedesBencCLKA208,
	MercedesBencCLKC209,
	MercedesBencCLKA209,
	/* MB CLS Class */
	MercedesBencCLSC219,
	MercedesBencCLSC256,
	/* MB ML Class */
	MercedesBencMLW163,
	MercedesBencMLW164,
	MercedesBencMLW166,
	MercedesBencMLW167,
	/* MB G Class */
	MercedesBencGW463,
	/* MB GL Class */
	MercedesBencGLX164,
	MercedesBencGLX166,
	/* MB GLA Class */
	MercedesBencGLAX156,
	MercedesBencGLAH247,
	/* MB GLC Class */
	MercedesBencGLCX253,
	MercedesBencGLCC253,
	/* MB GLE Class */
	MercedesBencGLEV167,
	/* MB GLK Class */
	MercedesBencGLKX204,
	/* MB GLS Class */
	MercedesBencGLSX167,
	/* MB R Class */
	MercedesBencRW251,
	/* MB SL Class */
	MercedesBencSLR230,
	MercedesBencSLR231,
	/* MB SLK Class */
	MercedesBencSLKR170,
	MercedesBencSLKR171,
	MercedesBencSLKR172,
	/* MB V Class */
	MercedesBencVW638,
	MercedesBencVW639,
	MercedesBencVW447,
	/* MB SPRINTER Class */
	MercedesBencSprinterW901,
	MercedesBencSprinterW905,
	MercedesBencSprinternNCV3,
	/* MB Vaneo Class */
	MercedesBencVaneoW414,
	/* MB Viano Class */
	MercedesBencViano,
	/* MB Vito Class */
	MercedesBencVito,
	/* Audi */
	/* Audi A3 */
	AudiA38L,
	AudiA38P,
	AudiA38V,
	AudiA38Y,
	/* Audi A4 */
	AudiA4B5,
	AudiA4B6,
	AudiA4B7,
	AudiA4B8,
	AudiA4B9,
	/* Audi A5 */
	AudiA58T,
	AudiA5F5,
	/* Audi A6 */
	AudiA6C5,
	AudiA6C6,
	AudiA6C7,
	AudiA6C8,
	/* Audi A7 */
	AudiA7G4,
	AudiA74K,
	/* Audi A8 */
	AudiA8D2,
	AudiA8D3,
	AudiA8D4,
	AudiA8D5,
	/* Audi Q5 */
	AudiQ58R,
	AudiQ5FY,
	/* Audi Q7 */
	AudiQ74L,
	AudiQ74M,
	/* Audi TT */
	AudiTT8N,
	AudiTT8J,
	AudiTT8S,
	/* Porsche */
	/* Porsche Cayenne*/
	PorscheCayenne1,
	PorscheCayenne2,
	PorscheCayenne3,
	/* Porsche Macan*/
	PorscheMacan1,
	/* Porsche Panamera*/
	PorschePanamera1,
	PorschePanamera2,
	/* Lexus */
	/* Lexus CT*/
	LexusCT1,
	/* Lexus IS*/
	LexusIS1,
	LexusIS2,
	LexusIS3,
	/* Lexus ES*/
	LexusES4,
	LexusES5,
	LexusES6,
	LexusES7,
	/* Lexus GS*/
	LexusGS2,
	LexusGS3,
	LexusGS4,
	/* Lexus LS*/
	LexusLS4,
	LexusLS5,
	/* Lexus NX*/
	LexusNX1,
	LexusNX2,
	/* Lexus RX*/
	LexusRX1,
	LexusRX2,
	LexusRX3,
	LexusRX4,
	/* Lexus GX*/
	LexusGX1,
	LexusGX2,
	/* Lexus LX*/
	LexusLX2,
	LexusLX3,
	/* Infiniti*/
	/* Infiniti EX*/
	InfinitiEX1J50,
	/* Infiniti FX*/
	InfinitiFX1S50,
	InfinitiFX2S51,
	/* Infiniti JX*/
	InfinitiJX1,
	/* Infiniti G*/
	InfinitiG3,
	InfinitiG4,
	/* Infiniti M*/
	InfinitiM3,
	InfinitiM4,
	/* Infiniti Q*/
	InfinitiQ3,
	/* Infiniti QX4*/
	InfinitiQX4,
	/* Infiniti QX50*/
	InfinitiQX501,
	InfinitiQX502,
	/* Infiniti QX56*/
	InfinitiQX561,
	InfinitiQX562,
	/* Infiniti QX60*/
	InfinitiQX601,
	/* Infiniti QX70*/
	InfinitiQX70,
	/* Infiniti QX80*/
	InfinitiQX801,
	InfinitiQX802,
	/* Toyota */
	/* Toyota Aplphard */
	ToyotaAplphard1,
	ToyotaAplphard2,
	ToyotaAplphard3,
	/* Toyota Altezza */
	ToyotaAltezza,
	/* Toyota Avalon */
	ToyotaAvalon3,
	ToyotaAvalon4,
	ToyotaAvalon5,
	/* Toyota Avensis */
	ToyotaAvensis2,
	ToyotaAvensis3,
	/* Toyota Belta */
	ToyotaBelta,
	/* Toyota Blade */
	ToyotaBlade1E150,
	/* Toyota CHR */
	ToyotaCHR1,
	/* Toyota Camry */
	ToyotaCamryXV40,
	ToyotaCamryXV50,
	ToyotaCamryXV70,
	/* Toyota Corolla */
	ToyotaCorollaE140,
	ToyotaCorollaE160,
	ToyotaCorollaE210,
	/* Toyota Estima */
	ToyotaEstima2,
	ToyotaEstima3,
	/* Toyota FJCruiser */
	ToyotaFJCruiser,
	/* Toyota Fortuner */
	ToyotaFortuner1,
	ToyotaFortuner2,
	/* Toyota Harrier */
	ToyotaHarrierXU10,
	ToyotaHarrierXU30,
	ToyotaHarrierXU60,
	/* Toyota Highlander */
	ToyotaHighlanderU20,
	ToyotaHighlanderU40,
	ToyotaHighlanderU50,
	ToyotaHighlanderU70,
	/* Toyota Hilux */
	ToyotaHilux6,
	ToyotaHilux7,
	ToyotaHilux8,
	/* Toyota Ipsum */
	ToyotaIpsumM10,
	ToyotaIpsumM20,
	/* Toyota Ist */
	ToyotaIst1,
	ToyotaIst2,
	/* Toyota LandCruiser */
	ToyotaLandCruiser100,
	ToyotaLandCruiser200,
	ToyotaLandCruiser300,
	/* Toyota LandCruiserPrado */
	ToyotaLandCruiserPrado120,
	ToyotaLandCruiserPrado150,
	/* Toyota Noah */
	ToyotaNoahR60,
	ToyotaNoahR70,
	ToyotaNoahR80,
	/* Toyota Passo */
	ToyotaPasso1,
	ToyotaPasso2,
	ToyotaPasso3,
	/* Toyota Prius */
	ToyotaPriusXW10,
	ToyotaPriusXW20,
	ToyotaPriusXW30,
	ToyotaPriusXW50,
	/* Toyota RAV4 */
	ToyotaRAV4XA10,
	ToyotaRAV4XA20,
	ToyotaRAV4XA30,
	ToyotaRAV4CA40,
	ToyotaRAV4XA50,
	/* Toyota Sequoia */
	ToyotaSequoia1,
	ToyotaSequoia2,
	/* Toyota Sienna */
	ToyotaSienna1,
	ToyotaSienna2,
	ToyotaSienna3,
	ToyotaSienna4,
	/* Toyota Tacoma */
	ToyotaTacoma1,
	ToyotaTacoma2,
	ToyotaTacoma3,
	/* Toyota Tundra */
	ToyotaTundra1,
	ToyotaTundra2,
	/* Toyota Vellfire */
	ToyotaVellfire1,
	ToyotaVellfire2,
	/* Toyota Vitz */
	ToyotaVitzP10,
	ToyotaVitzXP90,
	ToyotaVitzXP130,
	/* Toyota Voxy */
	ToyotaVoxyR60,
	ToyotaVoxyR70,
	ToyotaVoxyR80,
	/* Toyota Yaris */
	ToyotaYaris,
	/* Nissan */
	/* Nissan Almera */
	NissanAlmeraN16,
	NissanAlmeraG15,
	/* Nissan Altima */
	NissanAltimaL32,
	NissanAltimaL33,
	NissanAltimaL34,
	/* Nissan Armada */
	NissanArmada1,
	NissanArmada2,
	/* Nissan Bluebird */
	NissanBluebird,
	/* Nissan Cube */
	NissanCubeZ10,
	NissanCubeZ11,
	NissanCubeZ12,
	/* Nissan Elgrand */
	NissanElgrandE50,
	NissanElgrandE51,
	NissanElgrandE52,
	/* Nissan Frontier */
	NissanFrontier,
	/* Nissan Fuga */
	NissanFuga1,
	NissanFuga2,
	/* Nissan Juke */
	NissanJuke1,
	NissanJuke2,
	/* Nissan Kicks */
	NissanKicks1,
	/* Nissan Latio */
	NissanLatioN71,
	/* Nissan Leaf */
	NissanLeafZE0,
	NissanLeafZE1,
	/* Nissan March */
	NissanMarchK12,
	NissanMarchK13,
	/* Nissan Maxima */
	NissanMaximaA34,
	NissanMaximaA35,
	NissanMaximaA36,
	/* Nissan Micra */
	NissanMicra3,
	NissanMicra4,
	NissanMicra5,
	/* Nissan Murano */
	NissanMuranoZ50,
	NissanMuranoZ51,
	NissanMuranoZ52,
	/* Nissan Note */
	NissanNote1,
	NissanNote2,
	/* Nissan Pathfinder */
	NissanPathfinder3,
	NissanPathfinder4,
	NissanPathfinder5,
	/* Nissan Patrol */
	NissanPatrolY61,
	NissanPatrolY62,
	/* Nissan Presage */
	NissanPresage1,
	NissanPresage2,	
	/* Nissan Qashqai */
	NissanQashqai1,
	NissanQashqai2,
	NissanQashqai3,
	/* Nissan Quest */
	NissanQuest3,
	NissanQuest4,
	/* Nissan Rogue */
	NissanRogue1,
	NissanRogue2,
	NissanRogue3,
	/* Nissan Sentra */
	NissanSentraB16,
	NissanSentraB17,
	NissanSentraB18,
	/* Nissan Serena */
	NissanSerenaC24,
	NissanSerenaC25,
	NissanSerenaC26,
	NissanSerenaC27,
	/* Nissan Skyline */
	NissanSkylineR34,
	NissanSkylineV35,
	NissanSkylineV36,
	NissanSkylineV37,
	/* Nissan Sunny */
	NissanSunnyN16,
	NissanSunnyB10,
	/* Nissan Teana */
	NissanTeana1,
	NissanTeana2,
	NissanTeana3,
	/* Nissan Terrano */
	NissanTerrano2,
	NissanTerrano3,
	/* Nissan Tiida */
	NissanTiida1,
	NissanTiida2,
	/* Nissan Versa */
	NissanVersa1,
	NissanVersa2,
	NissanVersa3,
	/* Nissan XTrail */
	NissanXTrail1,
	NissanXTrail2,
	NissanXTrail3,
	/* Nissan XTerra */
	NissanXTerra1,
	NissanXTerra2,
	/* Nissan 350Z */
	Nissan350Z,
	/* Ford */
	/* Ford Edge */
	FordEdge1,
	FordEdge2,
	/* Ford Escape */
	FordEscape1,
	FordEscape2,
	FordEscape3,
	FordEscape4,
	/* Ford Explorer */
	FordExplorer1,
	FordExplorer2,
	FordExplorer3,
	FordExplorer4,
	FordExplorer5,
	FordExplorer6,
	/* Ford F150 */
	FordF15010,
	FordF15011,
	FordF15012,
	FordF15013,
	/* Ford Fiesta */
	FordFiestaMK6,
	FordFiestaMK7,
	/* Ford Focus */
	FordFocus1,
	FordFocus2,
	FordFocus3,
	FordFocus4,
	/* Ford Fusion */
	FordFusion2,
	/* Ford Taurus */
	FordTaurus6,
	/* Ford Transit */
	FordTransit,
	/* Ford Mustang */
	FordMustang4,
	FordMustang5,
	FordMustang6,
	/* Chevrolet */
	/* Chevrolet Avalanche */
	ChevroletAvalanche1,
	ChevroletAvalanche2,
	/* Chevrolet Aveo */
	ChevroletAveo1,
	ChevroletAveo2,
	ChevroletAveo3,
	/* Chevrolet Captiva */
	ChevroletCaptiva1,
	/* Chevrolet Cruze */
	ChevroletCruze1,
	ChevroletCruze2,
	/* Chevrolet Epica */
	ChevroletEpicaV250,
	/* Chevrolet Equinox */
	ChevroletEquinox1,
	ChevroletEquinox2,
	ChevroletEquinox3,
	/* Chevrolet Malibu */
	ChevroletMalibu7,
	ChevroletMalibu8,
	ChevroletMalibu9,
	/* Chevrolet Niva */
	ChevroletNiva,
	/* Chevrolet Tahoe */
	ChevroletTahoe2,
	ChevroletTahoe3,
	ChevroletTahoe4,
	ChevroletTahoe5,
	/* Chevrolet TrailBlazer */
	ChevroletTrailBlazer1,
	ChevroletTrailBlazer2,
	ChevroletTrailBlazer3,
	/* Chevrolet Volt */
	ChevroletVolt1,
	ChevroletVolt2,
	/* Chevrolet Camaro */
	ChevroletCamaro5,
	ChevroletCamaro6,
	/* Chevrolet Corvette */
	ChevroletCorvette,
	/* Volkswagen */
	/* Volkswagen Beetle */
	VolkswagenBeetleA4,
	VolkswagenBeetleA5,
	/* Volkswagen Bora */
	VolkswagenBora1998,
	VolkswagenBora4,
	/* Volkswagen Caddy */
	VolkswagenCaddy2,
	VolkswagenCaddy3,
	VolkswagenCaddy4,
	VolkswagenCaddy5,
	/* Volkswagen Crafter */
	VolkswagenCrafter,
	/* Volkswagen Golf */
	VolkswagenGolf2,
	VolkswagenGolf3,
	VolkswagenGolf4,
	VolkswagenGolf5,
	VolkswagenGolf6,
	VolkswagenGolf7,
	VolkswagenGolf8,
	/* Volkswagen Jetta */
	VolkswagenJetta3,
	VolkswagenJetta4,
	VolkswagenJetta5,
	VolkswagenJetta6,
	VolkswagenJetta7,
		/* Volkswagen Passat */
		VolkswagenPassatB5,
		VolkswagenPassatB6,
		VolkswagenPassatB7,
		VolkswagenPassatB8,
		/* Volkswagen PassatCC */
		VolkswagenPassatCC1,
		/* Volkswagen Polo */
		VolkswagenPolo3,
		VolkswagenPolo4,
		VolkswagenPolo5,
		VolkswagenPolo6,
		/* Volkswagen Routan */
		VolkswagenRoutan,
		/* Volkswagen Tiguan */
		VolkswagenTiguan1,
		VolkswagenTiguan2,
		/* Volkswagen Touareg */
		VolkswagenTouareg1,
		VolkswagenTouareg2,
		VolkswagenTouareg3,
		/* Volkswagen Touran */
		VolkswagenTouran1,
		VolkswagenTouran2,
		VolkswagenTouran3,
		/* Volkswagen Transporter */
		VolkswagenTransporterT4,
		VolkswagenTransporterT5,
		VolkswagenTransporterT6,
		/* Volkswagen Vento */
		VolkswagenVento,
		/* Opel */
		/* Opel Astra*/
		OpelAstraF,
		OpelAstraG,
		OpelAstraH,
		OpelAstraJ,
		OpelAstraK,
		/* Opel Combo*/
		OpelComboC,
		OpelComboD,
		OpelComboE,
		OpelComboPCMA,
		/* Opel Corsa*/
		OpelCorsaA,
		OpelCorsaB,
		OpelCorsaC,
		OpelCorsaD,
		OpelCorsaE,
		OpelCorsaF,
		/* Opel Frontera*/
		OpelFronteraA,
		OpelFronteraB,
		/* Opel Insignia*/
		OpelInsignia1,
		OpelInsignia2,
		/* Opel Meriva*/
		OpelMerivaA,
		OpelMerivaB,
		/* Opel Omega*/
		OpelOmegaA,
		OpelOmegaB,
		/* Opel Signum*/
		OpelSignum,
		/* Opel Sintra*/
		OpelSintra,
		/* Opel Vectra*/
		OpelVectraA,
		OpelVectraB,
		OpelVectraC,
		/* Opel Zafira*/
		OpelZafiraA,
		OpelZafiraB,
		OpelZafiraC,
		/* Mitsubishi */
		/* Mitsubishi Airtrek*/
		MitsubishiAirtrek,
		/* Mitsubishi Chariot*/
		MitsubishiChariot2,
		MitsubishiChariot3,
		/* Mitsubishi Colt */
		MitsubishiColtZ30,
		/* Mitsubishi Galant */
		MitsubishiGalant8,
		MitsubishiGalant9,
		/* Mitsubishi Grandis */
		MitsubishiGrandis,
		/* Mitsubishi Lancer */
		MitsubishiLancer9,
		MitsubishiLancer10,
		/* Mitsubishi Montero */
		MitsubishiMontero3,
		MitsubishiMontero4,
		/* Mitsubishi Outlander */
		MitsubishiOutlander1,
		MitsubishiOutlander2,
		MitsubishiOutlander3,
		/* Mitsubishi Pajero */
		MitsubishiPajero2,
		MitsubishiPajero3,
		MitsubishiPajero4,
		/* Kia */
		/* KIACadenza */
		KIACadenza1,
		KIACadenza2,
		/* KIACerato */
		KIACerato1,
		KIACerato2,
		KIACerato3,
		/* KIAForte */
		KIAForte1,
		KIAForte2,
		KIAForte3,
		/* KIAK5 */
		KIAK51,
		KIAK52,
		KIAK53,
		/* KIAOptima */
		KIAOptima2,
		KIAOptima3,
		KIAOptima4,
		/* KIARio */
		KIARio2,
		KIARio3,
		KIARio4,
		/* KIASedona */
		KIASedona1,
		KIASedona2,
		KIASedona3,
		/* KIASorento */
		KIASorento1,
		KIASorento2,
		KIASorento3,
		KIASorento4,
		/* KIASportage */
		KIASportage2,
		KIASportage3,
		KIASportage4,
		/* Hyundai */
		/* HyundaiAccent */
		HyundaiAccent2,
		HyundaiAccent3,
		HyundaiAccent4,
		HyundaiAccent5,
		/* HyundaiCreta */
		HyundaiCreta1,
		HyundaiCreta2,
		/* HyundaiElantra */
		HyundaiElantra4,
		HyundaiElantra5,
		HyundaiElantra6,
		HyundaiElantra7,
		/* HyundaiGenesis */
		HyundaiGenesis1,
		HyundaiGenesis2,
		/* HyundaiGenesisCoupe */
		HyundaiGenesisCoupe1,
		/* HyundaiIX35, */
		HyundaiIX351,
		/* HyundaiKona */
		HyundaiKona1,
		/* HyundaiSantaFe */
		HyundaiSantaFe1,
		HyundaiSantaFe2,
		HyundaiSantaFe3,
		HyundaiSantaFe4,
		/* HyundaiSolaris */
		HyundaiSolaris1,
		HyundaiSolaris2,
		/* HyundaiSonata */
		HyundaiSonata5,
		HyundaiSonata6,
		HyundaiSonata7,
		HyundaiSonata8,
		/* HyundaiTucson */
		HyundaiTucson1,
		HyundaiTucson2,
		HyundaiTucson3,
		HyundaiTucson4,
		/* HyundaiVeloster */
		HyundaiVeloster1,
		HyundaiVeloster2,
		/* Honda */
		/* HondaAccord */
		HondaAccord7,
		HondaAccord8,
		HondaAccord9,
		HondaAccord10,
		/* HondaCivic */
		HondaCivic7,
		HondaCivic8,
		HondaCivic9,
		HondaCivic10,
		HondaCivic11,
		/* HondaCRV */
		HondaCRV1,
		HondaCRV2,
		HondaCRV3,
		HondaCRV4,
		HondaCRV5,
		/* HondaCrosstour */
		HondaCrosstour1,
		/* HondaElysion */
		HondaElysion1,
		/* HondaFit */
		HondaFit1,
		HondaFit2,
		HondaFit3,
			/* HondaHRV */
			HondaHRV1,
			HondaHRV2,
			/* HondaOdyssey */
			HondaOdyssey3,
			HondaOdyssey4,
			HondaOdyssey5,
			HondaOdyssey6,
			/* HondaPilot */
			HondaPilot1,
			HondaPilot2,
			HondaPilot3,
			/* HondaRidgeline */
			HondaRidgeline1,
			HondaRidgeline2,
			/* HondaStepwgn */
			HondaStepwgn2,
			HondaStepwgn3,
			HondaStepwgn4,
			HondaStepwgn5,
			/* Mazda */
			/* MazdaAtenza */
			MazdaAtenza1,
			MazdaAtenza2,
			MazdaAtenza3,
			/* MazdaCX3 */
			MazdaCX31,
			/* MazdaCX5 */
			MazdaCX51,
			MazdaCX52,
			/* MazdaCX7 */
			MazdaCX71,
			/* MazdaCX9 */
			MazdaCX91,
			MazdaCX92,
			/* MazdaDemio */
			MazdaDemio1,
			MazdaDemio2,
			MazdaDemio3,
			MazdaDemio4,
			/* MazdaMPV */
			MazdaMPV2,
			MazdaMPV3,
			/* MazdaRX8 */
			MazdaRX8,
			/* MazdaTribute */
			MazdaTribute1,
			MazdaTribute2,
			/* Mazda3 */
			Mazda32,
			Mazda33,
			Mazda34,
			/* Mazda5 */
			Mazda51,
			Mazda52,
			/* Mazda6 */
			Mazda61,
			Mazda62,
			Mazda63,

};

enum class ESubModel
{
	/*Bmw1E81*/
	Bmw1E81_116i,
	Bmw1E81_118i,
	Bmw1E81_120i,
	Bmw1E81_125i,
	Bmw1E81_128i,
	Bmw1E81_130i,
	Bmw1E81_135i,
	Bmw1E81_135is,
	Bmw1E81_116d,
	Bmw1E81_118d,
	Bmw1E81_120d,
	Bmw1E81_123d,

	/* Bmw1F20/F21 */
	Bmw1F20_114i,
	Bmw1F20_116i,
	Bmw1F20_118i,
	Bmw1F20_120i,
	Bmw1F20_125i,
	Bmw1F20_135i,
	Bmw1F20_140i,
	Bmw1F20_114d,
	Bmw1F20_116d,
	Bmw1F20_118d,
	Bmw1F20_120d,
	Bmw1F20_125d,

	/* Bmw1F40/F52 */
	Bmw1F40_218i,
	Bmw1F40_220i,
	Bmw1F40_228i,
	Bmw1F40_230i,
	Bmw1F40_235i,
	Bmw1F40_240i,
	Bmw1F40_240i_xDrive,
	Bmw1F40_218d,
	Bmw1F40_220d,
	Bmw1F40_225d,

	/* Bmw2F22 */
	Bmw2F22_218i,
	Bmw2F22_220i,
	Bmw2F22_228i,
	Bmw2F22_230i,
	Bmw2F22_235i,
	Bmw2F22_240i,
	Bmw2F22_240i_xDrive,
	Bmw2F22_218d,
	Bmw2F22_220d,
	Bmw2F22_225d,

	/* Bmw2G42 */
	Bmw2G42_220i,
	Bmw2G42_230i,
	Bmw2G42_220d,

	/* Bmw3E30 */
	Bmw3E30_316i,
	Bmw3E30_318i,
	Bmw3E30_318is,
	Bmw3E30_320i,
	Bmw3E30_323i,
	Bmw3E30_325e,
	Bmw3E30_325i,
	Bmw3E30_324d,
	Bmw3E30_324td,

	/* Bmw3E36 */
	Bmw3E36_316i,
	Bmw3E36_318i,
	Bmw3E36_318is,
	Bmw3E36_320i,
	Bmw3E36_323i,
	Bmw3E36_325i,
	Bmw3E36_328i,
	Bmw3E36_318td,
	Bmw3E36_325td,
	Bmw3E36_325tds,

	/* Bmw3E46 */
	Bmw3E46_316i,
	Bmw3E46_318i,
	Bmw3E46_320i,
	Bmw3E46_323i,
	Bmw3E46_325i,
	Bmw3E46_328i,
	Bmw3E46_330i,
	Bmw3E46_330i_ZHP,
	Bmw3E46_318d,
	Bmw3E46_320d,
	Bmw3E46_330d,

	/* Bmw3E90/92 */
	Bmw3E90_316i,
	Bmw3E90_318i,
	Bmw3E90_320i,
	Bmw3E90_323i,
	Bmw3E90_325i,
	Bmw3E90_325xi,
	Bmw3E90_325i_xDrive,
	Bmw3E90_328i,
	Bmw3E90_330i,
	Bmw3E90_330xi,
	Bmw3E90_330i_xDrive,
		Bmw3E90_335i,
		Bmw3E90_335xi,
		Bmw3E90_335i_xDrive,
		Bmw3E90_316d,
	Bmw3E90_318d,
	Bmw3E90_320d,
		Bmw3E90_320d_xDrive,
	Bmw3E90_335d,

	/* Bmw3F30 */
	Bmw3F30_316i,
		Bmw3F30_318i,
	Bmw3F30_320i,
	Bmw3F30_328i,
	Bmw3F30_335i,
		Bmw3F30_340i,
		Bmw3F30_316d,
		Bmw3F30_318d,
		Bmw3F30_320d,
		Bmw3F30_325d,
		Bmw3F30_330d,
		Bmw3F30_335d,

		/* Bmw3G20 */
		Bmw3G20_318i,
		Bmw3G20_320i,
		Bmw3G20_320e,
		Bmw3G20_330i,
		Bmw3G20_330e,
		Bmw3G20_340i,
		Bmw3G20_318d,
		Bmw3G20_320d,
		Bmw3G20_330d,
		Bmw3G20_340d,

		/* Bmw4F32/F33/F36 */
		Bmw4F32_418i,
		Bmw4F32_420i,
		Bmw4F32_428i,
		Bmw4F32_430i,
		Bmw4F32_435i,
		Bmw4F32_440i,
		Bmw4F32_418d,
		Bmw4F32_420d,
		Bmw4F32_425d,
		Bmw4F32_430d,
		Bmw4F32_435d,

		/* Bmw4G26 */
		Bmw4G26_420i,
		Bmw4G26_420i_xDrive,
		Bmw4G26_430i,
		Bmw4G26_430i_xDrive,
		Bmw4G26_440i,
		Bmw4G26_440i_xDrive,
		Bmw4G26_420d,
		Bmw4G26_420d_xDrive,
		Bmw4G26_430d_xDrive,
		Bmw4G26_440d_xDrive,

		/* Bmw5E34 */
		Bmw5E34_518i,
		Bmw5E34_520i,
		Bmw5E34_525i,
		Bmw5E34_530i,
		Bmw5E34_535i,
		Bmw5E34_540i,
		Bmw5E34_524td,
		Bmw5E34_525td,
		Bmw5E34_525tds,

		/* Bmw5E39 */
		Bmw5E39_520i,
		Bmw5E39_523i,
		Bmw5E39_525i,
		Bmw5E39_528i,
		Bmw5E39_530i,
		Bmw5E39_535i,
		Bmw5E39_540i,
		Bmw5E39_520d,
		Bmw5E39_525d,
		Bmw5E39_525td,
		Bmw5E39_525tds,
		Bmw5E39_530d,

		/* Bmw5E60 */
		Bmw5E60_520i,
		Bmw5E60_523i,
		Bmw5E60_525i,
		Bmw5E60_528i,
		Bmw5E60_530i,
		Bmw5E60_535i,
		Bmw5E60_540i,
		Bmw5E60_545i,
		Bmw5E60_550i,
		Bmw5E60_520d,
		Bmw5E60_525d,
		Bmw5E60_530d,
		Bmw5E60_535d,

			/* Bmw5F10 */
			Bmw5F10_520i,
			Bmw5F10_523i,
			Bmw5F10_528i,
			Bmw5F10_530i,
			Bmw5F10_535i,
			Bmw5F10_550i,
			Bmw5F10_518d,
			Bmw5F10_520d,
			Bmw5F10_525d,
			Bmw5F10_530d,
			Bmw5F10_535d,
		Bmw5F10_550d,

		/* Bmw5G30 */
		Bmw5G30_520i,
		Bmw5G30_520ei,
		Bmw5G30_530i,
		Bmw5G30_530ei,
		Bmw5G30_540i,
			Bmw5G30_545ei,
		Bmw5G30_550i_xDrive,
		Bmw5G30_518d,
		Bmw5G30_520d,
		Bmw5G30_525d,
		Bmw5G30_530d,
		Bmw5G30_540d_xDrive,
		Bmw5G30_550d_xDrive,

			/* Bmw6E63 */
			Bmw6E63_630ci,
			Bmw6E63_630i,
			Bmw6E63_645ci,
			Bmw6E63_650i,
			Bmw6E63_635d,

			/* Bmw6F12 */
			Bmw6F12_640i,
			Bmw6F12_650i,
			Bmw6F12_640d,

			/* Bmw6G32 */
			Bmw6G32_630i,
			Bmw6G32_640i,
			Bmw6G32_640i_xDrive,
			Bmw6G32_620d,
			Bmw6G32_630d_xDrive,
			Bmw6G32_630d,
			Bmw6G32_640d_xDrive,

			/* Bmw7E38 */
			Bmw7E38_728i,
			Bmw7E38_728iL,
			Bmw7E38_730i,
			Bmw7E38_730iL,
			Bmw7E38_735i,
			Bmw7E38_735iL,
			Bmw7E38_740i,
			Bmw7E38_740iL,
			Bmw7E38_740iLP,
			Bmw7E38_750i,
			Bmw7E38_750iL,
			Bmw7E38_750iLP,
			Bmw7E38_750iLS,
			Bmw7E38_725td,
			Bmw7E38_730d,
			Bmw7E38_740d,

			/* Bmw7E65 */
			Bmw7E65_730i,
			Bmw7E65_735i,
			Bmw7E65_740i,
			Bmw7E65_745i,
			Bmw7E65_750i,
			Bmw7E65_760i,
			Bmw7E65_730d,
			Bmw7E65_740d,
			Bmw7E65_745d,

			/* Bmw7F01 */
			Bmw7F01_730i,
			Bmw7F01_740i,
			Bmw7F01_750i,
			Bmw7F01_760i,
			Bmw7F01_ActiveHybrid7,
			Bmw7F01_AlpinaB7,
			Bmw7F01_730d,
			Bmw7F01_740d,
			Bmw7F01_750d,

			/* Bmw7G11 */
			Bmw7G11_730i,
			Bmw7G11_740i,
			Bmw7G11_740ei,
			Bmw7G11_745ei,
			Bmw7G11_750i1,
			Bmw7G11_750i2,
			Bmw7G11_760i1,
			Bmw7G11_760i2,
			Bmw7G11_AlpinaB7,
			Bmw7G11_730d,
			Bmw7G11_740d,
			Bmw7G11_750d,

			/* BmwX1E84 */
			BmwX1E84_16i,
			BmwX1E84_18i,
			BmwX1E84_20i,
			BmwX1E84_28i,
			BmwX1E84_25i_xDrive,
			BmwX1E84_35i_xDrive,
			BmwX1E84_16d,
			BmwX1E84_18d,
			BmwX1E84_20d,
			BmwX1E84_23d_xDrive,
			BmwX1E84_25d_xDrive,

			/* BmwX1F48 */
			BmwX1F48_18i,
			BmwX1F48_20i,
			BmwX1F48_25i_xDrive,
			BmwX1F48_25e_xDrive,
			BmwX1F48_16d,
			BmwX1F48_18d,
			BmwX1F48_20d,
			BmwX1F48_25d_xDrive,

			/* BmwX3E83 */
			BmwX3E83_20i,
			BmwX3E83_25i,
			BmwX3E83_25i_xDrive,
			BmwX3E83_30i,
			BmwX3E83_30i_xDrive,
			BmwX3E83_18d_xDrive,
			BmwX3E83_20d,
			BmwX3E83_20d_xDrive,
			BmwX3E83_30d,
			BmwX3E83_30d_xDrive,
			BmwX3E83_35d_xDrive,

			/* BmwX3F25 */
			BmwX3F25_20i,
			BmwX3F25_20i_xDrive,
			BmwX3F25_28i_xDrive,
			BmwX3F25_35i_xDrive,
			BmwX3F25_18d,
			BmwX3F25_20d_xDrive,
			BmwX3F25_28d_xDrive,
			BmwX3F25_30d_xDrive,
			BmwX3F25_35d_xDrive,

			/* BmwX3G01 */
			BmwX3G01_20i_xDrive,
			BmwX3G01_30i,
			BmwX3G01_30i_xDrive,
			BmwX3G01_30e_xDrive,
			BmwX3G01_40i,
			BmwX3G01_20d_xDrive,
			BmwX3G01_30d_xDrive,
			BmwX3G01_40d,

			/* BmwX4F26 */
			BmwX4F26_20i_xDrive,
			BmwX4F26_28i_xDrive,
			BmwX4F26_35i_xDrive,
			BmwX4F26_M40i1,
			BmwX4F26_M40i2,
			BmwX4F26_20d_xDrive,
			BmwX4F26_30d_xDrive,
			BmwX4F26_35d_xDrive,

			/* BmwX4G02 */
			BmwX4G02_20i_xDrive,
			BmwX4G02_30i_xDrive,
			BmwX4G02_M40i,
			BmwX4G02_20d_xDrive,
			BmwX4G02_25d_xDrive,
			BmwX4G02_30d_xDrive,
			BmwX4G02_40d,

			/* BmwX5E53 */
			BmwX5E53_30i,
			BmwX5E53_44i,
			BmwX5E53_46is,
			BmwX5E53_48is,
			BmwX5E53_30d,

			/* BmwX5E70 */
			BmwX5E70_30si,
			BmwX5E70_30i_xDrive,
			BmwX5E70_35i_xDrive,
			BmwX5E70_48i,
			BmwX5E70_48i_xDrive,
			BmwX5E70_50i_xDrive,
			BmwX5E70_30d,
			BmwX5E70_30d_xDrive1,
			BmwX5E70_30d_xDrive2,
			BmwX5E70_35d_xDrive,
			BmwX5E70_40d_xDrive,
			BmwX5E70_M50d,

			/* BmwX5F15 */
			BmwX5F15_35i,
			BmwX5F15_35i_xDrive,
			BmwX5F15_40e_xDrive,
			BmwX5F15_50i_xDrive,
			BmwX5F15_25d,
			BmwX5F15_25d_xDrive,
			BmwX5F15_30d_xDrive,
			BmwX5F15_40d_xDrive,
			BmwX5F15_M50d,

			/* BmwX5G05 */
			BmwX5G05_30i_xDrive,
			BmwX5G05_40i,
			BmwX5G05_40i_xDrive,
			BmwX5G05_45e_xDrive,
			BmwX5G05_50i_xDrive,
			BmwX5G05_M50i,
			BmwX5G05_25d_xDrive,
			BmwX5G05_30d_xDrive,
			BmwX5G05_40d_xDrive,
			BmwX5G05_M50d,

			/* BmwX6E71 */
			BmwX6E71_35i_xDrive,
			BmwX6E71_50i_xDrive,
			BmwX6E71_ActiveHybrid,
			BmwX6E71_30d_xDrive,
			BmwX6E71_35d_xDrive,
			BmwX6E71_40d_xDrive,
			BmwX6E71_M50d,

			/* BmwX6F16 */
			BmwX6F16_35i,
			BmwX6F16_35i_xDrive,
			BmwX6F16_50i_xDrive,
			BmwX6F16_30d_xDrive,
			BmwX6F16_40d_xDrive,
			BmwX6F16_M50d,

			/* BmwX6G06 */
			BmwX6G06_40i_xDrive,
			BmwX6G06_M50i_xDrive,
			BmwX6G06_30d_xDrive,
			BmwX6G06_40d_xDrive,
			BmwX6G06_M50d,

			/* BmwX7G07 */
			BmwX7G07_40i_xDrive,
			BmwX7G07_50i_xDrive,
			BmwX7G07_M50i,
			BmwX7G07_AlpinaXB7,
			BmwX7G07_30d_xDrive,
			BmwX7G07_40d_xDrive,
			BmwX7G07_M50d,

			/* BmwZ4E85 */
			BmwZ4E85_20i,
			BmwZ4E85_22i,
			BmwZ4E85_25i,
			BmwZ4E85_25si,
			BmwZ4E85_30i,
			BmwZ4E85_30si,			

			/* BmwZ4E89 */
			BmwZ4E89_18i,
			BmwZ4E89_20i,
			BmwZ4E89_23i,
			BmwZ4E89_28i,
			BmwZ4E89_30i,
			BmwZ4E89_35i,
			BmwZ4E89_35is,

			/* BmwZ4G29 */
			BmwZ4G29_20i,
			BmwZ4G29_30i,
			BmwZ4G29_M40i,

			/* MercedesBenz */
			/* MercedesBenz190W201 */
			MercedesBenz190W201,

			/* MercedesBenzAW168 */
			MercedesBenzAW168_A140,
			MercedesBenzAW168_A160,
			MercedesBenzAW168_A190,
			MercedesBenzAW168_A210,
			MercedesBenzAW168_A32K_AMG,
			MercedesBenzAW168_A38_AMG,
			MercedesBenzAW168_A160d,
			MercedesBenzAW168_A170d,
			/* MercedesBenzAW176 */
			MercedesBenzAW176_A160,
			MercedesBenzAW176_A180,
			MercedesBenzAW176_A200,
			MercedesBenzAW176_A220,
			MercedesBenzAW176_A250,
			MercedesBenzAW176_A250_4Matic,
			MercedesBenzAW176_A45_AMG1,
			MercedesBenzAW176_A45_AMG2,
			MercedesBenzAW176_A160d,
			MercedesBenzAW176_A180d,
			MercedesBenzAW176_A200d,
			MercedesBenzAW176_A220d,
			/* MercedesBenzBW245 */
			MercedesBenzBW245_B160,
			MercedesBenzBW245_B170,
			MercedesBenzBW245_B180,
			MercedesBenzBW245_B200,
			MercedesBenzBW245_B200_Turbo,
			MercedesBenzBW245_B180d,
			MercedesBenzBW245_B200d,
			/* MercedesBenzBW246 */
			MercedesBenzBW246_B180,
			MercedesBenzBW246_B200,
			MercedesBenzBW246_B220_4Matic,
			MercedesBenzBW246_B250,
			MercedesBenzBW246_B160d,
			MercedesBenzBW246_B180d,
			MercedesBenzBW246_B200d,
			MercedesBenzBW246_B220d,
			/* MercedesBenzBW247 */
			MercedesBenzBW247_B160,
			MercedesBenzBW247_B180,
			MercedesBenzBW247_B200_4Matic,
			MercedesBenzBW247_B220,
			MercedesBenzBW247_B220_4Matic,
			MercedesBenzBW247_B250,
			MercedesBenzBW247_B250_4Matic,
			MercedesBenzBW247_B250e,
			MercedesBenzBW247_B160d,
			MercedesBenzBW247_B180d,
			MercedesBenzBW247_B200d,
			MercedesBenzBW247_B200d_4Matic,
			MercedesBenzBW247_B220d,
			MercedesBenzBW247_B220d_4Matic,
				/* MercedesBencCW202 */
				MercedesBencCW202_C180,
				MercedesBencCW202_C200,
				MercedesBencCW202_C200_Kompressor,
				MercedesBencCW202_C220,
				MercedesBencCW202_C230,
				MercedesBencCW202_C230_Kompressor,
				MercedesBencCW202_C240,
				MercedesBencCW202_C280,
				MercedesBencCW202_C36_AMG,
				MercedesBencCW202_C43_AMG,
				MercedesBencCW202_C55_AMG,
				MercedesBencCW202_C200d,
				MercedesBencCW202_C220d,
				MercedesBencCW202_C250d,
				/* MercedesBencCW203 */
				MercedesBencCW203_C180,
				MercedesBencCW203_C180_Kompressor,
				MercedesBencCW203_C200_Kompressor,
				MercedesBencCW203_C200,
				MercedesBencCW203_C230,
				MercedesBencCW203_C230_Kompressor,
				MercedesBencCW203_C240,
				MercedesBencCW203_C240_4Matic,
				MercedesBencCW203_C280,
				MercedesBencCW203_C280_4Matic,
				MercedesBencCW203_C320,
				MercedesBencCW203_C320_4Matic,
				MercedesBencCW203_C350,
				MercedesBencCW203_C350_4Matic,
				MercedesBencCW203_C32_AMG,
				MercedesBencCW203_C55_AMG,
				MercedesBencCW203_C200d,
				MercedesBencCW203_C220d,
				MercedesBencCW203_C270d,
				MercedesBencCW203_C30d_AMG,
				MercedesBencCW203_C320d,
				/* MercedesBencCW204 */
				MercedesBencCW204_C180,
				MercedesBencCW204_C180_Kompressor,
				MercedesBencCW204_C200_Kompressor,
				MercedesBencCW204_C200,
				MercedesBencCW204_C230,
				MercedesBencCW204_C250,
				MercedesBencCW204_C280,
				MercedesBencCW204_C280_4Matic,
				MercedesBencCW204_C3001,
				MercedesBencCW204_C300_4Matic1,
				MercedesBencCW204_C3002,
				MercedesBencCW204_C300_4Matic2,
				MercedesBencCW204_C3501,
				MercedesBencCW204_C350_4Matic1,
				MercedesBencCW204_C350_CGI,
				MercedesBencCW204_C3502,
				MercedesBencCW204_C350_4Matic2,
				MercedesBencCW204_C63_AMG,
				MercedesBencCW204_C180d,
				MercedesBencCW204_C200d,
				MercedesBencCW204_C220d,
				MercedesBencCW204_C250d,
				MercedesBencCW204_C320d,
				MercedesBencCW204_C350d,
				/* MercedesBencCW205 */
				MercedesBencCW205_C160,
				MercedesBencCW205_C180,
				MercedesBencCW205_C200,
				MercedesBencCW205_C200_4Matic,
				MercedesBencCW205_C250,
				MercedesBencCW205_C300,
				MercedesBencCW205_C400_4Matic,
				MercedesBencCW205_C450_4Matic,
				MercedesBencCW205_C43_AMG,
				MercedesBencCW205_C63_AMG,
				MercedesBencCW205_C63S_AMG,
				MercedesBencCW205_C180d,
				MercedesBencCW205_C200d,
				MercedesBencCW205_C220d,
				MercedesBencCW205_C250d,
				/* MercedesBencCW206 */
				MercedesBencCW206_C180,
				MercedesBencCW206_C200,
				MercedesBencCW206_C200_4Matic,
				MercedesBencCW206_C300,
				MercedesBencCW206_C300_4Matic,
				MercedesBencCW206_C200d,
				MercedesBencCW206_C220d,
				MercedesBencCW206_C300d,
				/* MercedesBencEW124 */
				MercedesBencEW124,
				/* MercedesBencEW210 */
				MercedesBencEW210_E200,
				MercedesBencEW210_E200_Kompressor,
				MercedesBencEW210_E230,
				MercedesBencEW210_E280,
				MercedesBencEW210_E320,
				MercedesBencEW210_E36_AMG,
				MercedesBencEW210_E300_4Matic,
				MercedesBencEW210_E240V6,
				MercedesBencEW210_E280V6,
				MercedesBencEW210_E320V6,
				MercedesBencEW210_E420V6,
				MercedesBencEW210_E430V6,
				MercedesBencEW210_E430V6_4Matic,
				MercedesBencEW210_E50_AMG,
				MercedesBencEW210_E55_AMG,
				MercedesBencEW210_E60_AMG,
				MercedesBencEW210_E63_AMG,
				MercedesBencEW210_E200d,
				MercedesBencEW210_E220d,
				MercedesBencEW210_E250d,
				MercedesBencEW210_E270d,
				MercedesBencEW210_E290d,
				MercedesBencEW210_E300d,
				MercedesBencEW210_E320d,
				/* MercedesBencEW211 */
				MercedesBencEW211_E200_Kompressor1,
				MercedesBencEW211_E200_Kompressor2,
				MercedesBencEW211_E230,
				MercedesBencEW211_E240,
				MercedesBencEW211_E280,
				MercedesBencEW211_E320,
				MercedesBencEW211_E350,
				MercedesBencEW211_E350_CGI,
				MercedesBencEW211_E5001,
				MercedesBencEW211_E5002,
				MercedesBencEW211_E55_AMG,
				MercedesBencEW211_E63_AMG,
				MercedesBencEW211_E2001d,
				MercedesBencEW211_E2002d,
				MercedesBencEW211_E2201d,
				MercedesBencEW211_E2202d,
				MercedesBencEW211_E270d,
				MercedesBencEW211_E2801d,
				MercedesBencEW211_E2802d,
				MercedesBencEW211_E300d,
				MercedesBencEW211_E3201d,
				MercedesBencEW211_E3202d,
				MercedesBencEW211_E400d,
				MercedesBencEW211_E420d,

			
};

struct CarFilter
{
	int Country;
	int Province;
	int SubProvince;
	EMake Make;
	ESerie Class;
	EModel Model;
	int PriceFrom;
	int PriceTo;
	std::vector<EBodyType> BodyTypes;
	ECarColor Color = ECarColor::All;
	bool OnSale;
	bool OnTop;

	void SetDefault()
	{
		Country = 0;
		Province = (int)EProvince::All;
		SubProvince = (int)ESubProvince::All;
		PriceFrom = -1;
		PriceTo = -1;
		Color = ECarColor::All;
		OnSale = 0;
		OnTop = 0;
	}
};

#include "DBAutoPart.h"

struct CarModelData
{
	std::string Make;
	std::string Class;
	std::string Model;
	std::string Image;
};

enum class EEventStatus 
{
	Pending,
	Started,
	Finished
};

enum class EAward 
{
	Gold,
	Money,
	AutoPart
};

struct DBEvent
{
	int Id;
	std::string FirstName;
	std::string SecondName;
	std::string Image;
	std::vector<EModel> CarModels;
	int NumCars;
	EEventStatus Status;
	int WinnerUserId;
	int WinnerCarId;
	EAward Award1;
	EAward Award2;
	EAward Award3;
	EAward Award;
	bool Awarded;
};

#endif // !__CARS_ENUM__
