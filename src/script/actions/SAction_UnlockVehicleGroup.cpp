#include "script/actions/SAction_UnlockVehicleGroup.h"

const char* SAction_UnlockVehicleGroup::GetName() const {
    return "UnlockVehicleGroup";
}

void SAction_UnlockVehicleGroup::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SAction_UnlockVehicleGroup::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}