#include "vmax.hpp"

namespace pxl {

//----------------------------------------------------------------------
// vmax_type
//----------------------------------------------------------------------
int8x8_t vmax_s8(int8x8_t N, int8x8_t M)
{
    int8x8_t D;
    for (int i=0; i<8; i++)
    {
        D[i] = N[i] > M[i] ? N[i] : M[i];
    }
    return D;
}

int16x4_t vmax_s16(int16x4_t N, int16x4_t M)
{
    int16x4_t D;
    for (int i=0; i<4; i++)
    {
        D[i] = N[i] > M[i] ? N[i] : M[i];
    }
    return D;
}

int32x2_t vmax_s32(int32x2_t N, int32x2_t M)
{
    int32x2_t D;
    for (int i=0; i<2; i++)
    {
        D[i] = N[i] > M[i] ? N[i] : M[i];
    }
    return D;
}

uint8x8_t vmax_u8(uint8x8_t N, uint8x8_t M)
{
    uint8x8_t D;
    for (int i=0; i<8; i++)
    {
        D[i] = N[i] > M[i] ? N[i] : M[i];
    }
    return D;
}

uint16x4_t vmax_u16(uint16x4_t N, uint16x4_t M)
{
    uint16x4_t D;
    for (int i=0; i<4; i++)
    {
        D[i] = N[i] > M[i] ? N[i] : M[i];
    }
    return D;
}

uint32x2_t vmax_u32(uint32x2_t N, uint32x2_t M)
{
    uint32x2_t D;
    for (int i=0; i<2; i++)
    {
        D[i] = N[i] > M[i] ? N[i] : M[i];
    }
    return D;
}

float32x2_t vmax_f32(float32x2_t N, float32x2_t M)
{
    float32x2_t D;
    for (int i=0; i<2; i++)
    {
        D[i] = N[i] > M[i] ? N[i] : M[i];
    }
    return D;
}

//----------------------------------------------------------------------
// vmaxq_type
//----------------------------------------------------------------------
int8x16_t vmaxq_s8(int8x16_t N, int8x16_t M)
{
    int8x16_t D;
    for (int i=0; i<16; i++)
    {
        D[i] = N[i] > M[i] ? N[i] : M[i];
    }
    return D;
}

int16x8_t vmaxq_s16(int16x8_t N, int16x8_t M)
{
    int16x8_t D;
    for (int i=0; i<8; i++)
    {
        D[i] = N[i] > M[i] ? N[i] : M[i];
    }
    return D;
}

int32x4_t vmaxq_s32(int32x4_t N, int32x4_t M)
{
    int32x4_t D;
    for (int i=0; i<4; i++)
    {
        D[i] = N[i] > M[i] ? N[i] : M[i];
    }
    return D;
}

int8x16_t vmaxq_u8(int8x16_t N, int8x16_t M)
{
    int8x16_t D;
    for (int i=0; i<16; i++)
    {
        D[i] = N[i] > M[i] ? N[i] : M[i];
    }
    return D;
}

int16x8_t vmaxq_u16(int16x8_t N, int16x8_t M)
{
    int16x8_t D;
    for (int i=0; i<8; i++)
    {
        D[i] = N[i] > M[i] ? N[i] : M[i];
    }
    return D;
}

int32x4_t vmaxq_u32(int32x4_t N, int32x4_t M)
{
    int32x4_t D;
    for (int i=0; i<4; i++)
    {
        D[i] = N[i] > M[i] ? N[i] : M[i];
    }
    return D;
}

float32x4_t vmaxq_f32(float32x4_t N, float32x4_t M)
{
    float32x4_t D;
    for (int i=0; i<4; i++)
    {
        D[i] = N[i] > M[i] ? N[i] : M[i];
    }
    return D;
}

} // namespace pxl