#include <stdio.h>
#include "ice_test.h"

ICE_TEST_DEFINE(equ) {
    int a = 6;
    int b = 5;
    
    ICE_ASSERT_NOT_NULL(a);
    ICE_ASSERT_NOT_NULL(b);
    ICE_ASSERT_INT(a);
    ICE_ASSERT_INT(b);
    ICE_ASSERT_EQU(a, b);
    
    printf("TEST equ RAN SUCCESSFULLY!\n");
}

int main(int argc, char** argv) {
    equ();
    return 0;
}
