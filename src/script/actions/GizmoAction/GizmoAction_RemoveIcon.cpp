#include "script/actions/GizmoAction/GizmoAction_RemoveIcon.h"

const char* GizmoAction_RemoveIcon::GetName() const {
    return "RemoveIcon";
}

void GizmoAction_RemoveIcon::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_RemoveIcon::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
