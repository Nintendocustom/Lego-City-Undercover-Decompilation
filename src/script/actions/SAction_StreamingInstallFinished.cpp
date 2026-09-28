#include "script/actions/SAction_StreamingInstallFinished.h"

const char* SAction_StreamingInstallFinished::GetName() const {
    return "StreamingInstallFinished";
}

void SAction_StreamingInstallFinished::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_StreamingInstallFinished::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
