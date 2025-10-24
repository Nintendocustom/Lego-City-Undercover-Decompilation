#pragma once

struct NuThreadCreateParameters;
char* NuStrNCpy(char* dest, const char* src, int count);

enum NUTHREADPRIORITY { LOWEST = 0, LOW = 1, NORMAL = 2, HIGH = 3, HIGHEST = 4 };

class NuThreadBase {
public:
    using ThreadFn = void* (*)(void*);

    NuThreadBase(const NuThreadCreateParameters& params);
    ~NuThreadBase() ;

    const char* GetDebugName() const;
    void* GetLocalStorage(unsigned int index) const;
    void* GetParam() const;
    ThreadFn GetThreadFn() const;

    void SetDebugName(const char* name);
    void SetLocalStorage(unsigned int index, void* value);

private:
    ThreadFn m_threadFn;       // offset: 0x00
    void* m_param;             // offset: 0x08
    char m_debugName[32];      // offset: 0x10
    void* m_localStorage[32];  // offset: 0x30
};

struct NuThreadCreateParameters {
    NuThreadBase::ThreadFn m_threadFn = nullptr;  // offset: 0x00
    void* m_param = nullptr;                      // offset: 0x08
    NUTHREADPRIORITY m_priority = NORMAL;         // offset: 0x10
    int field_0x14 = 0;                           // offset: 0x14 (padding)
    const char* m_debugName = "NuThread";         // offset: 0x18
    int m_stackSize = 0;                          // offset: 0x20
    bool m_waitForStart = true;                   // offset: 0x24 (inverted logic: false means wait)
    char field_0x25[3]{};                         // offset: 0x25 (padding)
    int field_0x28 = 0;                           // offset: 0x28 (unknown)
    int field_0x2c = 0;                           // offset: 0x2c (unknown)
    int field_0x30 = 0;                           // offset: 0x30 (unknown)
    int field_0x34 = 0;                           // offset: 0x34 (unknown)
    int m_coreAffinity = -1;                      // offset: 0x38
    bool m_noCreate = false;                      // offset: 0x3c
    char field_0x3d[3]{};                         // offset: 0x3d (padding)
};
