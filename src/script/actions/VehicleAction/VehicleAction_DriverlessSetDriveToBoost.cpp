#include "script/actions/VehicleAction/VehicleAction_DriverlessSetDriveToBoost.h"

const char* VehicleAction_DriverlessSetDriveToBoost::GetName() const {
    return "Vehicle_DriverlessSetDriveToBoost";
}

void VehicleAction_DriverlessSetDriveToBoost::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_NUMBER);
}

void VehicleAction_DriverlessSetDriveToBoost::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
