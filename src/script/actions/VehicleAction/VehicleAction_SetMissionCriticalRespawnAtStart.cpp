#include "script/actions/VehicleAction/VehicleAction_SetMissionCriticalRespawnAtStart.h"

const char* VehicleAction_SetMissionCriticalRespawnAtStart::GetName() const {
    return "SetMissionCriticalRespawnAtStart";
}

void VehicleAction_SetMissionCriticalRespawnAtStart::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_BOOL);
}

void VehicleAction_SetMissionCriticalRespawnAtStart::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
