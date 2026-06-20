#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAComm_SetCall.h"

const char* SAction_PDAComm_SetCall::GetName() const {
    return "PDAComm_SetCall";
}
void SAction_PDAComm_SetCall::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
}
void SAction_PDAComm_SetCall::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
