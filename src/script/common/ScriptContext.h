#pragma once

#include "script/common/ScriptVariableTags.h"

struct ScriptContext {
    template <typename TTag, typename TValue>
    void SetReturn(int index, TValue value);
};