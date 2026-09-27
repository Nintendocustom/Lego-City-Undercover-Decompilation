#include "script/actions/VehicleAction/VehicleAction_SetCraneMode.h"

const char* VehicleAction_SetCraneMode::GetName() const {
    return "Vehicle_SetCraneMode";
}

void VehicleAction_SetCraneMode::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_BOOL);
    params.AddParam(SV_BOOL);
}

void VehicleAction_SetCraneMode::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
