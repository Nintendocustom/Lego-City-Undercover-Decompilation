#include "script/actions/SAction_PauseKrawlieSpawner.h"

const char* SAction_PauseKrawlieSpawner::GetName() const {
    return "PauseKrawlieSpawner";
}

void SAction_PauseKrawlieSpawner::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_BOOL);
}

void SAction_PauseKrawlieSpawner::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
