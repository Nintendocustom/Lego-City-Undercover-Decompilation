#include "script/actions/SAction_ShowObjectiveMarker.h"

const char* SAction_ShowObjectiveMarker::GetName() const {
    return "ShowObjectiveMarker";
}

void SAction_ShowObjectiveMarker::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_ShowObjectiveMarker::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
