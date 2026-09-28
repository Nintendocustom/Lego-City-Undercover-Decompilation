#include "script/actions/GizmoAction/GizmoAction_LegoGizmoSwapperColour.h"

const char* GizmoAction_LegoGizmoSwapperColour::GetName() const {
    return "Gizmo_SwapperColour";
}

void GizmoAction_LegoGizmoSwapperColour::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
    params.AddParam(SV_TEXT);
}

void GizmoAction_LegoGizmoSwapperColour::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
