#include "script/actions/VehicleAction/VehicleAction_GetModelName.h"

const char* VehicleAction_GetModelName::GetName() const {
    return "Vehicle_GetModelName";
}

void VehicleAction_GetModelName::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_GetModelName::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
