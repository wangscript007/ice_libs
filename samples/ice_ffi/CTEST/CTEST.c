// NOTE: Compile this as CTEST anyway you would like (with the shared lib extension)
// On Windows:  CTEST.dll
// On OSX:      CTEST.dylib
// Elsewhere:   CTEST.so
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif
	__declspec(dllexport) inline int test(void);

	__declspec(dllexport) inline int test(void) {
		return 42;
	}
#ifdef __cplusplus
}
#endif
