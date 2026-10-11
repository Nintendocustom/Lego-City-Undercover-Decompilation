#pragma once
#include "script/commands/ScriptCommand.h"

template <typename Derived>
class SCmdLogicOp : public ScriptCommand {
public:
    SCmdLogicOp(ScriptFile* file, int line) : ScriptCommand(file, line) {}

    void GetInputs(SCmdParams& params) const override {
        params.SanityCheck();
        params.AddParam(SV_BOOL);
        params.AddParam(SV_BOOL);
    }
    void GetOutputs(SCmdParams& params) const override {
        params.SanityCheck();
        params.AddParam(SV_BOOL, "*result");
    }
    ActionState Exec(ScriptContext& context) override;
};
