#include "script/actions/CharacterAction/CharacterAction_ResetArrestTime.h"

const char* CharacterAction_ResetArrestTime::GetName() const {
    return "ResetArrestTime";
}

void CharacterAction_ResetArrestTime::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_ResetArrestTime::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
