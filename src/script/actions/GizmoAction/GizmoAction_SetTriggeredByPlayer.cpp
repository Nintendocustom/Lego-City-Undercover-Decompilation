#include "script/actions/GizmoAction/GizmoAction_SetTriggeredByPlayer.h"

const char* GizmoAction_SetTriggeredByPlayer::GetName() const {
    return "SetTriggeredByPlayer";
}

void GizmoAction_SetTriggeredByPlayer::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
    params.AddParam(SV_CHARACTER);
}

void GizmoAction_SetTriggeredByPlayer::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
