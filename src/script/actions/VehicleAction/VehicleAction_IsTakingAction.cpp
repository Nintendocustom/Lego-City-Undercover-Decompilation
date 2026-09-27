#include "script/actions/VehicleAction/VehicleAction_IsTakingAction.h"

const char* VehicleAction_IsTakingAction::GetName() const {
    return "Vehicle_IsTakingAction";
}

void VehicleAction_IsTakingAction::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_IsTakingAction::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
