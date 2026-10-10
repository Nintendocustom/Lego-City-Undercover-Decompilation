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