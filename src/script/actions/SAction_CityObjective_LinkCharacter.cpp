#include "script/actions/SAction_CityObjective_LinkCharacter.h"

const char* SAction_CityObjective_LinkCharacter::GetName() const {
    return "CityObjective_IsHidden";
}

void SAction_CityObjective_LinkCharacter::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_CITY_OBJECTIVE);
}

void SAction_CityObjective_LinkCharacter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
