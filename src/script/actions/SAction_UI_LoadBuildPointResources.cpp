#include "script/actions/SAction_UI_LoadBuildPointResources.h"

const char* SAction_UI_LoadBuildPointResources::GetName() const {
    return "UI_LoadBuildPointResources";
}

void SAction_UI_LoadBuildPointResources::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_TEXT);
}

void SAction_UI_LoadBuildPointResources::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
