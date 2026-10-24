#include "script/commands/SCmdPrint.h"

const char* SCmdPrint::GetName() const {
    return "SCmdPrint";
}

void SCmdPrint::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SCmdPrint::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
