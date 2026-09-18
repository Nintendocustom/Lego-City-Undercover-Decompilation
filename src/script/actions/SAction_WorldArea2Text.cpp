#include "script/actions/SAction_WorldArea2Text.h"

const char* SAction_WorldArea2Text::GetName() const {
    return "Text";
}

void SAction_WorldArea2Text::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_WORLD_AREA);
}

void SAction_WorldArea2Text::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
