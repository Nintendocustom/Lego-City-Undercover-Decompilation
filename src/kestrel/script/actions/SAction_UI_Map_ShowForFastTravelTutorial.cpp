#include "kestrel/script/actions/SAction_UI_Map_ShowForFastTravelTutorial.h"

const char* SAction_UI_Map_ShowForFastTravelTutorial::GetName() const {
    return "UI_Map_ShowForFastTravelTutorial";
}
void SAction_UI_Map_ShowForFastTravelTutorial::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}
void SAction_UI_Map_ShowForFastTravelTutorial::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
