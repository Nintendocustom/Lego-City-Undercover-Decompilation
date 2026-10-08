#include "script/actions/SAction_AtkMngr_Text2AttackManager.h"

const char* SAction_AtkMngr_Text2AttackManager::GetName() const {
    return "AttackManager";
}

void SAction_AtkMngr_Text2AttackManager::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_AtkMngr_Text2AttackManager::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
}