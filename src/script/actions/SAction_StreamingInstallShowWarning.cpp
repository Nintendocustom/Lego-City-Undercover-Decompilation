#include "script/actions/SAction_StreamingInstallShowWarning.h"

const char* SAction_StreamingInstallShowWarning::GetName() const {
    return "StreamingInstallShowWarning";
}

void SAction_StreamingInstallShowWarning::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}

void SAction_StreamingInstallShowWarning::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
