#include "script/actions/SAction_CityResume_Reset.h"

const char* SAction_CityResume_Reset::GetName() const {
    return "CityResume_Reset";
}

void SAction_CityResume_Reset::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_CityResume_Reset::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
