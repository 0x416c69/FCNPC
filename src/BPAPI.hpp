// Made by AliAssassiN

#pragma once

#pragma pack(push, 1)
class Vector3
{
    float m_X, m_Y, m_Z;

public:
    Vector3(float x, float y, float z) : m_X(x), m_Y(y), m_Z(z) {}
    Vector3() : m_X(0.f), m_Y(0.f), m_Z(0.f) {}

    float GetX() const { return m_X; }
    float GetY() const { return m_Y; }
    float GetZ() const { return m_Z; }
};

class CBulletPhysics
{
public:
    virtual uint16_t RayCastLine(Vector3 start, Vector3 end, Vector3& result) = 0;
};
#pragma pack(pop)
