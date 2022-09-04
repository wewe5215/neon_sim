#include "vshl_n.hpp"

namespace pxl {

/**
VSHL_N left shifts each element in a vector by an immediate value, and places the results in the
destination vector. The bits shifted out of the left of each element are lost
 */

//----------------------------------------------------------------------
// vshl_n_type
//----------------------------------------------------------------------

/// @param n 0-7
int8x8_t vshl_n_s8(int8x8_t M, const int n)
{
    int8x8_t D;
    for (int i=0; i<8; i++) {
        D[i] = M[i] << n;
    }
    return D;
}

/// @param n 0-15
int16x4_t vshl_n_s16(int16x4_t M, const int n)
{
    int16x4_t D;
    for (int i=0; i<4; i++) {
        D[i] = M[i] << n;
    }
    return D;
}

/// @param n 0-31
int32x2_t vshl_n_s32(int32x2_t M, const int n)
{
    int32x2_t D;
    for (int i=0; i<2; i++) {
        D[i] = M[i] << n;
    }
    return D;
}

/// @param n 0-63
int64x1_t vshl_n_s64(int64x1_t M, const int n)
{
    int64x1_t D;
    for (int i=0; i<1; i++) {
        D[i] = M[i] << n;
    }
    return D;
}

/// @param n 0-7
uint8x8_t vshl_n_u8(uint8x8_t M, const int n)
{
    uint8x8_t D;
    for (int i=0; i<8; i++) {
        D[i] = M[i] << n;
    }
    return D;
}

/// @param n 0-15
uint16x4_t vshl_n_u16(uint16x4_t M, const int n)
{
    uint16x4_t D;
    for (int i=0; i<4; i++) {
        D[i] = M[i] << n;
    }
    return D;
}

/// @param n 0-31
uint32x2_t vshl_n_u32(uint32x2_t M, const int n)
{
    uint32x2_t D;
    for (int i=0; i<2; i++) {
        D[i] = M[i] << n;
    }
    return D;
}

/// @param n 0-63
uint64x1_t vshl_n_u64(uint64x1_t M, const int n)
{
    uint64x1_t D;
    for (int i=0; i<1; i++) {
        D[i] = M[i] << n;
    }
    return D;
}

//----------------------------------------------------------------------
// vshlq_n_type
//----------------------------------------------------------------------

/// @param n 0-7
int8x16_t vshlq_n_s8(int8x16_t M, const int n)
{
    int8x16_t D;
    for (int i=0; i<16; i++) {
        D[i] = M[i] << n;
    }
    return D;
}

/// @param n 0-15
int16x8_t vshlq_n_s16(int16x8_t M, const int n)
{
    int16x8_t D;
    for (int i=0; i<8; i++) {
        D[i] = M[i] << n;
    }
    return D;
}

/// @param n 0-31
int32x4_t vshlq_n_s32(int32x4_t M, const int n)
{
    int32x4_t D;
    for (int i=0; i<4; i++) {
        D[i] = M[i] << n;
    }
    return D;
}

/// @param n 0-63
int64x2_t vshlq_n_s64(int64x2_t M, const int n)
{
    int64x2_t D;
    for (int i=0; i<2; i++) {
        D[i] = M[i] << n;
    }
    return D;
}

/// @param n 0-7
uint8x16_t vshlq_n_u8(uint8x16_t M, const int n)
{
    uint8x16_t D;
    for (int i=0; i<16; i++) {
        D[i] = M[i] << n;
    }
    return D;
}

/// @param n 0-15
uint16x8_t vshlq_n_u16(uint16x8_t M, const int n)
{
    uint16x8_t D;
    for (int i=0; i<8; i++) {
        D[i] = M[i] << n;
    }
    return D;
}

/// @param n 0-31
uint32x4_t vshlq_n_u32(uint32x4_t M, const int n)
{
    uint32x4_t D;
    for (int i=0; i<4; i++) {
        D[i] = M[i] << n;
    }
    return D;
}

/// @param n 0-63
uint64x2_t vshlq_n_u64(uint64x2_t M, const int n)
{
    uint64x2_t D;
    for (int i=0; i<2; i++) {
        D[i] = M[i] << n;
    }
    return D;
}


} // namespace pxl
