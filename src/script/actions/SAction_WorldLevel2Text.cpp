#include "script/actions/SAction_WorldLevel2Text.h"

const char* SAction_WorldLevel2Text::GetName() const {
    return "Text";
}

void SAction_WorldLevel2Text::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_WORLD_LEVEL);
}

void SAction_WorldLevel2Text::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
