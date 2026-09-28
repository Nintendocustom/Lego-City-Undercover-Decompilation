#include "script/actions/SAction_PlayerHeldButton.h"

const char* SAction_PlayerHeldButton::GetName() const {
    return "PlayerHeldButton";
}

void SAction_PlayerHeldButton::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_PlayerHeldButton::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
