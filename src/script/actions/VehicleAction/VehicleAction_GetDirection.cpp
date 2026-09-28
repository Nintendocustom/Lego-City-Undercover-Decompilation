#include "script/actions/VehicleAction/VehicleAction_GetDirection.h"

const char* VehicleAction_GetDirection::GetName() const {
    return "Vehicle_GetDirection";
}

void VehicleAction_GetDirection::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_GetDirection::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
