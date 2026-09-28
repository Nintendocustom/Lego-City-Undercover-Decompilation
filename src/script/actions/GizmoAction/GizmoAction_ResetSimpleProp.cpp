#include "script/actions/GizmoAction/GizmoAction_ResetSimpleProp.h"

const char* GizmoAction_ResetSimpleProp::GetName() const {
    return "ResetSimpleProp";
}

void GizmoAction_ResetSimpleProp::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_ResetSimpleProp::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
