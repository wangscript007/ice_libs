#define ICE_RAM_IMPL
#include <stdio.h>
#include "ice_ram.h"

int main(int argc, char** argv) {
    printf("Total RAM in bytes: %llu\n\0", ice_ram_total());
    printf("Available/Free RAM in bytes: %llu\n\0", ice_ram_free());
    
    return 0;
}
