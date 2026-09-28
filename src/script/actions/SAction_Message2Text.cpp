#include "script/actions/SAction_Message2Text.h"

const char* SAction_Message2Text::GetName() const {
    return "Text";
}

void SAction_Message2Text::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_MESSAGE);
}

void SAction_Message2Text::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
