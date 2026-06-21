#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDADemo_IsRunning.h"

const char* SAction_PDADemo_IsRunning::GetName() const {
    return "PDADemo_IsRunning";
}
void SAction_PDADemo_IsRunning::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
