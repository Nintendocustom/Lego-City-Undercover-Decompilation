#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDADemo_Run.h"

const char* SAction_PDADemo_Run::GetName() const {
    return "PDADemo_Run";
}
void SAction_PDADemo_Run::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
}
