#include "script/actions/GizmoAction/GizmoAction_CameraShutDown.h"

const char* GizmoAction_CameraShutDown::GetName() const {
    return "CameraShutDown";
}

void GizmoAction_CameraShutDown::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void GizmoAction_CameraShutDown::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
