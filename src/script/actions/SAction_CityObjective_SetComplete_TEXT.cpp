#include "script/actions/SAction_CityObjective_SetComplete_TEXT.h"

const char* SAction_CityObjective_SetComplete_TEXT::GetName() const {
    return "CityObjective_SetComplete";
}

void SAction_CityObjective_SetComplete_TEXT::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_CityObjective_SetComplete_TEXT::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
