#include "script/actions/SAction_FlowUI_ShowRetryScreen.h"

const char* FlowMissionUI::SAction_FlowUI_ShowRetryScreen::GetName() const {
    return "FlowUI_ShowRetryScreen";
}

void FlowMissionUI::SAction_FlowUI_ShowRetryScreen::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void FlowMissionUI::SAction_FlowUI_ShowRetryScreen::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
