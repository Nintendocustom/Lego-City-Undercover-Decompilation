#include "script/actions/VehicleAction/VehicleAction_SetUnlimitedBoost.h"

const char* VehicleAction_SetUnlimitedBoost::GetName() const {
    return "Vehicle_SetUnlimitedBoost";
}

void VehicleAction_SetUnlimitedBoost::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_NUMBER);
}

void VehicleAction_SetUnlimitedBoost::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
