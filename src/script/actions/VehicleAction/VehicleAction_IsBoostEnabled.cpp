#include "script/actions/VehicleAction/VehicleAction_IsBoostEnabled.h"

const char* VehicleAction_IsBoostEnabled::GetName() const {
    return "Vehicle_IsBoostEnabled";
}

void VehicleAction_IsBoostEnabled::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_IsBoostEnabled::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
