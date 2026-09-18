#include "script/actions/SAction_UI_PlayerUsingFastTravel.h"

const char* SAction_UI_PlayerUsingFastTravel::GetName() const {
    return "UI_PlayerUsingFastTravel";
}

void SAction_UI_PlayerUsingFastTravel::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_UI_PlayerUsingFastTravel::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
