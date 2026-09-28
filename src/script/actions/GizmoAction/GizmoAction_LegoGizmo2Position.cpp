#include "script/actions/GizmoAction/GizmoAction_LegoGizmo2Position.h"

const char* GizmoAction_LegoGizmo2Position::GetName() const {
    return "Position";
}

void GizmoAction_LegoGizmo2Position::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_LegoGizmo2Position::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_POSITION);
}
