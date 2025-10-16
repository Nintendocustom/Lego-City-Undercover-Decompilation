#pragma once

class CountdownTimer {
public:
    CountdownTimer();
    ~CountdownTimer();

    void Start(float duration);
    void Stop(bool reset = true);
    void Pause();
    void Continue();
    void Update(float deltaTime);
    bool CheckCountdown(float deltaTime);
    bool IsRunning() const;
    bool Finished() const;
    float GetElapsed() const;
    float GetProgress() const;

private:
    float m_elapsedTime;
    float m_duration;
    float m_progress;
    bool m_isPaused;
    bool m_isRunning;
    char m_padding[2];
};