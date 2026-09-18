#include "script/actions/SAction_PlayersInArea.h"

const char* SAction_PlayersInArea::GetName() const {
    return "Area_PlayersInside";
}

void SAction_PlayersInArea::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_AREA);
    params.AddParam(SV_NUMBER);
}

void SAction_PlayersInArea::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
