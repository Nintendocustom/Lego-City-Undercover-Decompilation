#include "script/actions/SAction_UI_ShowObjectiveScreen.h"

const char* SAction_UI_ShowObjectiveScreen::GetName() const {
    return "UI_ShowObjectiveScreen";
}

void SAction_UI_ShowObjectiveScreen::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 0) {
        params.AddParam(SV_BOOL);
        params.AddParam(SV_TEXT);
    } else if (m_InputVariant == 1) {
        params.AddParam(SV_BOOL);
        params.AddParam(SV_TEXT);
        params.AddParam(SV_NUMBER);
    } else if (m_InputVariant == 2) {
        params.AddParam(SV_BOOL);
        params.AddParam(SV_TEXT);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_BOOL);
    }
}

void SAction_UI_ShowObjectiveScreen::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
