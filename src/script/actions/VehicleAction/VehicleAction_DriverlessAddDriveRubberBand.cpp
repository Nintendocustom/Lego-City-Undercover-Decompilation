#include "script/actions/VehicleAction/VehicleAction_DriverlessAddDriveRubberBand.h"

const char* VehicleAction_DriverlessAddDriveRubberBand::GetName() const {
    return "Vehicle_DriverlessAddDriveRubberBand";
}

void VehicleAction_DriverlessAddDriveRubberBand::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 1) {
        params.AddParam(SV_VEHICLE);
        params.AddParam(SV_VEHICLE);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
    } else {
        params.AddParam(SV_VEHICLE);
        params.AddParam(SV_CHARACTER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
    }
}

void VehicleAction_DriverlessAddDriveRubberBand::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
