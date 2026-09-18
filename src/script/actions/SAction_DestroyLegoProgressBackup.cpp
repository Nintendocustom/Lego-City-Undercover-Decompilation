#include "script/actions/SAction_DestroyLegoProgressBackup.h"

const char* SAction_DestroyLegoProgressBackup::GetName() const {
    return "DestroyLegoProgressBackup";
}

void SAction_DestroyLegoProgressBackup::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_DestroyLegoProgressBackup::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
