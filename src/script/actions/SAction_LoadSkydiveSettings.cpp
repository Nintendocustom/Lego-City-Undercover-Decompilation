#include "script/actions/SAction_LoadSkydiveSettings.h"

const char* SAction_LoadSkydiveSettings::GetName() const {
    return "LoadSkydiveSettings";
}

void SAction_LoadSkydiveSettings::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_LoadSkydiveSettings::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
