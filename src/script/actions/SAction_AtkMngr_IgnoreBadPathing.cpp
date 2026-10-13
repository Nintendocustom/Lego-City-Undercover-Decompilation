#include "script/actions/SAction_AtkMngr_IgnoreBadPathing.h"

SAction_AtkMngr_IgnoreBadPathing::SAction_AtkMngr_IgnoreBadPathing() {
    m_Member0xd = 1;
}

const char* SAction_AtkMngr_IgnoreBadPathing::GetName() const {
    return "IgnoreBadPathing";
}

void SAction_AtkMngr_IgnoreBadPathing::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
    params.AddParam(SV_BOOL);
}

void SAction_AtkMngr_IgnoreBadPathing::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}