#include "script/actions/SAction_AddCharacterToManifest.h"

const char* SAction_AddCharacterToManifest::GetName() const {
    return "AddCharacterToManifest";
}

void SAction_AddCharacterToManifest::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_CHARACTER);
}

void SAction_AddCharacterToManifest::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
