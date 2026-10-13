#include "script/actions/SAction_AtkMngr_SetAllowFinisher.h"

SAction_AtkMngr_SetAllowFinisher::SAction_AtkMngr_SetAllowFinisher() {
    m_Member0xd = 1;
}

const char* SAction_AtkMngr_SetAllowFinisher::GetName() const {
    return "SetAllowFinishers";
}

void SAction_AtkMngr_SetAllowFinisher::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
    params.AddParam(SV_BOOL);
}

void SAction_AtkMngr_SetAllowFinisher::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}