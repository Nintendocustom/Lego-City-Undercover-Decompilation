#include "script/actions/GizmoAction/GizmoAction_DistanceTo.h"

const char* GizmoAction_DistanceTo::GetName() const {
    return "DistanceTo";
}

void GizmoAction_DistanceTo::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
    params.AddParam(SV_POSITION);
}

void GizmoAction_DistanceTo::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
