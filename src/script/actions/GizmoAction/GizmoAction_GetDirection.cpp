#include "script/actions/GizmoAction/GizmoAction_GetDirection.h"

const char* GizmoAction_GetDirection::GetName() const {
    return "GetDirection";
}

void GizmoAction_GetDirection::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_GetDirection::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
