#include "script/actions/SAction_AtkMngr_IsSuspended.h"

SAction_AtkMngr_IsSuspended::SAction_AtkMngr_IsSuspended() {
    m_Member0xd = 1;
}

const char* SAction_AtkMngr_IsSuspended::GetName() const {
    return "IsSuspended";
}

void SAction_AtkMngr_IsSuspended::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
}

void SAction_AtkMngr_IsSuspended::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

ActionState SAction_AtkMngr_IsSuspended::DoExec(WeakPtr<cAttackManager>& manager, ScriptContext& context) {
    context.SetReturn<SVarBool>(0, manager.m_ptr->m_Suspended);
    return ACTION_FINISHED;
}