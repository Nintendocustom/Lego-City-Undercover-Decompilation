#include "GizmoAction_MinicutGetPlayTime.h"

const char *GizmoAction_MinicutGetPlayTime::GetName() const {
  return "MiniCutGetPlayTime";
}

void GizmoAction_MinicutGetPlayTime::GetInputs(SCmdParams &params) const {
  params.SanityCheck();
  params.AddParam(SV_GIZMO);
  if (m_InputVariant != 0) {
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
  }
}

void GizmoAction_MinicutGetPlayTime::GetOutputs(SCmdParams &params) const {
  params.SanityCheck();
  params.AddParam(SV_NUMBER);
}