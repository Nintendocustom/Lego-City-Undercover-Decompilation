#include "script/actions/GizmoAction/GizmoAction_Trigger.h"

const char* GizmoAction_Trigger::GetName() const {
    return "Trigger";
}

void GizmoAction_Trigger::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_Trigger::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
