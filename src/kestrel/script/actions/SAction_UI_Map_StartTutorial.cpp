#include "kestrel/script/actions/SAction_UI_Map_StartTutorial.h"

const char* SAction_UI_Map_StartTutorial::GetName() const {
    return "UI_Map_StartTutorial";
}
void SAction_UI_Map_StartTutorial::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}
void SAction_UI_Map_StartTutorial::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
