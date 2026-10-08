#include "script/actions/SAction_AtkMngr_CreateAttackManager.h"

const char* SAction_AtkMngr_CreateAttackManager::GetName() const {
    return "CreateAttackManager";
}

void SAction_AtkMngr_CreateAttackManager::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_CHARACTER);
}

void SAction_AtkMngr_CreateAttackManager::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
}