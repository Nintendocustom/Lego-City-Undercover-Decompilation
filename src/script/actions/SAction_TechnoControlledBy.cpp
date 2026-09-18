#include "script/actions/SAction_TechnoControlledBy.h"

const char* SAction_TechnoControlledBy::GetName() const {
    return "TechnoControlledBy";
}

void SAction_TechnoControlledBy::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void SAction_TechnoControlledBy::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}
