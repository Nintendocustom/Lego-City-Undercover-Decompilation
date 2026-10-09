#pragma once

#include "script/commands/SCmdEqualityOp.h"

class SCmdLessThan : public SCmdEqualityOp {
public:
    void* operator new(size_t size) { return ScriptMemory::m_Pool->_PoolBlockAlloc(size, "SCmdLessThan"); }

    SCmdLessThan(ScriptFile* file, int line);

    const char* GetName() const override;
    bool Op(float a, float b) override;
};