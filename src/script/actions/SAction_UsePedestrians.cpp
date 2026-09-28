#include "script/actions/SAction_UsePedestrians.h"

const char* SAction_UsePedestrians::GetName() const {
    return "UsePedestrians";
}

void SAction_UsePedestrians::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_UsePedestrians::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
