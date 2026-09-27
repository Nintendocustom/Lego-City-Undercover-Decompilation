#include "script/actions/VehicleAction/VehicleAction_IsLocked.h"

const char* VehicleAction_IsLocked::GetName() const {
    return "Vehicle_IsLocked";
}

void VehicleAction_IsLocked::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_IsLocked::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
