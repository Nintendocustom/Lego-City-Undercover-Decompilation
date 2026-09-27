#include "script/actions/VehicleAction/VehicleAction_IsSubmerged.h"

const char* VehicleAction_IsSubmerged::GetName() const {
    return "IsSubmerged";
}

void VehicleAction_IsSubmerged::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_IsSubmerged::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
