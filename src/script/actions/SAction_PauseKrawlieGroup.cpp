#include "script/actions/SAction_PauseKrawlieGroup.h"

const char* SAction_PauseKrawlieGroup::GetName() const {
    return "PauseKrawlieGroup";
}

void SAction_PauseKrawlieGroup::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_BOOL);
}

void SAction_PauseKrawlieGroup::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
