#include "script/actions/SAction_Area2Text.h"

const char* SAction_Area2Text::GetName() const {
    return "Text";
}

void SAction_Area2Text::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_AREA);
}

void SAction_Area2Text::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
