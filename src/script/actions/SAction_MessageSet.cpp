#include "script/actions/SAction_MessageSet.h"

const char* SAction_MessageSet::GetName() const {
    return "Message_Set";
}

void SAction_MessageSet::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_MESSAGE);
    params.AddParam(SV_NUMBER);
}

void SAction_MessageSet::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
