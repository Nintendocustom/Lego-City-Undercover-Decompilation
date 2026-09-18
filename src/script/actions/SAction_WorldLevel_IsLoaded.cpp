#include "script/actions/SAction_WorldLevel_IsLoaded.h"

const char* SAction_WorldLevel_IsLoaded::GetName() const {
    return "WorldLevel_IsLoaded";
}

void SAction_WorldLevel_IsLoaded::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_WORLD_LEVEL);
}

void SAction_WorldLevel_IsLoaded::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
