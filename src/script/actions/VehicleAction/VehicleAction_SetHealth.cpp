#include "script/actions/VehicleAction/VehicleAction_SetHealth.h"

const char* VehicleAction_SetHealth::GetName() const {
    return "Vehicle_SetHealth";
}

void VehicleAction_SetHealth::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_HASH);
    params.AddParam(SV_NUMBER);
}

void VehicleAction_SetHealth::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
