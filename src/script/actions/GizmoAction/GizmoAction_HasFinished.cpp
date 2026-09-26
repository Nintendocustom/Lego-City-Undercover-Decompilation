#include "script/actions/GizmoAction/GizmoAction_HasFinished.h"

const char* GizmoAction_HasFinished::GetName() const {
    return "HasFinished";
}

void GizmoAction_HasFinished::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_HasFinished::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
