#include "script/actions/SAction_UI_SetMissionDamageBarText.h"

const char* SAction_UI_SetMissionDamageBarText::GetName() const {
    return "UI_SetMissionDamageBarText";
}

void SAction_UI_SetMissionDamageBarText::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_UI_SetMissionDamageBarText::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
