#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAComm_IsBusy.h"

const char* SAction_PDAComm_IsBusy::GetName() const {
    return "PDAComm_IsBusy";
}
void SAction_PDAComm_IsBusy::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}
void SAction_PDAComm_IsBusy::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
