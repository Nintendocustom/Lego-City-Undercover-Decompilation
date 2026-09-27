#include "script/actions/VehicleAction/VehicleAction_GetDriver.h"

const char* VehicleAction_GetDriver::GetName() const {
    return "Vehicle_GetDriver";
}

void VehicleAction_GetDriver::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_GetDriver::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}
