#include "script/actions/SAction_UI_SetHeroBarMax.h"

const char* SAction_UI_SetHeroBarMax::GetName() const {
    return "UI_SetHeroBarMax";
}

void SAction_UI_SetHeroBarMax::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SAction_UI_SetHeroBarMax::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
