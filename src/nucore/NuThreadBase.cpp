#include "NuThreadBase.h"
#include <cstring>

NuThreadBase::NuThreadBase(const NuThreadCreateParameters& params) {
    m_threadFn = params.m_threadFn;
    m_param = params.m_param;

    m_debugName[0] = '\0';
    memset(m_localStorage, 0, sizeof(m_localStorage));
}
NuThreadBase::~NuThreadBase() {}
const char* NuThreadBase::GetDebugName() const {
    return m_debugName;
}
void* NuThreadBase::GetLocalStorage(unsigned int index) const {
    return m_localStorage[index];
}
void* NuThreadBase::GetParam() const {
    return m_param;
}
NuThreadBase::ThreadFn NuThreadBase::GetThreadFn() const {
    return m_threadFn;
}
void NuThreadBase::SetDebugName(const char* name) {
    NuStrNCpy(m_debugName, name, 32);
}
void NuThreadBase::SetLocalStorage(unsigned int index, void* value) {
    m_localStorage[index] = value;
}
