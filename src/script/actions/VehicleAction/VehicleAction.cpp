#include "script/actions/VehicleAction/VehicleAction.h"

uint32_t NuStrHashUpperCaseFNV1(const char* str, unsigned int seed);

uint32_t VehicleAction::sm_DriverHash = NuStrHashUpperCaseFNV1("Driver", 0x811c9dc5);
uint32_t VehicleAction::sm_AnySeatHash = NuStrHashUpperCaseFNV1("Any", 0x811c9dc5);
uint32_t VehicleAction::sm_AnyPassengerHash = NuStrHashUpperCaseFNV1("Any", 0x811c9dc5);
uint32_t VehicleAction::sm_AnyPassengerSeatHash = NuStrHashUpperCaseFNV1("AnyPassenger", 0x811c9dc5);
uint32_t VehicleAction::sm_Passenger1Hash = NuStrHashUpperCaseFNV1("Passenger1", 0x811c9dc5);
uint32_t VehicleAction::sm_Passenger2Hash = NuStrHashUpperCaseFNV1("Passenger2", 0x811c9dc5);
uint32_t VehicleAction::sm_Passenger3Hash = NuStrHashUpperCaseFNV1("Passenger3", 0x811c9dc5);
uint32_t VehicleAction::sm_Passenger4Hash = NuStrHashUpperCaseFNV1("Passenger4", 0x811c9dc5);
uint32_t VehicleAction::sm_Passenger5Hash = NuStrHashUpperCaseFNV1("Passenger5", 0x811c9dc5);
