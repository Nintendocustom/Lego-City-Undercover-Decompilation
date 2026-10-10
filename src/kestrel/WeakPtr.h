#pragma once

template <class T>
class WeakPtr {
public:
    struct ControlBlock {
        int m_RefCount;
        int m_Alive;
    };

    T* get() const {
        if (m_Control == nullptr) {
            return nullptr;
        }
        if (m_Control->m_Alive) {
            return m_ptr;
        }
        return nullptr;
    }
    T* operator->() const { return get(); }
    T& operator*() const { return *get(); }

    T* m_ptr;
    ControlBlock* m_Control;
};