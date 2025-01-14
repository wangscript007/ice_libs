#define ICE_TIME_IMPL
#include <stdio.h>
#include "ice_time.h"

int main(int argc, char** argv) {
    printf(ice_time_string());

    printf("\nSTARTING PROGRAM AFTER 3 SECONDS!\n");
    ice_time_sleep(3000);
	
    double t1 = ice_time_tick();
    printf("Hello, World!\n");
    double t2 = ice_time_tick();
    printf("\nTOOK: %f MILLISECONDS!\n", ice_time_diff(t1, t2));

    printf("WE ARE NOW IN %d!\n", ice_time_current_year());
    printf("WHICH EQUALS %f DAYS!\n", ice_time_year_to_day(ice_time_current_year()));

    return 0;
}
