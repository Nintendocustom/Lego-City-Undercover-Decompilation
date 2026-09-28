#include "script/actions/SAction_EnableDropInSequence.h"

const char* SAction_EnableDropInSequence::GetName() const {
    return "EnableDropInSequence";
}

void SAction_EnableDropInSequence::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
    params.AddParam(SV_BOOL);
}

void SAction_EnableDropInSequence::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
