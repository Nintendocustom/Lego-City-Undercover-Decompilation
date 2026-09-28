#include "script/actions/GizmoAction/GizmoAction_HasFailed.h"

const char* GizmoAction_HasFailed::GetName() const {
    return "HasFailed";
}

void GizmoAction_HasFailed::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_HasFailed::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
