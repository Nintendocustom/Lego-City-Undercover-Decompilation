#include "script/actions/GizmoAction/GizmoAction_LegoGizmo2Text.h"

const char* GizmoAction_LegoGizmo2Text::GetName() const {
    return "Text";
}

void GizmoAction_LegoGizmo2Text::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_LegoGizmo2Text::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
