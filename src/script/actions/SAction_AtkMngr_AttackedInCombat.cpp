#include "script/actions/SAction_AtkMngr_AttackedInCombat.h"

SAction_AtkMngr_AttackedInCombat::SAction_AtkMngr_AttackedInCombat() {
    m_Member0xd = 1;
}

const char* SAction_AtkMngr_AttackedInCombat::GetName() const {
    return "InCombat";
}

void SAction_AtkMngr_AttackedInCombat::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
}

void SAction_AtkMngr_AttackedInCombat::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

ActionState SAction_AtkMngr_AttackedInCombat::DoExec(WeakPtr<cAttackManager>& manager,
                                                     ScriptContext& context) {
    context.SetReturn<SVarBool>(0, manager.m_ptr->m_AttackedInCombat);
    return ACTION_FINISHED;
}