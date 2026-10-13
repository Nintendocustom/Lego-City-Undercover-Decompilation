#include "script/actions/SAction_AtkMngr_StopAutoSuspend.h"

SAction_AtkMngr_StopAutoSuspend::SAction_AtkMngr_StopAutoSuspend() {
    m_Member0xd = 1;
}

const char* SAction_AtkMngr_StopAutoSuspend::GetName() const {
    return "AutoSuspend";
}

void SAction_AtkMngr_StopAutoSuspend::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
}

void SAction_AtkMngr_StopAutoSuspend::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_AtkMngr_StopAutoSuspend::DoExec(WeakPtr<cAttackManager>& manager,
                                                    ScriptContext& context) {
    manager.m_ptr->m_AutoSuspended = false;
    return ACTION_FINISHED;
}