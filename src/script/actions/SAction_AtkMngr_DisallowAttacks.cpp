#include "script/actions/SAction_AtkMngr_DisallowAttacks.h"

SAction_AtkMngr_DisallowAttacks::SAction_AtkMngr_DisallowAttacks() {
    m_Member0xd = 1;
}

const char* SAction_AtkMngr_DisallowAttacks::GetName() const {
    return "DisallowAttacks";
}

void SAction_AtkMngr_DisallowAttacks::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
}

void SAction_AtkMngr_DisallowAttacks::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_AtkMngr_DisallowAttacks::DoExec(WeakPtr<cAttackManager>& manager,
                                                    ScriptContext& context) {
    manager.m_ptr->m_AllowAttacks = false;
    return ACTION_FINISHED;
}