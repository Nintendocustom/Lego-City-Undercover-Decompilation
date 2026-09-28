#include "script/actions/SAction_SafeToInterruptGameplay.h"

const char* SAction_SafeToInterruptGameplay::GetName() const {
    return "SafeToInterruptGameplay";
}

void SAction_SafeToInterruptGameplay::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_SafeToInterruptGameplay::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
