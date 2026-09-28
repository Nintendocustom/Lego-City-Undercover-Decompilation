#include "script/actions/SAction_AttachAnimate.h"

const char* SAction_AttachAnimate::GetName() const {
    return "AttachAndAnimate";
}

void SAction_AttachAnimate::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_TEXT);
}

void SAction_AttachAnimate::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
