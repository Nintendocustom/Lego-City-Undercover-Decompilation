#include "script/actions/GizmoAction/GizmoAction_GetTriggeredByPlayer.h"

const char* GizmoAction_GetTriggeredByPlayer::GetName() const {
    return "GetTriggeredByPlayer";
}

void GizmoAction_GetTriggeredByPlayer::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_GetTriggeredByPlayer::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}
