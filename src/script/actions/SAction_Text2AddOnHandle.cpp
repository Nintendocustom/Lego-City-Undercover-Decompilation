#include "script/actions/SAction_Text2AddOnHandle.h"

const char* SAction_Text2AddOnHandle::GetName() const {
    return "AddOnHandle";
}

void SAction_Text2AddOnHandle::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_Text2AddOnHandle::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ADD_ON_HANDLE);
}
