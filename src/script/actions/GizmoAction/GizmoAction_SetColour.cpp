#include "script/actions/GizmoAction/GizmoAction_SetColour.h"

const char* GizmoAction_SetColour::GetName() const {
    return "SetColour";
}

void GizmoAction_SetColour::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
    params.AddParam(SV_TEXT);
}

void GizmoAction_SetColour::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
