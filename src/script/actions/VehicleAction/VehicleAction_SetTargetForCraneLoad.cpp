#include "script/actions/VehicleAction/VehicleAction_SetTargetForCraneLoad.h"

const char* VehicleAction_SetTargetForCraneLoad::GetName() const {
    return "Vehicle_SetTargetForCraneLoad";
}

void VehicleAction_SetTargetForCraneLoad::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_GIZMO);
    params.AddParam(SV_BOOL);
}

void VehicleAction_SetTargetForCraneLoad::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
