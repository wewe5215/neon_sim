#include "test_util.hpp"

TEST(vrecpeq, f32)
{
    float32x4_t v = { 1.0, 2.0, 3.0, 4.0 };
    float32x4_t actual = vrecpeq_f32(v);
    float32x4_t expected = { 0.998046875, 0.499023438, 0.333007813, 0.249511719 };
    EXPECT_TRUE(almostEqual(expected, actual));
}

TEST(vrecpeq, f32_more_precise)
{
    float32x4_t v = { 1.0, 2.0, 3.0, 4.0 };
    float32x4_t reciprocal = vrecpeq_f32(v);
    float32x4_t actual = vmulq_f32(vrecpsq_f32(v, reciprocal), reciprocal);
    float32x4_t expected = { 0.999996185, 0.499998093, 0.333333015, 0.249999046 };
    EXPECT_TRUE(almostEqual(expected, actual));
}