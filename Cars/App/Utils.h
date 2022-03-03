#ifndef __CARS_UTILS__
#define __CARS_UTILS__

#include "Enum.h"
#include <string>
#include <glm/glm.hpp>

struct AutoPartData 
{
	std::string Title;
	EAutoPartType Type;
	std::string Image;
	glm::vec4 Color;
};

struct AutoPartSubTypeData
{
	std::string Title;
	EAutoPartSubType Type;
	std::string Image;
	glm::vec4 Color;
};

namespace Utils 
{
	std::string ProvinceEnumToString(EProvince province);
	std::string SubProvinceEnumToString(ESubProvince subProvince);

	std::string BodyTypeEnumToString(EBodyType bodyType);
	std::string EngineTypeEnumToString(EEngineType engineType);
	std::string TransmissionEnumToString(ETransmission transmission);

	std::string MakeEnumToString(EMake make);
	void GetMakesData(std::vector<std::string>& names, std::vector<std::string>& images, std::vector<std::string>& logos);
	void GetClassListFromMake(EMake make, std::vector<std::string>& names, std::vector<ESerie>& classes, std::vector<std::string>& images, std::vector<std::string>& backgrounds);
	void GetModelsFromClass(ESerie cl, std::string& make, std::vector<std::string>& names, std::vector<EModel>& models, std::vector<std::string>& images);

	AutoPartData GetAutoPartData(EAutoPartType autoPartType);
	AutoPartSubTypeData GetAutoPartSubTypeData(EAutoPartSubType autoPartSubType);

	CarModelData GetCarModelData(EModel model);

	/* Classes */
	void _GetBmwClassList(std::vector<std::string>& names, std::vector<ESerie>& classes, std::vector<std::string>& images, std::vector<std::string>& backgrounds);
	void _GetMercedesBenzClassList(std::vector<std::string>& names, std::vector<ESerie>& classes);
	void _GetAudiClassList(std::vector<std::string>& names, std::vector<ESerie>& classes);
	void _GetPorscheClassList(std::vector<std::string>& names, std::vector<ESerie>& classes, std::vector<std::string>& images, std::vector<std::string>& backgrounds);
	void _GetLexusClassList(std::vector<std::string>& names, std::vector<ESerie>& classes);
	void _GetInfinitiClassList(std::vector<std::string>& names, std::vector<ESerie>& classes);
	void _GetToyotaClassList(std::vector<std::string>& names, std::vector<ESerie>& classes);
	void _GetNissanClassList(std::vector<std::string>& names, std::vector<ESerie>& classes);
	void _GetFordClassList(std::vector<std::string>& names, std::vector<ESerie>& classes, std::vector<std::string>& images);
	void _GetChevroletClassList(std::vector<std::string>& names, std::vector<ESerie>& classes);
	void _GetVolkswagenClassList(std::vector<std::string>& names, std::vector<ESerie>& classes);
	void _GetOpelClassList(std::vector<std::string>& names, std::vector<ESerie>& classes);
	void _GetMitsubishiClassList(std::vector<std::string>& names, std::vector<ESerie>& classes);
	void _GetKIAClassList(std::vector<std::string>& names, std::vector<ESerie>& classes);
	void _GetHyundaiClassList(std::vector<std::string>& names, std::vector<ESerie>& classes);
	void _GetHondaClassList(std::vector<std::string>& names, std::vector<ESerie>& classes);
	void _GetMazdaClassList(std::vector<std::string>& names, std::vector<ESerie>& classes);

	/* Models */
	void _GetBmw1Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetBmw2Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetBmw3Models(std::vector<std::string>& names, std::vector<EModel>& models, std::vector<std::string>& images);
	void _GetBmw4Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetBmw5Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetBmw6Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetBmw7Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetBmwX1Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetBmwX3Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetBmwX4Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetBmwX5Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetBmwX6Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetBmwX7Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetBmwZ4Models(std::vector<std::string>& names, std::vector<EModel>& models);
	/* Mercedes benz */
	void _GetMB190ClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBAClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBBClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBCClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBEClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBSClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBCLClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBCLAClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBCLKClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBCLSClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBMLClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBGClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBGLClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBGLAClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBGLCClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBGLEClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBGLKClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBGLSClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBRClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBSLClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBSLKClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBVClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBSprinterClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBVaneoClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBVianoClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMBVitoClassModels(std::vector<std::string>& names, std::vector<EModel>& models);
	/* AUDI */
	void _GetAudiA3Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetAudiA4Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetAudiA5Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetAudiA6Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetAudiA7Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetAudiA8Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetAudiQ5Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetAudiQ7Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetAudiTTModels(std::vector<std::string>& names, std::vector<EModel>& models);
	/* PORSCHE */
	void _GetPorscheCayenneModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetPorscheMacanModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetPorschePanameraModels(std::vector<std::string>& names, std::vector<EModel>& models, std::vector<std::string>& images);
	/* LEXUS */
	void _GetLexusCTModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetLexusISModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetLexusESModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetLexusGSModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetLexusLSModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetLexusNXModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetLexusRXModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetLexusGXModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetLexusLXModels(std::vector<std::string>& names, std::vector<EModel>& models);
	/* INIFINI */
	void _GetInfinitiEXModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetInfinitiFXModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetInfinitiJXModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetInfinitiGModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetInfinitiMModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetInfinitiQ3Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetInfinitiQX4Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetInfinitiQX50Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetInfinitiQX56Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetInfinitiQX60Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetInfinitiQX70Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetInfinitiQX80Models(std::vector<std::string>& names, std::vector<EModel>& models);
	/* Toyota */
	void _GetToyotaAplphardModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaAltezzaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaAvalonModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaAvensisModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaBeltaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaBladeModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaCHRModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaCamryModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaCorollaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaEstimaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaFJCruiserModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaFortunerModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaHarrierModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaHighlanderModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaHiluxModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaIpsumModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaIstModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaLandCruiserModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaLandCruiserPradoModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaNoahModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaPassoModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaPriusModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaRAV4Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaSequoiaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaSiennaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaTacomaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaTundraModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaVellfireModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaVitzModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaVoxyModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetToyotaYarisModels(std::vector<std::string>& names, std::vector<EModel>& models);
	/* NISSAN */
	void _GetNissanAlmeraModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanAltimaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanArmadaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanBluebirdModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanCubeModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanElgrandModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanFrontierModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanFugaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanJukeModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanKicksModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanLatioModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanLeafModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanMarchModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanMaximaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanMicraModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanMuranoModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanNoteModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanPathfinderModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanPatrolModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanPresageModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanQashqaiModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanQuestModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanRogueModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanSentraModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanSerenaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanSkylineModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanSunnyModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanTeanaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanTerranoModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanTiidaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanVersaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanXTrailModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissanXTerraModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetNissan350ZModels(std::vector<std::string>& names, std::vector<EModel>& models);
	/* Ford */
	void _GetFordEdgeModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetFordEscapeModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetFordExplorerModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetFordF150Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetFordFiestaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetFordFocusModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetFordFusionModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetFordTaurusModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetFordTransitModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetFordMustangModels(std::vector<std::string>& names, std::vector<EModel>& models, std::vector<std::string>& images);
	/* Chevrolet */
	void _GetChevroletAvalancheModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetChevroletAveoModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetChevroletCaptivaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetChevroletCruzeModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetChevroletEpicaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetChevroletEquinoxModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetChevroletMalibuModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetChevroletNivaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetChevroletTahoeModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetChevroletTrailBlazerModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetChevroletVoltModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetChevroletCamaroModels(std::vector<std::string>& names, std::vector<EModel>& models, std::vector<std::string>& images);
	void _GetChevroletCorvetteModels(std::vector<std::string>& names, std::vector<EModel>& models);
	/* Volkswagen */
	void _GetVolkswagenBeetleModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetVolkswagenBoraModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetVolkswagenCaddyModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetVolkswagenCrafterModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetVolkswagenGolfModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetVolkswagenJettaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetVolkswagenPassatModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetVolkswagenPassatCCModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetVolkswagenPoloModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetVolkswagenRoutanModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetVolkswagenTiguanModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetVolkswagenTouaregModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetVolkswagenTouranModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetVolkswagenTransporterModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetVolkswagenVentoModels(std::vector<std::string>& names, std::vector<EModel>& models);
	/* Opel */
	void _GetOpelAstraModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetOpelComboModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetOpelCorsaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetOpelFronteraModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetOpelInsigniaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetOpelMerivaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetOpelOmegaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetOpelSignumModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetOpelSintraModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetOpelVectraModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetOpelZafiraModels(std::vector<std::string>& names, std::vector<EModel>& models);
	/* Mitsubishi */
	void _GetMitsubishiAirtrekModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMitsubishiChariotModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMitsubishiColtModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMitsubishiGalantModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMitsubishiGrandisModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMitsubishiLancerModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMitsubishiMonteroModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMitsubishiOutlanderModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMitsubishiPajeroModels(std::vector<std::string>& names, std::vector<EModel>& models);
	/* Kia */
	void _GetKiaCadenzaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetKiaCeratoModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetKiaForteModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetKiaK5Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetKiaOptimaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetKiaRioModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetKiaSedonaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetKiaSorentoModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetKiaSportageModels(std::vector<std::string>& names, std::vector<EModel>& models);
	/* Hyundai */
	void _GetHyundaiAccentModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHyundaiCretaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHyundaiElantraModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHyundaiGenesisModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHyundaiGenesisCoupeModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHyundaiIX35Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHyundaiKonaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHyundaiSantaFeModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHyundaiSolarisModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHyundaiSonataModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHyundaiTucsonModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHyundaiVelosterModels(std::vector<std::string>& names, std::vector<EModel>& models);
	/* Honda */
	void _GetHondaAccordModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHondaCivicModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHondaCRVModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHondaCrosstourModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHondaElysionModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHondaFitModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHondaHRVModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHondaOdysseyModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHondaPilotModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHondaRidgelineModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetHondaStepwgnModels(std::vector<std::string>& names, std::vector<EModel>& models);
	/* Mazda */
	void _GetMazdaAtenzaModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMazdaCX3Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMazdaCX5Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMazdaCX7Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMazdaCX9Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMazdaDemioModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMazdaMPVModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMazdaRX8Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMazdaTributeModels(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMazda3Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMazda5Models(std::vector<std::string>& names, std::vector<EModel>& models);
	void _GetMazda6Models(std::vector<std::string>& names, std::vector<EModel>& models);
}

#endif // !__CARS_UTILS__
