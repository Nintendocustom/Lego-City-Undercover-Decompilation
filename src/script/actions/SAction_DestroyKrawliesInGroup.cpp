#include "script/actions/SAction_DestroyKrawliesInGroup.h"

const char* SAction_DestroyKrawliesInGroup::GetName() const {
    return "DestroyKrawliesInGroup";
}

void SAction_DestroyKrawliesInGroup::GetInputs(SCmdParams& params) const {
    params.AddParam(SV_TEXT);
}

void SAction_DestroyKrawliesInGroup::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
