#include "script/actions/SAction_UI_ConfirmLevelSummaryScreen.h"

const char* SAction_UI_ConfirmLevelSummaryScreen::GetName() const {
    return "UI_ConfirmLevelSummaryScreen";
}

void SAction_UI_ConfirmLevelSummaryScreen::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 1) {
        params.SanityCheck();
        params.AddParam(SV_TEXT);
    } else if (m_InputVariant == 2) {
        params.SanityCheck();
        params.AddParam(SV_TEXT);
        params.AddParam(SV_TEXT);
    }
}

void SAction_UI_ConfirmLevelSummaryScreen::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_UI_ConfirmLevelSummaryScreen::Exec(ScriptContext& context) {
    return ACTION_FINISHED;
}
