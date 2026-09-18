#include "script/actions/SAction_CityResume_SetDoor.h"

const char* SAction_CityResume_SetDoor::GetName() const {
    return "CityResume_SetDoor";
}

void SAction_CityResume_SetDoor::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_CityResume_SetDoor::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
