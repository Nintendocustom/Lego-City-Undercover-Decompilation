#include "script/actions/SAction_SideMissions_ExitCurrent.h"

const char* SAction_SideMissions_ExitCurrent::GetName() const {
    return "SideMissions_ExitCurrent";
}

void SAction_SideMissions_ExitCurrent::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}

void SAction_SideMissions_ExitCurrent::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
