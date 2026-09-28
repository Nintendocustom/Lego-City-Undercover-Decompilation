#include "script/actions/VehicleAction/VehicleAction_SetLocked.h"

const char* VehicleAction_SetLocked::GetName() const {
    return "Vehicle_SetLocked";
}

void VehicleAction_SetLocked::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_BOOL);
}

void VehicleAction_SetLocked::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
