#include "script/actions/VehicleAction/VehicleAction_ConnectRailVehicles.h"

const char* VehicleAction_ConnectRailVehicles::GetName() const {
    return "Vehicle_ConnectRailVehicles";
}

void VehicleAction_ConnectRailVehicles::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_ConnectRailVehicles::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
