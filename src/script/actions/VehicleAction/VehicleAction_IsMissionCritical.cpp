#include "script/actions/VehicleAction/VehicleAction_IsMissionCritical.h"

const char* VehicleAction_IsMissionCritical::GetName() const {
    return "IsMissionCritical";
}

void VehicleAction_IsMissionCritical::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_IsMissionCritical::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
