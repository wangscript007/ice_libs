#define ICE_CPU_IMPL
#include <stdio.h>
#include "ice_cpu.h"

int main(int argc, char** argv) {
    ice_cpu_arch cpu_arch = ice_cpu_get_arch();
    printf("CPU Name: %s\n", ice_cpu_name());
    printf("CPU Cores: %u\n", ice_cpu_cores_count());
    
    if (cpu_arch == ICE_CPU_ARCH_NONE) {
        printf("CPU Architecture: 16-bit or 8-bit\n");
    } else {
        if (cpu_arch == ICE_CPU_ARCH_X86) {
            printf("CPU Architecture: 32-bit\n");
        } else {
            printf("CPU Architecture: 64-bit\n");
        }
    }
    
    return 0;
}
