#include "script/actions/GizmoAction/GizmoAction_SetVisible.h"

const char* GizmoAction_SetVisible::GetName() const {
    return "SetVisible";
}

void GizmoAction_SetVisible::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
    params.AddParam(SV_BOOL);
}

void GizmoAction_SetVisible::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
