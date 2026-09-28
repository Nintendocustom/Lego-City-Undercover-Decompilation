#include "GizmoAction_SetIcon.h"

const char* GizmoAction_SetIcon::GetName() const {
    return "SetIcon";
}

void GizmoAction_SetIcon::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 0) {
        params.SanityCheck();
        params.AddParam(SV_GIZMO);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_TEXT);
        params.AddParam(SV_BOOL);
    } else if (m_InputVariant == 1) {
        params.SanityCheck();
        params.AddParam(SV_GIZMO);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_TEXT);
    }
}

void GizmoAction_SetIcon::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
