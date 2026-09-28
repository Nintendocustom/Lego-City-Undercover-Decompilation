#include "script/actions/VehicleAction/VehicleAction_IsQueryDismountSet.h"

const char* VehicleAction_IsQueryDismountSet::GetName() const {
    return "IsQueryDismountSet";
}

void VehicleAction_IsQueryDismountSet::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_IsQueryDismountSet::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
