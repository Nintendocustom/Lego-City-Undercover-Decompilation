#include "script/actions/SAction_LCUITargetTypeSwitchToBgLoadedFlashFile.h"

const char* SAction_LCUITargetTypeSwitchToBgLoadedFlashFile::GetName() const {
    return "LCUITargetTypeSwitchToBgLoadedFlashFile";
}

void SAction_LCUITargetTypeSwitchToBgLoadedFlashFile::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_LCUITargetTypeSwitchToBgLoadedFlashFile::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
