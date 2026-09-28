#include "support/CommonString.h"

CommonString::CommonString() : m_data(nullptr) {}

CommonString::~CommonString() {}

char* CommonString::AsChar() const {
    if (m_data != nullptr) {
        return m_data + 2;
    }
    return nullptr;
}
int CommonString::AToI(bool* ok) {
    int sign;
    int result;
    bool success;
    bool isNullptr = false;

    const char* pLoop = AsChar();
    if (!pLoop) {
        sign = 0;
        result = 0;
        isNullptr = true;
    } else {
        unsigned char currentChar = *pLoop++;

        if (currentChar == '-') {
            sign = -1;
            currentChar = *pLoop++;
        } else {
            sign = 0;
        }

        if (static_cast<unsigned int>(currentChar - '0') <= 9) {
            result = 0;
            do {
                result = result * 10 + static_cast<signed char>(currentChar) - '0';
                currentChar = *pLoop++;
            } while (static_cast<unsigned int>(currentChar - '0') <= 9);

            success = true;
        } else {
            result = 0;
            success = false;
        }
    }

    if (isNullptr) {
        success = false;
    }

    if (ok) {
        *ok = success;
    }

    int multiplier = sign;
    if (multiplier == 0) {
        multiplier = 1;
    }

    return multiplier * result;
}

bool CommonString::FileExists() const {
    const char* path = AsChar();
    return NuFileExistQuiet(path) != 0;
}

bool CommonString::GetCaseSensitiveCompare() {
    return m_CaseSensitiveCompare;
}

unsigned short CommonString::GetLength() const {
    if (m_data != nullptr) {
        return *reinterpret_cast<const unsigned short*>(m_data) & 0x7FFF;
    }
    return 0;
}
unsigned short CommonString::Length() const {
    return GetLength();
}

bool CommonString::operator!=(const char* other) const {
    return !operator==(other);
}

bool CommonString::operator==(const char* other) const {
    bool sensitive = m_CaseSensitiveCompare;
    char* data = AsChar();

    int result;
    if (sensitive) {
        result = NuStrCmp(data, other);
    } else {
        result = NuStrICmp(data, other);
    }
    return result == 0;
}
char CommonString::operator[](int index) const {
    const char* str = AsChar();
    return str[index];
}
void CommonString::SetCaseSensitiveCompare(bool sensitive) {
    m_CaseSensitiveCompare = sensitive;
}

void CommonString::SetCurrentDir() const {
    const char* path = AsChar();
    NuFileSetCurrentDirectory(path);
}

void CommonString::SetLength(int length) {
    *reinterpret_cast<uint16_t*>(this->m_data) = static_cast<uint16_t>(length | 0x8000);
}

void CommonString::ToLower() {
    char* current = AsChar();
    while (true) {
        char* const begin = AsChar();

        unsigned short len = GetLength();
        char* const end = begin + len;

        if (current >= end) {
            break;
        }

        const char c = *current;
        const char upper_c = NuToLower(c);
        *current++ = upper_c;
    }
}

void CommonString::ToUpper() {
    char* current = AsChar();
    while (true) {
        char* begin = AsChar();

        unsigned short len = GetLength();
        char* const end = begin + len;

        if (current >= end) {
            break;
        }

        char c = *current;
        char upper_c = NuToUpper(c);
        *current++ = upper_c;
    }
}
