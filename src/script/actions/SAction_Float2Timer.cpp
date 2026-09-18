#include "script/actions/SAction_Float2Timer.h"

const char* SAction_Float2Timer::GetName() const {
    return "Timer";
}

void SAction_Float2Timer::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SAction_Float2Timer::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TIMER);
}
