#include "script/actions/VehicleAction/VehicleAction_LockInPlace.h"

const char* VehicleAction_LockInPlace::GetName() const {
    return "Vehicle_LockInPlace";
}

void VehicleAction_LockInPlace::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_BOOL);
}

void VehicleAction_LockInPlace::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
