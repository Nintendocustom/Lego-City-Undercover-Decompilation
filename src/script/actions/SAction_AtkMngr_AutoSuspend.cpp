#include "script/actions/SAction_AtkMngr_AutoSuspend.h"

SAction_AtkMngr_AutoSuspend::SAction_AtkMngr_AutoSuspend(bool autoSuspend) {
    m_AutoSuspend = autoSuspend;
    m_Member0xd = 1;
}

const char* SAction_AtkMngr_AutoSuspend::GetName() const {
    return "AutoSuspend";
}

void SAction_AtkMngr_AutoSuspend::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
    params.AddParam(SV_POSITION);
    params.AddParam(SV_NUMBER);
    if (m_AutoSuspend) {
        params.AddParam(SV_NUMBER);
    }
}

void SAction_AtkMngr_AutoSuspend::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}