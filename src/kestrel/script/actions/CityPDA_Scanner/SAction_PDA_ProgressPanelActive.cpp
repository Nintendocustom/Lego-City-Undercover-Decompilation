#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDA_ProgressPanelActive.h"

const char* SAction_PDA_ProgressPanelActive::GetName() const {
    return "PDA_ProgressPanelActive";
}
void SAction_PDA_ProgressPanelActive::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}
void SAction_PDA_ProgressPanelActive::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
