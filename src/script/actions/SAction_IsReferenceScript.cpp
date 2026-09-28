#include "script/actions/SAction_IsReferenceScript.h"

const char* SAction_IsReferenceScript::GetName() const {
    return "IsReferenceScript";
}

void SAction_IsReferenceScript::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_IsReferenceScript::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
