#include "script/actions/SAction_GetClassUnlocked.h"

const char* SAction_GetClassUnlocked::GetName() const {
    return "GetClassUnlocked";
}

void SAction_GetClassUnlocked::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_GetClassUnlocked::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
