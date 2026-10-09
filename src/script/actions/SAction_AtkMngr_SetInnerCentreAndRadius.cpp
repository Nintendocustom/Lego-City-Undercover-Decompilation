#include "script/actions/SAction_AtkMngr_SetInnerCentreAndRadius.h"

SAction_AtkMngr_SetInnerCentreAndRadius::SAction_AtkMngr_SetInnerCentreAndRadius() {
    m_Member0xc = 1;
}

const char* SAction_AtkMngr_SetInnerCentreAndRadius::GetName() const {
    return "SetInnerCentreAndRadius";
}

void SAction_AtkMngr_SetInnerCentreAndRadius::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_POSITION);
    params.AddParam(SV_NUMBER);
}

void SAction_AtkMngr_SetInnerCentreAndRadius::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}