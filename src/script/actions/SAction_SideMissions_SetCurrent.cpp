#include "script/actions/SAction_SideMissions_SetCurrent.h"

const char* SAction_SideMissions_SetCurrent::GetName() const {
    return "SideMissions_SetCurrent";
}

void SAction_SideMissions_SetCurrent::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_BOOL);
    params.AddParam(SV_ANY);
}

void SAction_SideMissions_SetCurrent::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
