#include "script/actions/SAction_AtkMngr_AllowAttacks.h"

SAction_AtkMngr_AllowAttacks::SAction_AtkMngr_AllowAttacks() {
    m_Member0xd = 1;
}

const char* SAction_AtkMngr_AllowAttacks::GetName() const {
    return "AllowAttacks";
}

void SAction_AtkMngr_AllowAttacks::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
}

void SAction_AtkMngr_AllowAttacks::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_AtkMngr_AllowAttacks::DoExec(WeakPtr<cAttackManager>& manager, ScriptContext& context) {
    manager.m_ptr->m_AllowAttacks = true;
    return ACTION_FINISHED;
}