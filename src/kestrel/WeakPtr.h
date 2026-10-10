#pragma once

template <class T>
class WeakPtr {
public:
    T* get() const { return m_ptr; }
    T* operator->() const { return m_ptr; }
    T& operator*() const { return *m_ptr; }

    T* m_ptr;
    void* m_Control;
};