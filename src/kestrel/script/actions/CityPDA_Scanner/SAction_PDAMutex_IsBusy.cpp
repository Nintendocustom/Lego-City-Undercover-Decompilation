#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAMutex_IsBusy.h"

const char* SAction_PDAMutex_IsBusy::GetName() const {
    return "PDAMutex_IsBusy";
}
void SAction_PDAMutex_IsBusy::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}
void SAction_PDAMutex_IsBusy::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
