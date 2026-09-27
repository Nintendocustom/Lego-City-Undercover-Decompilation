#include "script/actions/VehicleAction/VehicleAction_SetMissionCritical.h"

const char* VehicleAction_SetMissionCritical::GetName() const {
    return "SetMissionCritical";
}

void VehicleAction_SetMissionCritical::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_BOOL);
    params.AddParam(SV_BOOL);
}

void VehicleAction_SetMissionCritical::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
