#include "script/actions/SAction_UI_Map_EndTutorial.h"

const char* SAction_UI_Map_EndTutorial::GetName() const {
    return "UI_Map_EndTutorial";
}

void SAction_UI_Map_EndTutorial::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}

void SAction_UI_Map_EndTutorial::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
