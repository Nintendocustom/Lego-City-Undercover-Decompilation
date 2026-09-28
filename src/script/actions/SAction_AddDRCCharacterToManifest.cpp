#include "script/actions/SAction_AddDRCCharacterToManifest.h"

const char* SAction_AddDRCCharacterToManifest::GetName() const {
    return "AddDRCCharacterToManifest";
}

void SAction_AddDRCCharacterToManifest::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_CHARACTER);
}

void SAction_AddDRCCharacterToManifest::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
