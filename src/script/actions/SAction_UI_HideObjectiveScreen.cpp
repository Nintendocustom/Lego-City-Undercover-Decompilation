#include "script/actions/SAction_UI_HideObjectiveScreen.h"

const char* SAction_UI_HideObjectiveScreen::GetName() const {
    return "UI_HideObjectiveScreen";
}

void SAction_UI_HideObjectiveScreen::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_UI_HideObjectiveScreen::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
