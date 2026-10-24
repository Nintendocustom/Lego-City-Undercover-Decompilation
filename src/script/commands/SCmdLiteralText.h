#pragma once

#include "script/commands/ScriptCommand.h"

class ScriptFile;

class SCmdLiteralText : public ScriptCommand {
public:
    SCmdLiteralText(ScriptFile* file, int line, const char* str);
    ~SCmdLiteralText() override;

    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;
    uint32_t GetHashCode() const;

private:
    const char* m_text;
    uint32_t m_hash;
};