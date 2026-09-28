#include "script/actions/VehicleAction/VehicleAction_SetBoobyTrap.h"

const char* VehicleAction_SetBoobyTrap::GetName() const {
    return "Vehicle_SetBoobyTrap";
}

void VehicleAction_SetBoobyTrap::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_BOOL);
}

void VehicleAction_SetBoobyTrap::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
