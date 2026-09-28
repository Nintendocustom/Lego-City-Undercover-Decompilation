#include "script/actions/SAction_CreateLegoProgressBackup.h"

const char* SAction_CreateLegoProgressBackup::GetName() const {
    return "CreateLegoProgressBackup";
}

void SAction_CreateLegoProgressBackup::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_CreateLegoProgressBackup::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
