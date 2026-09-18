#include "script/actions/SAction_RemoveCharacterFromManifest.h"

const char* SAction_RemoveCharacterFromManifest::GetName() const {
    return "RemoveCharacterFromManifest";
}

void SAction_RemoveCharacterFromManifest::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_NUMBER);
}

void SAction_RemoveCharacterFromManifest::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
