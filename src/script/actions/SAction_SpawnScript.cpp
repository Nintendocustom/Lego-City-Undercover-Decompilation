#include "script/actions/SAction_SpawnScript.h"

const char* SAction_SpawnScript::GetName() const {
    return "SpawnScript";
}

void SAction_SpawnScript::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_SpawnScript::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_SCRIPT);
}
