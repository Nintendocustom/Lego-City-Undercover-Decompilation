#include "script/actions/GenericAction_FreePlay.h"

const char* GenericAction_FreePlay::GetName() const {
    return "FreeplayActive";
}

void GenericAction_FreePlay::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void GenericAction_FreePlay::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
