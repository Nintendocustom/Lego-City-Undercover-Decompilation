#include "script/actions/SAction_ApplyLegoProgressBackup.h"

const char* SAction_ApplyLegoProgressBackup::GetName() const {
    return "ApplyLegoProgressBackup";
}

void SAction_ApplyLegoProgressBackup::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_ApplyLegoProgressBackup::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
