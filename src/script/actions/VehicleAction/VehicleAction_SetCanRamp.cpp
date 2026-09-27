#include "script/actions/VehicleAction/VehicleAction_SetCanRamp.h"

const char* VehicleAction_SetCanRamp::GetName() const {
    return "Vehicle_SetCanRamp";
}

void VehicleAction_SetCanRamp::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_BOOL);
}

void VehicleAction_SetCanRamp::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
