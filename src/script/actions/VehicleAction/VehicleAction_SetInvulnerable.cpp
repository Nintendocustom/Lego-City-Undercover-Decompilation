#include "script/actions/VehicleAction/VehicleAction_SetInvulnerable.h"

const char* VehicleAction_SetInvulnerable::GetName() const {
    return "SetInvulnerable";
}

void VehicleAction_SetInvulnerable::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_BOOL);
    params.AddParam(SV_ANY);
}

void VehicleAction_SetInvulnerable::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
