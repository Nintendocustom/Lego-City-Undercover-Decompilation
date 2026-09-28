#include "script/actions/GizmoAction/GizmoAction_SetActive.h"

const char* GizmoAction_SetActive::GetName() const {
    return "SetActive";
}

void GizmoAction_SetActive::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
    params.AddParam(SV_BOOL);
}

void GizmoAction_SetActive::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
