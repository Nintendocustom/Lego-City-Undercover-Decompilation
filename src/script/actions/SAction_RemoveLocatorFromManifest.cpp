#include "script/actions/SAction_RemoveLocatorFromManifest.h"

const char* SAction_RemoveLocatorFromManifest::GetName() const {
    return "RemoveLocatorFromManifest";
}

void SAction_RemoveLocatorFromManifest::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_NUMBER);
}

void SAction_RemoveLocatorFromManifest::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
