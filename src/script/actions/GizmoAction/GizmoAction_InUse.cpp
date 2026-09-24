#include "script/actions/GizmoAction/GizmoAction_InUse.h"

const char* GizmoAction_InUse::GetName() const {
    return "InUse";
}

void GizmoAction_InUse::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_InUse::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
