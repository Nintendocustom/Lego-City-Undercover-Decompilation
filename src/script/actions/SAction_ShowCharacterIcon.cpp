#include "script/actions/SAction_ShowCharacterIcon.h"

const char* SAction_ShowCharacterIcon::GetName() const {
    return "ShowCharacterIcon";
}

void SAction_ShowCharacterIcon::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_BOOL);
}

void SAction_ShowCharacterIcon::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
