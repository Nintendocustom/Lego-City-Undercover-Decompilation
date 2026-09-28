#pragma once

#include "script/actions/SAction.h"

namespace FlowMissionUI {
class SAction_FlowUI_ShowRetryScreen : public SAction {
public:
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;
};
}  // namespace FlowMissionUI