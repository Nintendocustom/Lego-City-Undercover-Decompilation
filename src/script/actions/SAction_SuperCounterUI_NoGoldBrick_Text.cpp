#include "script/actions/SAction_SuperCounterUI_NoGoldBrick_Text.h"

const char* SAction_SuperCounterUI_NoGoldBrick_Text::GetName() const {
    return "SuperCounterUI_NoGoldBrick_Text";
}

void SAction_SuperCounterUI_NoGoldBrick_Text::GetInputs(SCmdParams& params) const {
    params.AddParam(SV_HASH);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_BOOL);

    if (m_InputVariant != 0) {
        params.AddParam(SV_TEXT);
    }
}

void SAction_SuperCounterUI_NoGoldBrick_Text::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
