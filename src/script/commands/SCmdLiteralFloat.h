#pragma once
#include "script/commands/ScriptCommand.h"

class SCmdLiteralFloat : public ScriptCommand {
public:
    ~SCmdLiteralFloat() override;
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& ctx) override;

private:
    float m_value;
};
