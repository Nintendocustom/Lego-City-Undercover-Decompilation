#include "script/actions/VehicleAction/VehicleAction_ForceMaxDetail.h"

const char* VehicleAction_ForceMaxDetail::GetName() const {
    return "ForceMaxDetail";
}

void VehicleAction_ForceMaxDetail::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_BOOL);
}

void VehicleAction_ForceMaxDetail::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
