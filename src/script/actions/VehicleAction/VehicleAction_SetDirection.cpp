#include "script/actions/VehicleAction/VehicleAction_SetDirection.h"

const char* VehicleAction_SetDirection::GetName() const {
    return "Vehicle_SetDirection";
}

void VehicleAction_SetDirection::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_NUMBER);
}

void VehicleAction_SetDirection::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
