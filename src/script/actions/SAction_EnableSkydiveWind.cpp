#include "script/actions/SAction_EnableSkydiveWind.h"

const char* SAction_EnableSkydiveWind::GetName() const {
    return "EnableSkydiveWind";
}

void SAction_EnableSkydiveWind::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_EnableSkydiveWind::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
