#include "script/actions/GizmoAction/GizmoAction_FadeOut.h"

const char* GizmoAction_FadeOut::GetName() const {
    return "FadeOut";
}

void GizmoAction_FadeOut::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
    params.AddParam(SV_NUMBER);
}

void GizmoAction_FadeOut::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
