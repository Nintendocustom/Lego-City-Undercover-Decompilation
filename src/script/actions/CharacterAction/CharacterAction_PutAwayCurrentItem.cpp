#include "script/actions/CharacterAction/CharacterAction_PutAwayCurrentItem.h"

const char* CharacterAction_PutAwayCurrentItem::GetName() const {
    return "Character_PutAwayCurrentItem";
}

void CharacterAction_PutAwayCurrentItem::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_PutAwayCurrentItem::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
