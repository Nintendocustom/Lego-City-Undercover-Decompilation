#include "script/actions/SAction_WorldLevel_IsFullyLoaded.h"

const char* SAction_WorldLevel_IsFullyLoaded::GetName() const {
    return "WorldLevel_IsFullyLoaded";
}

void SAction_WorldLevel_IsFullyLoaded::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_WORLD_LEVEL);
}

void SAction_WorldLevel_IsFullyLoaded::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
