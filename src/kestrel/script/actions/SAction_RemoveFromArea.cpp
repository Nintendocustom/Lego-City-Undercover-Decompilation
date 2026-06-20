#include "kestrel/script/actions/SAction_RemoveFromArea.h"

const char* SAction_RemoveFromArea::GetName() const {
    return "Area_RemoveFromArea";
}
void SAction_RemoveFromArea::GetInputs(SCmdParams& params) const {
    switch (m_InputVariant) {
    case 2:
        params.AddParam(SV_AREA);
        params.AddParam(SV_HASH);
        params.AddParam(SV_VEHICLE);
        break;
    case 1:
        params.AddParam(SV_AREA);
        params.AddParam(SV_HASH);
        params.AddParam(SV_CHARACTER);
        break;
    default:
        params.AddParam(SV_AREA);
        params.AddParam(SV_HASH);
        break;
    }
}
void SAction_RemoveFromArea::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
