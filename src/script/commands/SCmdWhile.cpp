#include "script/commands/SCmdWhile.h"

const char* SCmdWhile::GetName() const {
    return "SCmdWhile";
}

void SCmdWhile::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SCmdWhile::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
