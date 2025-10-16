#pragma once
#include "cstdint"

class NuMemoryManager {
public:
    static NuMemoryManager* GetInstance();
    void* Alloc(int size);
};

// todo add method for getting size in bytes
class BitArray {
protected:
    uint8_t* m_data;
    int32_t m_numBits;

public:
    explicit BitArray(int numBits = 0);
    BitArray(const BitArray& other);
    ~BitArray();

    void ClearBits(const BitArray& other);
    int GetNumBitsSet() const;
    bool IsAllBitSet(const BitArray& other) const;
    bool IsAnyBitSet() const;
    bool IsAnyBitSet(const BitArray& other) const;

    inline void SetBit(int bitIndex, bool value);
    inline void SetBit(int bitIndex);
    inline bool IsBitSet(int bitIndex) const;

    void operator&=(const BitArray& other) const;
    void operator|=(const BitArray& other) const;
    bool operator==(const BitArray& other) const;
};