#include "script/actions/SAction_CityObjective_IsHidden_TEXT.h"

const char* SAction_CityObjective_IsHidden_TEXT::GetName() const {
    return "CityObjective_IsHidden";
}

void SAction_CityObjective_IsHidden_TEXT::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_CityObjective_IsHidden_TEXT::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
