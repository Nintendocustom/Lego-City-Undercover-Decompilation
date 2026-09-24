#include "script/actions/GizmoAction/GizmoAction_GetOutput.h"

const char* GizmoAction_GetOutput::GetName() const {
    return "GetOutput";
}

void GizmoAction_GetOutput::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
    params.AddParam(SV_NUMBER);
}

void GizmoAction_GetOutput::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
