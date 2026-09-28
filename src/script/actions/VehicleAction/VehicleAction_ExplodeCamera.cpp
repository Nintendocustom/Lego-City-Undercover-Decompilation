#include "script/actions/VehicleAction/VehicleAction_ExplodeCamera.h"

const char* VehicleAction_ExplodeCamera::GetName() const {
    return "Vehicle_ExplodeCamera";
}

void VehicleAction_ExplodeCamera::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_ExplodeCamera::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
