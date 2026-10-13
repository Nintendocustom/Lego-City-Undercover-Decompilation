#include "script/actions/SAction_AtkMngr_AddOuterArea.h"

SAction_AtkMngr_AddOuterArea::SAction_AtkMngr_AddOuterArea() {
    m_Member0xc = 1;
}

const char* SAction_AtkMngr_AddOuterArea::GetName() const {
    return "AddOuterArea";
}

void SAction_AtkMngr_AddOuterArea::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_AREA);
}

void SAction_AtkMngr_AddOuterArea::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}