#include <stdio.h>
#include <time.h>
#include <arm_neon.h>

float A[] = {121, 28, 45};
float B[] = {121, -36, -63};
float C[3];
int main(){

    uint8x8_t v = vld1_u8(A); // load the array from memory into a vector;
    uint8x8_t t = vld1_u8(B);

    uint8x8_t r = vand_u8(v, t);
    //scanf("%d", &A[0]);
    vst1_u8(C, r); // store

    for(int i = 0; i < 3; i++){
        printf("%f ", C[i]);
    }
}
