#pragma once
#include "nn/types.h"

class ConversationObject {
public:
    ConversationObject();
    void SetDRC(bool param);
    void SetSourceNames(const char* param1, const char* param2, bool param3);
    bool IsInvalid() const;
    void waitingToLoad() const;
    bool IsPlaying() const;
    void SetVolume(float value);
    void SetSubtitleAlphaFromProximity(float value);
    void Update();
    ~ConversationObject();

private:
    unsigned char m_data[0x38];
};

namespace CityPDA_ScannerCore {
class SceneCamera {
public:
    long GetLookMatrix() const;
    const float* GetPosition() const;
};
}  // namespace CityPDA_ScannerCore

class JobValue {
public:
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7();
    virtual void vf8();
    virtual int UnknownVFunc0x48();
    virtual void SetEnabled(int value);
};

struct VuVec {
    float x, y, z, w;
};

struct LinkedListNode {
    ulong m_field0;
    LinkedListNode* m_next;
    ulong m_field2;
};

class ScannableConversation {
public:
    ScannableConversation(const char* param_1, const char* param_2, bool param_3, const VuVec& param_4,
                          int param_5, JobValue* param_6);

    ~ScannableConversation();

    bool CanBeDetected() const;
    ConversationObject* GetConversation();
    int GetId() const;
    const VuVec* GetPosition() const;
    float GetProximityValue() const;
    void SetProximityValue(float value);
    bool HasBeenFound() const;
    void SetFound(bool found);
    bool IsDetectedBy(CityPDA_ScannerCore::SceneCamera& camera) const;
    void WaitingToLoad() const;
    void Update();

private:
    ulong m_unk1;
    ulong m_unk2;
    LinkedListNode* m_list;
    ConversationObject m_conversation;
    VuVec m_position;
    int m_id;
    bool m_flag;
    unsigned char m_pad[3];
    float m_proximityValue;
    unsigned char m_pad2[4];
    JobValue* m_jobValue;
};
