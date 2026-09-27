#include "script/actions/VehicleAction/VehicleAction_IsSeatLocked.h"

const char* VehicleAction_IsSeatLocked::GetName() const {
    return "Vehicle_IsSeatLocked";
}

void VehicleAction_IsSeatLocked::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_HASH);
}

void VehicleAction_IsSeatLocked::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
