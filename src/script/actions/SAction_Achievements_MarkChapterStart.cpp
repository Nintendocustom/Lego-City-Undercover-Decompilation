#include "script/actions/SAction_Achievements_MarkChapterStart.h"

const char* SAction_Achievements_MarkChapterStart::GetName() const {
    return "Achievements_MarkChapterStart";
}

void SAction_Achievements_MarkChapterStart::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SAction_Achievements_MarkChapterStart::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_Achievements_MarkChapterStart::Exec(ScriptContext& context) {
    return ACTION_FINISHED;
}
