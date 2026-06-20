#include "kestrel/script/actions/SAction_SuperCounterUI.h"

const char* SAction_SuperCounterUI::GetName() const {
    return "SuperCounterUI";
}
void SAction_SuperCounterUI::GetInputs(SCmdParams& params) const {
    params.AddParam(SV_HASH);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
    params.SanityCheck();
    params.AddParam(SV_BOOL);
    if (static_cast<uint8_t>(m_InputVariant) != 0) {
        params.AddParam(SV_TEXT);
    }
}
void SAction_SuperCounterUI::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
