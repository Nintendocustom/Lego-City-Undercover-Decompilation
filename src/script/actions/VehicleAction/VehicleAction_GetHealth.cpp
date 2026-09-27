#include "script/actions/VehicleAction/VehicleAction_GetHealth.h"

const char* VehicleAction_GetHealth::GetName() const {
    return "Vehicle_GetHealth";
}

void VehicleAction_GetHealth::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_HASH);
}

void VehicleAction_GetHealth::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
