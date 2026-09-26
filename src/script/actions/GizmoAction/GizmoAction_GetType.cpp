#include "script/actions/GizmoAction/GizmoAction_GetType.h"

const char* GizmoAction_GetType::GetName() const {
    return "GetType";
}

void GizmoAction_GetType::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_GetType::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
