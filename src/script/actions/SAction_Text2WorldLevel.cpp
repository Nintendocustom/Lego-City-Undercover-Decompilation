#include "script/actions/SAction_Text2WorldLevel.h"

const char* SAction_Text2WorldLevel::GetName() const {
    return "WorldLevel";
}

void SAction_Text2WorldLevel::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_Text2WorldLevel::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_WORLD_LEVEL);
}
