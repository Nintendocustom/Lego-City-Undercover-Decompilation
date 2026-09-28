#include "script/actions/GizmoAction/GizmoAction_FadeIn.h"

const char* GizmoAction_FadeIn::GetName() const {
    return "FadeIn";
}

void GizmoAction_FadeIn::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
    params.AddParam(SV_NUMBER);
}

void GizmoAction_FadeIn::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
