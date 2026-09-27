#include "script/actions/VehicleAction/VehicleAction_SetPosition.h"

const char* VehicleAction_SetPosition::GetName() const {
    return "Vehicle_SetPosition";
}

void VehicleAction_SetPosition::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_POSITION);
}

void VehicleAction_SetPosition::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
