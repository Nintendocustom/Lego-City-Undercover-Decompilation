#include "script/actions/SAction_CityObjective_IsComplete_TEXT.h"

const char* SAction_CityObjective_IsComplete_TEXT::GetName() const {
    return "CityObjective_IsComplete";
}

void SAction_CityObjective_IsComplete_TEXT::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_CityObjective_IsComplete_TEXT::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
