#include "script/actions/SAction_WorldLevel_Enable.h"

const char* SAction_WorldLevel_Enable::GetName() const {
    return "WorldLevel_Enable";
}

void SAction_WorldLevel_Enable::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_WORLD_LEVEL);
    params.AddParam(SV_BOOL);
}

void SAction_WorldLevel_Enable::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
