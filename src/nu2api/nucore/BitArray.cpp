#include "BitArray.h"
#include <algorithm>
#include <cstdint>
#include <cstring>
#define BUILTIN_POPCOUNT(x) __builtin_popcount(x)

BitArray::BitArray(const BitArray& other) : m_numBits(other.m_numBits) {
    const int numBytes = (this->m_numBits + 7) / 8;
    if (numBytes > 0) {
        m_data = static_cast<uint8_t*>(NuMemoryManager::GetInstance()->Alloc(numBytes));
        std::memcpy(m_data, other.m_data, numBytes);
    }
}
// todo Look at all functions that aren't 100 %, also check for constructor again
BitArray::BitArray(const int numBits) : m_numBits(numBits) {
    const int numBytes = (this->m_numBits + 7) / 8;
    if (numBytes > 0) {
        m_data = static_cast<uint8_t*>(NuMemoryManager::GetInstance()->Alloc(numBytes));
        std::memset(m_data, 0, numBytes);
    }
}

BitArray::~BitArray() {
    delete[] m_data;
    m_data = nullptr;
    m_numBits = 0;
}

void BitArray::ClearBits(const BitArray& other) {
    // 100 %
    if (this->m_data == nullptr || other.m_data == nullptr) {
        return;
    }

    const int numBytes = (this->m_numBits + 7) / 8;
    const int otherNumBytes = (other.m_numBits + 7) / 8;
    const int bytesToProcess = std::min(otherNumBytes, numBytes);

    for (int i = 0; i < bytesToProcess; ++i) {
        this->m_data[i] &= ~other.m_data[i];
    }
}

int BitArray::GetNumBitsSet() const {
    if (this->m_data == nullptr || m_numBits <= 0) {
        return 0;
    }

    int count = 0;
    const int num_bytes = (this->m_numBits + 7) / 8;

    for (int i = 0; i < num_bytes; i++) {
        count += __builtin_popcount(m_data[i]);
    }
    return count;
}

bool BitArray::IsAllBitSet(const BitArray& other) const {
    // 100 %
    if (this->m_data == nullptr || other.m_data == nullptr) {
        return false;
    }

    const int numBytes = (this->m_numBits + 7) / 8;
    const int otherNumBytes = (other.m_numBits + 7) / 8;

    if (numBytes != otherNumBytes) {
        return false;
    }

    for (int32_t i = 0; i < numBytes; i++) {
        if ((this->m_data[i] & other.m_data[i]) != other.m_data[i]) {
            return false;
        }
    }
    return true;
}

bool BitArray::IsAnyBitSet() const {
    // 100 %
    if (this->m_data == nullptr || m_numBits <= 0) {
        return false;
    }

    const int num_bytes = (m_numBits + 7) / 8;
    for (int i = 0; i < num_bytes; i++) {
        if (this->m_data[i] != 0) {
            return true;
        }
    }
    return false;
}

bool BitArray::IsAnyBitSet(const BitArray& other) const {
    // todo 96 %
    if (this->m_data == nullptr || other.m_data == nullptr) {
        return false;
    }

    const int numBytes = (this->m_numBits + 7) / 8;
    const int otherNumByte = (other.m_numBits + 7) / 8;

    if (numBytes != otherNumByte || this->m_numBits <= 0) {
        return false;
    }

    for (int i = 0; i < otherNumByte; i++) {
        if ((this->m_data[i] & other.m_data[i]) != 0) {
            return true;
        }
    }
    return false;
}

void BitArray::SetBit(int bitIndex, bool value) {
    if (bitIndex >= 0 && bitIndex < m_numBits) {
        const int byteIndex = bitIndex / 8;
        const int bitPosition = bitIndex % 8;
        if (value) {
            m_data[byteIndex] |= (1 << bitPosition);
        } else {
            m_data[byteIndex] &= ~(1 << bitPosition);
        }
    }
}

void BitArray::SetBit(int bitIndex) {
    SetBit(bitIndex, true);
}

inline bool BitArray::IsBitSet(const int bitIndex) const {
    if (bitIndex >= 0 && bitIndex < this->m_numBits) {
        return (m_data[bitIndex / 8] & (1 << (bitIndex & 7))) != 0;
    }
    return false;
}

void BitArray::operator&=(const BitArray& other) const {
    // 100 %
    if (this->m_data == nullptr || other.m_data == nullptr) {
        return;
    }

    const int num_bytes = (this->m_numBits + 7) / 8;
    const int num_other_bytes = (other.m_numBits + 7) / 8;

    const int bytes_to_process = std::min(num_other_bytes, num_bytes);
    for (int i = 0; i < bytes_to_process; i++) {
        this->m_data[i] &= other.m_data[i];
    }
}

void BitArray::operator|=(const BitArray& other) const {
    if (this->m_data == nullptr || other.m_data == nullptr) {
        return;
    }

    const int numBytes = (this->m_numBits + 7) / 8;
    const int numOtherBytes = (other.m_numBits + 7) / 8;

    if (numBytes != numOtherBytes || this->m_numBits <= 0) {
        return;
    }

    for (int i = 0; i < numOtherBytes; i++) {
        this->m_data[i] |= other.m_data[i];
    }
}

bool BitArray::operator==(const BitArray& other) const {
    // 100 %
    if (this->m_data == nullptr || other.m_data == nullptr) {
        return false;
    }

    const int numBytes = (this->m_numBits + 7) / 8;
    const int otherNumBytes = (other.m_numBits + 7) / 8;

    if (numBytes != (otherNumBytes)) {
        return false;
    }

    for (int i = 0; i < numBytes; i++) {
        if (this->m_data[i] != other.m_data[i]) {
            return false;
        }
    }
    return true;
}