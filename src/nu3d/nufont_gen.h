#pragma once

struct NuSerialize;

class NuFont {
public:
    NuFont();
    ~NuFont();
    void Serialize(NuSerialize& serializer);
};

class VuChar {
public:
    VuChar();
    void Serialize(NuSerialize& serializer);
};

class VuCharIdx {
public:
    VuCharIdx();
    void Serialize(NuSerialize& serializer);
};

class KernPair {
public:
    void Serialize(NuSerialize& serializer);
};
