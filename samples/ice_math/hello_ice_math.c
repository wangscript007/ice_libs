#define ICE_MATH_IMPL
#include <stdio.h>
#include "ice_math.h"

int main(int argc, char** argv) {
    printf("Sine of 0.1 equals: %f\n\0", ice_math_sin(0.1));
    printf("Cosine of 0.1 equals: %f\n\0", ice_math_cos(0.1));
    printf("Tangent of 0.1 equals: %f\n\0", ice_math_tan(0.1));
    return 0;
}
