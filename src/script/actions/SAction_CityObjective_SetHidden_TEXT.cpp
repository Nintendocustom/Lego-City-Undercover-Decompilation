#include "script/actions/SAction_CityObjective_SetHidden_TEXT.h"

const char* SAction_CityObjective_SetHidden_TEXT::GetName() const {
    return "CityObjective_SetHidden";
}

void SAction_CityObjective_SetHidden_TEXT::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_BOOL);
}

void SAction_CityObjective_SetHidden_TEXT::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
