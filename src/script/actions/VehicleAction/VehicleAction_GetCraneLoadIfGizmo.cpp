#include "script/actions/VehicleAction/VehicleAction_GetCraneLoadIfGizmo.h"

const char* VehicleAction_GetCraneLoadIfGizmo::GetName() const {
    return "Vehicle_GetCraneLoadIfGizmo";
}

void VehicleAction_GetCraneLoadIfGizmo::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_GetCraneLoadIfGizmo::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}
