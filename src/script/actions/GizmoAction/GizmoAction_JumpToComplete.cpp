#include "script/actions/GizmoAction/GizmoAction_JumpToComplete.h"

const char* GizmoAction_JumpToComplete::GetName() const {
    return "JumpToComplete";
}

void GizmoAction_JumpToComplete::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_JumpToComplete::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
