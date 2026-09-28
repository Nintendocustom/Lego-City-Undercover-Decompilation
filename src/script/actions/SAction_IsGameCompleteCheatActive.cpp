#include "script/actions/SAction_IsGameCompleteCheatActive.h"

const char* SAction_IsGameCompleteCheatActive::GetName() const {
    return "IsGameCompleteCheatActive";
}

void SAction_IsGameCompleteCheatActive::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_IsGameCompleteCheatActive::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
