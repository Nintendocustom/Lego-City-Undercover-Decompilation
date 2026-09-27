#include "script/actions/VehicleAction/VehicleAction_SetQueryDismount.h"

const char* VehicleAction_SetQueryDismount::GetName() const {
    return "SetQueryDismount";
}

void VehicleAction_SetQueryDismount::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_BOOL);
}

void VehicleAction_SetQueryDismount::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
