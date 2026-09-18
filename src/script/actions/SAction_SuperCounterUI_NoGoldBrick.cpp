#include "script/actions/SAction_SuperCounterUI_NoGoldBrick.h"

const char* SAction_SuperCounterUI_NoGoldBrick::GetName() const {
    return "SuperCounterUI_NoGoldBrick";
}

void SAction_SuperCounterUI_NoGoldBrick::GetInputs(SCmdParams& params) const {
    params.AddParam(SV_HASH);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_BOOL);

    if (m_InputVariant != 0) {
        params.AddParam(SV_TEXT);
    }
}

void SAction_SuperCounterUI_NoGoldBrick::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
