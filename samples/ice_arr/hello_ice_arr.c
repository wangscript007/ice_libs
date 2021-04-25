#define ICE_ARR_IMPL
#include <stdio.h>
#include "ice_arr.h"

int main(int argc, char** argv) {
    ice_arr_array arr = ice_arr_new(10);
    
    for (int i = 0; i < arr.len; i++) {
        ice_arr_set(&arr, i, i);
        printf("Array arr at index %d: %f\n", i, ice_arr_get(arr, i));
    }
    
    ice_arr_rev(&arr);
    printf("Reversed array arr!\n");
    
    for (int i = 0; i < arr.len; i++) {
        printf("Array arr at index %d: %f\n", i, ice_arr_get(arr, i));
    }
    
    ice_arr_free(arr);
    return 0;
}
