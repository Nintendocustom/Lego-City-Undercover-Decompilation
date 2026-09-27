#include "script/actions/VehicleAction/VehicleAction_Release.h"

const char* VehicleAction_Release::GetName() const {
    return "Vehicle_Release";
}

void VehicleAction_Release::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_Release::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
