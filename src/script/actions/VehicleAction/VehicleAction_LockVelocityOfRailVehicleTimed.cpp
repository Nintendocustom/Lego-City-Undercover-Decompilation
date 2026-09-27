#include "script/actions/VehicleAction/VehicleAction_LockVelocityOfRailVehicleTimed.h"

const char* VehicleAction_LockVelocityOfRailVehicleTimed::GetName() const {
    return "Vehicle_LockVelocityOfRailVehicleTimed";
}

void VehicleAction_LockVelocityOfRailVehicleTimed::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_BOOL);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
}

void VehicleAction_LockVelocityOfRailVehicleTimed::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
