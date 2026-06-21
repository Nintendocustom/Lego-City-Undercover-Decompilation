#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_AddRequest.h"

const char* SAction_PDAScan_AddRequest::GetName() const {
    return "PDAScan_AddRequest";
}
void SAction_PDAScan_AddRequest::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
    params.AddParam(SV_HASH);
    params.AddParam(SV_UNKNOWN_1);
    params.AddParam(SV_BOOL);
}
void SAction_PDAScan_AddRequest::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
