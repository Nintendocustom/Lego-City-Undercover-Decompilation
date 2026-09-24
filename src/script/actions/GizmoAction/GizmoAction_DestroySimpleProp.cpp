#include "script/actions/GizmoAction/GizmoAction_DestroySimpleProp.h"

const char* GizmoAction_DestroySimpleProp::GetName() const {
    return "DestroySimpleProp";
}

void GizmoAction_DestroySimpleProp::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_DestroySimpleProp::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
