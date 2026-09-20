#include "script/actions/CharacterAction/CharacterAction_SetArrestTime.h"

const char* CharacterAction_SetArrestTime::GetName() const {
    return "CharacterAction_SetArrestTime";
}

void CharacterAction_SetArrestTime::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_NUMBER);
}

void CharacterAction_SetArrestTime::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
