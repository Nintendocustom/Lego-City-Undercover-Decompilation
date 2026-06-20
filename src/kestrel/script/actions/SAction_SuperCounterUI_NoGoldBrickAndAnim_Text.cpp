#include "kestrel/script/actions/SAction_SuperCounterUI_NoGoldBrickAndAnim_Text.h"

const char* SAction_SuperCounterUI_NoGoldBrickAndAnim_Text::GetName() const {
    return "SuperCounterUI_NoGoldBrickAndAnim_Text";
}
void SAction_SuperCounterUI_NoGoldBrickAndAnim_Text::GetInputs(SCmdParams& params) const {
    params.AddParam(SV_HASH);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_BOOL);
    if (static_cast<uint8_t>(m_InputVariant) != 0) {
        params.AddParam(SV_TEXT);
    }
}
void SAction_SuperCounterUI_NoGoldBrickAndAnim_Text::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
