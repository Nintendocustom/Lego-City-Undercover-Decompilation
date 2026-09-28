#include "script/actions/SAction_CityObjective_LinkCharacter_TEXT.h"

const char* SAction_CityObjective_LinkCharacter_TEXT::GetName() const {
    return "CityObjective_LinkCharacter";
}

void SAction_CityObjective_LinkCharacter_TEXT::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_TEXT);
}

void SAction_CityObjective_LinkCharacter_TEXT::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
