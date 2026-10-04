#include "script/actions/SAction_PlayerInsideArea.h"

const char* SAction_PlayerInsideArea::GetName() const {
    return "Area_PlayerInside";
}

void SAction_PlayerInsideArea::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_AREA);

    if(this->m_field_0xc) {
        params.SanityCheck();
        params.AddParam(SV_NUMBER);
    }
}

void SAction_PlayerInsideArea::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
