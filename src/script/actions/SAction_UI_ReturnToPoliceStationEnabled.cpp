#include "script/actions/SAction_UI_ReturnToPoliceStationEnabled.h"

const char* SAction_UI_ReturnToPoliceStationEnabled::GetName() const {
    return "UI_ReturnToPoliceStationEnabled";
}

void SAction_UI_ReturnToPoliceStationEnabled::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_UI_ReturnToPoliceStationEnabled::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
