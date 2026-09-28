#include "script/actions/SAction_ShowTaggingIcon.h"

const char* SAction_ShowTaggingIcon::GetName() const {
    return "ShowTaggingIcon";
}

void SAction_ShowTaggingIcon::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_ShowTaggingIcon::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
