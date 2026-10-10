#include "script/actions/SAction_AtkMngr_SetTutorialMode.h"

SAction_AtkMngr_SetTutorialMode::SAction_AtkMngr_SetTutorialMode() {
    m_Member0xd = 1;
}

const char* SAction_AtkMngr_SetTutorialMode::GetName() const {
    return "SetTutorialMode";
}

void SAction_AtkMngr_SetTutorialMode::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
}

void SAction_AtkMngr_SetTutorialMode::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_AtkMngr_SetTutorialMode::DoExec(WeakPtr<cAttackManager>& manager,
                                                    ScriptContext& context) {
    manager.m_ptr->m_TutorialMode = 1;
    return ACTION_FINISHED;
}