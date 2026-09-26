#include "script/actions/GizmoAction/GizmoAction_LegoGizmoGetSwapperColour.h"

const char* GizmoAction_LegoGizmoGetSwapperColour::GetName() const {
    return "Gizmo_GetSwapperColour";
}

void GizmoAction_LegoGizmoGetSwapperColour::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_LegoGizmoGetSwapperColour::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
