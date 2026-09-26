#include "script/actions/GizmoAction/GizmoAction_CameraStartUp.h"

const char* GizmoAction_CameraStartUp::GetName() const {
    return "CameraStartUp";
}

void GizmoAction_CameraStartUp::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_CameraStartUp::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
