#include "script/actions/SAction_Timer2Text.h"

const char* SAction_Timer2Text::GetName() const {
    return "Text";
}

void SAction_Timer2Text::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TIMER);
}

void SAction_Timer2Text::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
