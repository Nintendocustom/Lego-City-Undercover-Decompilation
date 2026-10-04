#include "script/actions/SAction_SetHotSpot.h"

const char* SAction_SetHotSpot::GetName() const {
    return "SetHotSpot";
}

void SAction_SetHotSpot::GetInputs(SCmdParams& params) const {
    switch (this->m_field_0xc) {
        case 0:
            params.SanityCheck();
            break;
        case 1:
            params.SanityCheck();
            params.AddParam(SV_AREA);
            break;
    }
}

void SAction_SetHotSpot::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
