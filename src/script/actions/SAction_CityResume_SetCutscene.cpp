#include "script/actions/SAction_CityResume_SetCutscene.h"

const char* SAction_CityResume_SetCutscene::GetName() const {
    return "CityResume_SetCutscene";
}

void SAction_CityResume_SetCutscene::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_CityResume_SetCutscene::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
