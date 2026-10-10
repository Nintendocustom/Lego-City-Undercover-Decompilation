#pragma clang diagnostic ignored "-Wswitch-bool"

#include "script/actions/SAction_AtkMngr_Suspend.h"

SAction_AtkMngr_Suspend::SAction_AtkMngr_Suspend() {
    m_Member0xd = 1;
}

const char* SAction_AtkMngr_Suspend::GetName() const {
    return "Suspend";
}

void SAction_AtkMngr_Suspend::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
}

void SAction_AtkMngr_Suspend::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_AtkMngr_Suspend::DoExec(WeakPtr<cAttackManager>& manager, ScriptContext& context) {
    cAttackManager* mngr = manager.get();
    switch (mngr->m_Suspended) {
    case true:
        mngr->m_Suspended = true;
        break;
    case false:
        mngr->CalcSuspendPositions();
        mngr->m_bool_0x3564 = false;
        mngr->m_bool_0x6bb4 = false;
        break;
    }
    mngr->m_AutoSuspended = false;
    return ACTION_FINISHED;
}