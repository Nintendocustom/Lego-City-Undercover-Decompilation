#include "ScannableConversation.h"
#include <new>

float sqrtf(float param1);

bool ScannableConversation::CanBeDetected() const {
    return !m_conversation.IsInvalid();
}

ConversationObject* ScannableConversation::GetConversation() {
    return &m_conversation;
}

int ScannableConversation::GetId() const {
    return m_id;
}

const VuVec* ScannableConversation::GetPosition() const {
    return &m_position;
}

float ScannableConversation::GetProximityValue() const {
    return m_proximityValue;
}

void ScannableConversation::SetProximityValue(float value) {
    m_proximityValue = value;
}

bool ScannableConversation::HasBeenFound() const {
    return m_flag;
}

void ScannableConversation::SetFound(bool found) {
    m_flag = found;
    if (found && m_jobValue != nullptr)
        m_jobValue->SetEnabled(1);
}

void ScannableConversation::WaitingToLoad() const {
    m_conversation.waitingToLoad();
}

bool ScannableConversation::IsDetectedBy(CityPDA_ScannerCore::SceneCamera& camera) const {
    if ((m_conversation.IsInvalid() & 1) != 0)
        return false;

    long lookMatrix = camera.GetLookMatrix();
    float lx = *(float*)(lookMatrix + 0x20);
    float ly = *(float*)(lookMatrix + 0x24);
    float lz = *(float*)(lookMatrix + 0x28);
    float dirX = lx * 30.0f;
    float dirY = ly * 30.0f;
    float dirZ = lz * 30.0f;

    const float* camPos = camera.GetPosition();
    float posX = m_position.x;
    float posY = m_position.y;
    float posZ = m_position.z;
    float camX = camPos[0];
    float camY = camPos[1];
    float subY = posY - camY;
    float camZ = camPos[2];
    float subX = posX - camX;
    float subZ = posZ - camZ;

    float t = (dirX * subX + dirY * subY + dirZ * subZ) / (dirX * dirX + dirY * dirY + dirZ * dirZ);

    dirX *= t;
    dirY *= t;
    dirZ *= t;

    camPos = camera.GetPosition();
    float cx = camPos[0];
    float cy = camPos[1];
    float cz = camPos[2];
    float px = m_position.x;
    float py = m_position.y;
    float adjY = cy + dirY;
    float adjX = cx + dirX;
    float adjZ = cz + dirZ;
    float pz = m_position.z;
    float dy = py - adjY;
    float dx = px - adjX;
    float dz = pz - adjZ;
    float distSq = dx * dx + dy * dy + dz * dz;

    if (distSq <= 0.0f)
        return true;

    float dist = __builtin_sqrtf(distSq);
    if (dist != dist)
        dist = sqrtf(distSq);

    return dist < 0.12f;
}

ScannableConversation::ScannableConversation(const char* param_1, const char* param_2, bool param_3,
                                             const VuVec& param_4, int param_5, JobValue* param_6) {
    *reinterpret_cast<volatile ulong*>(this) = 0;
    *reinterpret_cast<ulong*>((char*)this + 0x08) = 0;
    *reinterpret_cast<ulong*>((char*)this + 0x10) = 0;

    ConversationObject* conv = &m_conversation;
    new (conv) ConversationObject();

    const ulong* vuPtr = reinterpret_cast<const ulong*>(&param_4);
    ulong xy = vuPtr[0];
    ulong xy_hi = xy >> 32;
    *reinterpret_cast<unsigned int*>(&m_position.x) = (unsigned int)xy;
    *reinterpret_cast<unsigned int*>(&m_position.y) = (unsigned int)xy_hi;

    ulong zw = vuPtr[1];
    *reinterpret_cast<unsigned int*>(&m_position.z) = (unsigned int)zw;
    asm volatile("" ::: "memory");
    ulong w_bits = zw >> 32;
    m_flag = false;
    m_jobValue = param_6;
    *reinterpret_cast<unsigned int*>(&m_position.w) = (unsigned int)w_bits;
    m_id = param_5;
    m_proximityValue = 0.0f;

    conv->SetDRC(true);
    conv->SetSourceNames(param_1, param_2, param_3);

    if (m_jobValue != nullptr) {
        int result = m_jobValue->UnknownVFunc0x48();
        m_flag = (result != 0);
    }
}

void ScannableConversation::Update() {
    if (m_conversation.IsPlaying()) {
        m_conversation.SetVolume(m_proximityValue);
        m_conversation.SetSubtitleAlphaFromProximity(m_proximityValue);
    }
    m_conversation.Update();
}

ScannableConversation::~ScannableConversation() {
    m_conversation.~ConversationObject();

    LinkedListNode* head = m_list;
    if (head != nullptr) {
        LinkedListNode* node;
        while (node = head->m_next, node != head) {
            head->m_next = node->m_next;
            node->m_field0 = 0;
            node->m_next = nullptr;
            node->m_field2 = 0;
        }

        head->m_next = nullptr;
        head->m_field2 = 0;
        head->m_field0 = 0;
        m_list = nullptr;
    }
}