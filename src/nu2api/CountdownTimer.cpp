#include "nu2api/CountdownTimer.h"

CountdownTimer::CountdownTimer()
    : m_elapsedTime(0.0f), m_duration(0.0f), m_isPaused(false), m_isRunning(false) {}
CountdownTimer::~CountdownTimer() {
    return;
}
void CountdownTimer::Start(float duration) {
    m_elapsedTime = 0.0f;
    m_progress = 0.0f;
    m_duration = duration;
    if (m_duration <= 0.0f) {
        m_duration = 0.0f;
        m_progress = 1.0f;
    }
    m_isPaused = false;
    m_isRunning = true;
}
void CountdownTimer::Stop(bool reset) {
    m_isRunning = false;

    if (reset) {
        m_elapsedTime = 0.0f;
        m_isPaused = false;
        m_progress = 0.0f;
    }
}
void CountdownTimer::Pause() {
    m_isPaused = true;
}
void CountdownTimer::Continue() {
    m_isPaused = false;
}

void CountdownTimer::Update(float deltaTime) {
    if (!m_isRunning || m_isPaused) {
        return;
    }
    m_elapsedTime += deltaTime;

    if (!(m_duration > 0.0f && m_elapsedTime < m_duration)) {
        m_elapsedTime = m_duration;
        m_progress = 1.0f;
        m_isRunning = false;
    } else {
        m_progress = m_elapsedTime / m_duration;
    }
}

bool CountdownTimer::CheckCountdown(float deltaTime) {
    if (!m_isRunning) {
        return false;
    }
    if (!m_isPaused) {
        float original_duration = m_duration;
        m_elapsedTime += deltaTime;
        if (!(original_duration > 0.0f && m_elapsedTime < original_duration)) {
            m_progress = 1.0f;
            m_elapsedTime = original_duration;
            m_isRunning = false;
            return true;
        }
        m_progress = m_elapsedTime / original_duration;
    }
    return m_progress >= 1.0f;
}
bool CountdownTimer::IsRunning() const {
    return m_isRunning;
}
bool CountdownTimer::Finished() const {
    return m_progress >= 1.0f;
}
float CountdownTimer::GetElapsed() const {
    return m_elapsedTime;
}
float CountdownTimer::GetProgress() const {
    return m_progress;
}
