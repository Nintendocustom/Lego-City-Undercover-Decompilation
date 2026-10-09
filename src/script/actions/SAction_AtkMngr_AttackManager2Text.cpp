#include "script/actions/SAction_AtkMngr_AttackManager2Text.h"

const char* SAction_AtkMngr_AttackManager2Text::GetName() const {
    return "Text";
}

void SAction_AtkMngr_AttackManager2Text::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
}

void SAction_AtkMngr_AttackManager2Text::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}