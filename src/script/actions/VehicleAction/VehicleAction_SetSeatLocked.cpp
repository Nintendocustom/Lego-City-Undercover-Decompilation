#include "script/actions/VehicleAction/VehicleAction_SetSeatLocked.h"

const char* VehicleAction_SetSeatLocked::GetName() const {
    return "Vehicle_SetSeatLocked";
}

void VehicleAction_SetSeatLocked::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_HASH);
    params.AddParam(SV_BOOL);
}

void VehicleAction_SetSeatLocked::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
