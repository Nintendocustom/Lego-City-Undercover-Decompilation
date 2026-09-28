#include "script/actions/GizmoAction/GizmoAction_GetCentre.h"

const char* GizmoAction_GetCentre::GetName() const {
    return "GetCentre";
}

void GizmoAction_GetCentre::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_GetCentre::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_POSITION);
}
