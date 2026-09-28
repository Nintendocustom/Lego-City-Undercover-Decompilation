#include "script/actions/GizmoAction/GizmoAction_GetColour.h"

const char* GizmoAction_GetColour::GetName() const {
    return "GetColour";
}

void GizmoAction_GetColour::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_GetColour::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
