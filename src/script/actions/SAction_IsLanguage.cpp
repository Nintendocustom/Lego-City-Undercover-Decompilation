#include "script/actions/SAction_IsLanguage.h"

const char* SAction_IsLanguage::GetName() const {
    return "IsLanguage";
}

void SAction_IsLanguage::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_IsLanguage::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
