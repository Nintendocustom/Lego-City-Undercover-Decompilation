#include "script/actions/SAction_ResetTimer.h"

const char* SAction_ResetTimer::GetName() const {
    return "Timer_Reset";
}

void SAction_ResetTimer::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TIMER);
}

void SAction_ResetTimer::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
