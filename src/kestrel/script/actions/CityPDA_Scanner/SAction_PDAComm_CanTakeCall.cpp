#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAComm_CanTakeCall.h"

const char* SAction_PDAComm_CanTakeCall::GetName() const {
    return "PDAComm_CanTakeCall";
}
void SAction_PDAComm_CanTakeCall::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}
void SAction_PDAComm_CanTakeCall::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
