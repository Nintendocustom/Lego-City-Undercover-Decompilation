#include "script/actions/SAction_TextToHash.h"

const char* SAction_TextToHash::GetName() const {
    return "Hash";
}

void SAction_TextToHash::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_TextToHash::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
}
