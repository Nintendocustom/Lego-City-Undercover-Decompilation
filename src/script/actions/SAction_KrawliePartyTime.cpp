#include "script/actions/SAction_KrawliePartyTime.h"

const char* SAction_KrawliePartyTime::GetName() const {
    return "PumpUpTheKrawlieJam";
}

void SAction_KrawliePartyTime::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_POSITION);
    params.AddParam(SV_NUMBER);
}

void SAction_KrawliePartyTime::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
