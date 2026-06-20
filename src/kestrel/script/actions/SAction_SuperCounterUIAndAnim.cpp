#include "kestrel/script/actions/SAction_SuperCounterUIAndAnim.h"

const char* SAction_SuperCounterUIAndAnim::GetName() const {
    return "SuperCounterUIAndAnim";
}
void SAction_SuperCounterUIAndAnim::GetInputs(SCmdParams& params) const {
    params.AddParam(SV_HASH);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
    params.SanityCheck();
    params.AddParam(SV_BOOL);
    if (*reinterpret_cast<const uint8_t*>(&m_InputVariant)) {
        params.SanityCheck();
        params.AddParam(SV_TEXT);
    }
    if (*(reinterpret_cast<const uint8_t*>(&m_InputVariant) + 1)) {
        params.SanityCheck();
        params.AddParam(SV_NUMBER);
    }
}
void SAction_SuperCounterUIAndAnim::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
