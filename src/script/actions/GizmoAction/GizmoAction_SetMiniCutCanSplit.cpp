#include "script/actions/GizmoAction/GizmoAction_SetMiniCutCanSplit.h"

const char* GizmoAction_SetMiniCutCanSplit::GetName() const {
    return "SetMiniCutCanSplit";
}

void GizmoAction_SetMiniCutCanSplit::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
    params.AddParam(SV_BOOL);
}

void GizmoAction_SetMiniCutCanSplit::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
