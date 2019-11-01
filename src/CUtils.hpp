/* =========================================

        FCNPC - Fully Controllable NPC
            ----------------------

    - File: Utils.cpp
    - Author(s): OrMisicL

  =========================================*/

#ifndef UTILS_H
#define UTILS_H

enum
{
    ERROR_NO,
    ERROR_INCLUDE_VERSION
};

class CUtils
{
public:
    static void GetPluginError(BYTE byteError, char* szError, size_t sSize);
    static void UnProtect(DWORD dwAddress, size_t sSize);
    static DWORD FindPattern(const char* szPattern, const char* szMask);
    static float RandomFloat(float min, float max);
    static float GetNearestFloatValue(float value, float* array, const size_t size);
};

int64_t GetTick();
uint32_t GetTick32();
uint32_t Handle32Limit(int64_t number);

#endif
