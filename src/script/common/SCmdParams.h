#pragma once
#include "script/common/ScriptVarTypeEnum.h"
#include <cstdint>

class NuConstStringManager {
public:
    void Free(const char* str);
};
namespace NuCore {
NuConstStringManager* GetConstStringManager();
}

struct SCmdParamEntry {
    SCmdParamEntry* m_Prev;
    union {
        char* m_String;
        uint64_t m_Value64;
    } m_Data;

    ScriptVarType m_Type;
    unsigned char m_Flag14;  // 0x14: Unknown flag
    bool m_IsAllocated;

    SCmdParamEntry() : m_Prev(nullptr), m_Data{nullptr}, m_Type(SV_GLOBAL), m_Flag14(0), m_IsAllocated(0) {}
    ~SCmdParamEntry() {
        if (m_IsAllocated) {
            char* str = m_Data.m_String;
            NuConstStringManager* mgr = NuCore::GetConstStringManager();
            mgr->Free(str);
        }
    }
};

struct SCmdParams {
    SCmdParamEntry m_Args[64];  // 0x00 - 0x600: Array of 64 parameter entries
    int m_CurrentParamIndex;    // 0x600: Current index of arguments

    SCmdParams() : m_CurrentParamIndex(-1) {}
    ~SCmdParams() = default;

    void AddParam(ScriptVarType type, const char* str = nullptr) {
        int idx = m_CurrentParamIndex;

        if (idx < 0) {
            m_CurrentParamIndex = 0;
            idx = 0;
        }

        if (type == SV_GLOBAL) {
            return;
        }

        SCmdParamEntry* entry = &m_Args[idx];

        entry->m_Type = type;
        entry->m_Flag14 = 0;

        if (entry->m_IsAllocated) {
            char* strPtr = entry->m_Data.m_String;
            NuCore::GetConstStringManager()->Free(strPtr);
            entry->m_IsAllocated = 0;
        }

        entry->m_Data.m_String = const_cast<char*>(str);

        m_CurrentParamIndex++;
    }
    void SanityCheck() {
        if (m_CurrentParamIndex < 0) {
            m_CurrentParamIndex = 0;
        }
    }
};
