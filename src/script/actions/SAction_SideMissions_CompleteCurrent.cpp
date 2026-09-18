#include "script/actions/SAction_SideMissions_CompleteCurrent.h"

const char* SAction_SideMissions_CompleteCurrent::GetName() const {
    return "SideMissions_CompleteCurrent";
}

void SAction_SideMissions_CompleteCurrent::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}

void SAction_SideMissions_CompleteCurrent::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
