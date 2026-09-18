#include "script/actions/SAction_CharacterAvailable.h"

const char* SAction_CharacterAvailable::GetName() const {
    return "CharacterAvailable";
}

void SAction_CharacterAvailable::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_CharacterAvailable::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
