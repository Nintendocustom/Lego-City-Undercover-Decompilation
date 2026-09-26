#include "script/actions/GizmoAction/GizmoAction_GetSuperBuildValue.h"

const char* GizmoAction_GetSuperBuildValue::GetName() const {
    return "GetSuperBuildValue";
}

void GizmoAction_GetSuperBuildValue::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_GetSuperBuildValue::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
