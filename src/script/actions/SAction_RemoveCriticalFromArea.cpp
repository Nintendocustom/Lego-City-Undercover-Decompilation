#include "script/actions/SAction_RemoveCriticalFromArea.h"

const char* SAction_RemoveCriticalFromArea::GetName() const {
    return "Area_RemoveCriticalFromArea";
}

void SAction_RemoveCriticalFromArea::GetInputs(SCmdParams& params) const {
    switch (this->m_field_0xc) {
        case 2:
            params.SanityCheck();
            params.AddParam(SV_AREA);
            params.AddParam(SV_HASH);
            params.AddParam(SV_VEHICLE);
            break;
        case 1:
            params.SanityCheck();
            params.AddParam(SV_AREA);
            params.AddParam(SV_HASH);
            params.AddParam(SV_CHARACTER);
            break;
        default:
            params.SanityCheck();
            params.AddParam(SV_AREA);
            params.AddParam(SV_HASH);
            break;
    }
}

void SAction_RemoveCriticalFromArea::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
