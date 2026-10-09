#include "script/actions/SAction_AtkMngr_Finish.h"

SAction_AtkMngr_Finish::SAction_AtkMngr_Finish() {
    m_Member0xd = 0;
}

const char* SAction_AtkMngr_Finish::GetName() const {
    return "Finish";
}

void SAction_AtkMngr_Finish::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
}

void SAction_AtkMngr_Finish::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}