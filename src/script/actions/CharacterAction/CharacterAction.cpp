#include "script/actions/CharacterAction/CharacterAction.h"

uint32_t NuStrHashUpperCaseFNV1(const char* str, unsigned int seed);

uint32_t CharacterAction::sm_DriverHash = NuStrHashUpperCaseFNV1("Driver", 0x811c9dc5);
uint32_t CharacterAction::sm_AnySeatHash = NuStrHashUpperCaseFNV1("Any", 0x811c9dc5);
uint32_t CharacterAction::sm_AnyPassengerHash = NuStrHashUpperCaseFNV1("Any", 0x811c9dc5);
uint32_t CharacterAction::sm_Passenger1Hash = NuStrHashUpperCaseFNV1("Passenger1", 0x811c9dc5);
uint32_t CharacterAction::sm_Passenger2Hash = NuStrHashUpperCaseFNV1("Passenger2", 0x811c9dc5);
uint32_t CharacterAction::sm_Passenger3Hash = NuStrHashUpperCaseFNV1("Passenger3", 0x811c9dc5);
uint32_t CharacterAction::sm_Passenger4Hash = NuStrHashUpperCaseFNV1("Passenger4", 0x811c9dc5);
uint32_t CharacterAction::sm_Passenger5Hash = NuStrHashUpperCaseFNV1("Passenger5", 0x811c9dc5);
uint32_t CharacterAction::sm_AIOnlyHash = NuStrHashUpperCaseFNV1("AIOnly", 0x811c9dc5);
uint32_t CharacterAction::sm_PlayerOnlyHash = NuStrHashUpperCaseFNV1("PlayerOnly", 0x811c9dc5);
uint32_t CharacterAction::sm_StraightLineHash = NuStrHashUpperCaseFNV1("STRAIGHTLINE", 0x811c9dc5);
uint32_t CharacterAction::sm_ParkourNodesHash = NuStrHashUpperCaseFNV1("PARKOURNODES", 0x811c9dc5);
uint32_t CharacterAction::sm_UseParkourHash = NuStrHashUpperCaseFNV1("USEPARKOUR", 0x811c9dc5);
uint32_t CharacterAction::sm_FavourParkour = NuStrHashUpperCaseFNV1("FAVOURPARKOUR", 0x811c9dc5);
uint32_t CharacterAction::sm_NoArrest = NuStrHashUpperCaseFNV1("NOARREST", 0x811c9dc5);
uint32_t CharacterAction::sm_ForceFlatPace = NuStrHashUpperCaseFNV1("FORCEFLATPACE", 0x811c9dc5);
uint32_t CharacterAction::sm_IgnoreTrafficLights = NuStrHashUpperCaseFNV1("IGNORETRAFFICLIGHTS", 0x811c9dc5);
uint32_t CharacterAction::sm_MatchSpeed = NuStrHashUpperCaseFNV1("MATCHSPEED", 0x811c9dc5);
uint32_t CharacterAction::sm_OffRoad = NuStrHashUpperCaseFNV1("OFFROAD", 0x811c9dc5);
uint32_t CharacterAction::sm_AddAsWaypoint = NuStrHashUpperCaseFNV1("ADDASWAYPOINT", 0x811c9dc5);
uint32_t CharacterAction::sm_ArriveAtWaypoint = NuStrHashUpperCaseFNV1("ARRIVEATWAYPOINT", 0x811c9dc5);
