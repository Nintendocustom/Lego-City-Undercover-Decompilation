#include "script/actions/VehicleAction/VehicleAction_SetMassMul.h"

const char* VehicleAction_SetMassMul::GetName() const {
    return "SetMassMul";
}

void VehicleAction_SetMassMul::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_HASH);
}

void VehicleAction_SetMassMul::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
