#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_SetHint.h"

const char* SAction_PDAScan_SetHint::GetName() const {
    return "PDAScan_SetHint";
}
void SAction_PDAScan_SetHint::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    if (m_InputVariant == 1) {
        params.AddParam(SV_NUMBER);
    }
}
void SAction_PDAScan_SetHint::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
