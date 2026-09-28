#include "script/actions/VehicleAction/VehicleAction_GetSpeed.h"

const char* VehicleAction_GetSpeed::GetName() const {
    return "Vehicle_GetSpeed";
}

void VehicleAction_GetSpeed::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_GetSpeed::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
