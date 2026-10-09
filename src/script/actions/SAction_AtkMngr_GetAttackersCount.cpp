#include "script/actions/SAction_AtkMngr_GetAttackersCount.h"

SAction_AtkMngr_GetAttackersCount::SAction_AtkMngr_GetAttackersCount() {
    m_Member0xd = 1;
}

const char* SAction_AtkMngr_GetAttackersCount::GetName() const {
    return "AttackersCount";
}

void SAction_AtkMngr_GetAttackersCount::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
}

void SAction_AtkMngr_GetAttackersCount::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}