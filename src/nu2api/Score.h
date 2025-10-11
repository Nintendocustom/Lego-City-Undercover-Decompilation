#pragma once

class Score {
public:
    static const Score NullScore;

    Score();
    Score(int value, int total);
    Score(const Score& other);
    ~Score();

    void Add(const Score& other);
    void AddFailure(int failureValue);
    void AddResult(bool success, int value);
    void AddSuccess(int successValue);
    void Clear();

    float GetNormalisedValue() const;
    int GetTotal() const;
    int GetValue() const;
    void SetTotal(int total);
    void SetValue(int value);

    Score& operator=(const Score& other);
    Score& operator+=(const Score& other);
    Score& operator*=(int multiplier);
    bool operator==(const Score& other) const;
    bool operator!=(const Score& other) const;
    Score operator+(const Score& other);
    Score operator*(int multiplier);

private:
    int m_value;
    int m_total;
};