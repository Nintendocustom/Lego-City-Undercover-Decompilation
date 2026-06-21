#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_RemoveRequest.h"

const char* SAction_PDAScan_RemoveRequest::GetName() const {
    return "PDAScan_RemoveRequest";
}
void SAction_PDAScan_RemoveRequest::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
    params.AddParam(SV_HASH);
}
void SAction_PDAScan_RemoveRequest::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
