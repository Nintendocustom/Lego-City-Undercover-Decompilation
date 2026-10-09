#pragma once

#include "script/commands/SCmdEqualityOp.h"

class SCmdGreaterThan : public SCmdEqualityOp {
public:
    void* operator new(size_t size) { return ScriptMemory::m_Pool->_PoolBlockAlloc(size, "SCmdGreaterThan"); }

    SCmdGreaterThan(ScriptFile* file, int line);

    const char* GetName() const override;
    bool Op(float a, float b) override;
};