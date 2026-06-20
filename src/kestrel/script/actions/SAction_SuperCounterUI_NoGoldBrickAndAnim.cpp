#include "kestrel/script/actions/SAction_SuperCounterUI_NoGoldBrickAndAnim.h"

const char* SAction_SuperCounterUI_NoGoldBrickAndAnim::GetName() const {
    return "SuperCounterUI_NoGoldBrickAndAnim";
}
void SAction_SuperCounterUI_NoGoldBrickAndAnim::GetInputs(SCmdParams& params) const {
    params.AddParam(SV_HASH);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_BOOL);

    if (reinterpret_cast<const uint8_t*>(&m_InputVariant)[1] != 0) {
        params.AddParam(SV_TEXT);
    }
    if (reinterpret_cast<const uint8_t*>(&m_InputVariant)[0] != 0) {
        params.AddParam(SV_BOOL);
    }
}
void SAction_SuperCounterUI_NoGoldBrickAndAnim::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
