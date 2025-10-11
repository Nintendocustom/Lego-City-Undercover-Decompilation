#include "Score.h"

const Score Score::NullScore;
Score::Score() : m_value(0), m_total(0) {}
Score::Score(int value, int total) {
    m_value = value;
    m_total = total;
}
Score::Score(const Score& other) {
    m_value = other.m_value;
    m_total = other.m_total;
}
Score::~Score() {}
void Score::Add(const Score& other) {
    m_total += other.m_total;
    m_value += other.m_value;
}
void Score::AddFailure(int failureValue) {
    m_total += failureValue;
}
void Score::AddResult(bool success, int value) {
    if (success) {
        m_value += value;
    }
    m_total += value;
}
void Score::AddSuccess(int successValue) {
    m_total += successValue;
    m_value += successValue;
}
void Score::Clear() {
    m_value = 0;
    m_total = 0;
}
float Score::GetNormalisedValue() const {
    if (m_total > 0) {
        return static_cast<float>(m_value) / m_total;
    }
    return 0.0f;
}
int Score::GetTotal() const {
    return m_total;
}
int Score::GetValue() const {
    return m_value;
}
void Score::SetTotal(int total) {
    m_total = total;
}
void Score::SetValue(int value) {
    m_value = value;
}
Score& Score::operator=(const Score& other) {
    m_value = other.m_value;
    m_total = other.m_total;
    return *this;
}
Score& Score::operator+=(const Score& other) {
    m_value += other.m_value;
    m_total += other.m_total;
    return *this;
}
Score& Score::operator*=(int multiplier) {
    m_value *= multiplier;
    m_total *= multiplier;
    return *this;
}
bool Score::operator==(const Score& other) const {
    return m_total == other.m_total && m_value == other.m_value;
}
bool Score::operator!=(const Score& other) const {
    return m_total != other.m_total || m_value != other.m_value;
}
Score Score::operator+(const Score& other) {
    Score result;
    result.m_value += other.m_value;
    result.m_total += other.m_total;
    return result;
}
Score Score::operator*(int multiplier) {
    Score result(this->m_value * multiplier, this->m_total * multiplier);
    return result;
}
