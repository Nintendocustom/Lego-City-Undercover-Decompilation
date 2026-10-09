#pragma once

#include "script/common/SCmdParams.h"
#include "script/common/ScriptVarTypeEnum.h"

class ScriptFile;
class SAction;
struct ScriptContext;

namespace SingleList {
struct Link {
    Link* m_pNext;
};
}  // namespace SingleList

class ScriptCommand : public SingleList::Link {
public:
    ScriptCommand(ScriptFile* file, int line);
    virtual ~ScriptCommand();

    virtual const char* GetName() const = 0;
    virtual void GetInputs(SCmdParams& params) const = 0;
    virtual void GetOutputs(SCmdParams& params) const = 0;
    virtual void SetConditionDataIx(int& ix);
    virtual ActionState Exec(ScriptContext& ctx) = 0;

    void Run(ScriptContext& context, int skipConversion);
    void ConvertTypes(ScriptContext& context);
    void AddConverter(int paramIndex, SAction* converter);
    void Error(const char* msg) const;
    void Print() const;

private:
    SAction** m_converters;
};
