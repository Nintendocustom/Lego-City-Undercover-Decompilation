#include "script/actions/SAction_SetGizmoHintComplete.h"

const char* SAction_SetGizmoHintComplete::GetName() const {
    return "SetGizmoHintComplete";
}

void SAction_SetGizmoHintComplete::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_BOOL);
}

void SAction_SetGizmoHintComplete::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
