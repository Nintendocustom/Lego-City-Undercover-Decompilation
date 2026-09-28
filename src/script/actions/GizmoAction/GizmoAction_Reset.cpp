#include "script/actions/GizmoAction/GizmoAction_Reset.h"

const char* GizmoAction_Reset::GetName() const {
    return "Reset";
}

void GizmoAction_Reset::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_Reset::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
