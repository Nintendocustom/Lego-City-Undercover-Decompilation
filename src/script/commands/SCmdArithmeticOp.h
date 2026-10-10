#pragma once
#include "script/commands/ScriptCommand.h"

template <typename Derived>
class SCmdArithmeticOp : public ScriptCommand {
public:
    SCmdArithmeticOp(ScriptFile* file, int line) : ScriptCommand(file, line) {}

    void GetInputs(SCmdParams& params) const override {
        params.SanityCheck();
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
    }
    void GetOutputs(SCmdParams& params) const override {
        params.SanityCheck();
        params.AddParam(SV_NUMBER, "*result");
    }
    ActionState Exec(ScriptContext& context) override;
};
