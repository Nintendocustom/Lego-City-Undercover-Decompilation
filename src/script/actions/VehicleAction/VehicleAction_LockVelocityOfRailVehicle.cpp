#include "script/actions/VehicleAction/VehicleAction_LockVelocityOfRailVehicle.h"

const char* VehicleAction_LockVelocityOfRailVehicle::GetName() const {
    return "Vehicle_LockVelocityOfRailVehicle";
}

void VehicleAction_LockVelocityOfRailVehicle::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_BOOL);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
}

void VehicleAction_LockVelocityOfRailVehicle::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
