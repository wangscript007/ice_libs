#define ICE_FFI_IMPL
#include <stdio.h>
#include "ice_ffi.h"

typedef int (*F42)(void);

int main(int argc, char** argv) {

	ice_ffi_handle lib = ice_ffi_load_library("CTEST.dll");
	
	if (lib == NULL) {
		printf("ERROR: FAILED TO LOAD CTEST.dll!\n");
		return -1;
	}
	
	F42 fourty_two = (F42)ice_ffi_get_address(lib, "test");
	
	if (fourty_two == NULL) {
		printf("ERROR: FAILED TO GET PROCEDURE test from CTEST.dll!\n");
		return -1;
	}

	printf("Function returned: %d\n", fourty_two());

	if (ice_ffi_unload_library(lib) != ICE_FFI_TRUE) {
		printf("ERROR: FAILED TO UNLOAD CTEST.dll!\n");
		return -1;
	}

	return 0;
}
