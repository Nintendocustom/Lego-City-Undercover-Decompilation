#include "script/actions/VehicleAction/VehicleAction_GetPosition.h"

const char* VehicleAction_GetPosition::GetName() const {
    return "Vehicle_GetPosition";
}

void VehicleAction_GetPosition::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_GetPosition::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_POSITION);
}
