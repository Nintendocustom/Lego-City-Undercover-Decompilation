#include "script/actions/SAction_AtkMngr_Resume.h"

SAction_AtkMngr_Resume::SAction_AtkMngr_Resume() {
    m_Member0xd = 1;
}

const char* SAction_AtkMngr_Resume::GetName() const {
    return "Resume";
}

void SAction_AtkMngr_Resume::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
}

void SAction_AtkMngr_Resume::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_AtkMngr_Resume::DoExec(WeakPtr<cAttackManager>& manager, ScriptContext& context) {
    cAttackManager* mngr = manager.get();
    mngr->m_Suspended = false;
    mngr->m_AutoSuspended = false;
    return ACTION_FINISHED;
}