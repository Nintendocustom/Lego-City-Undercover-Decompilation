#include "script/actions/SAction_UnlockSequence.h"

const char* SAction_UnlockSequence::GetName() const {
    return "UnlockSequence";
}

void SAction_UnlockSequence::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_TEXT);
}

void SAction_UnlockSequence::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
