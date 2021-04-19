// NOTE: Compile this as CTEST anyway you would like (with the shared lib extension)
// On Windows:  CTEST.dll
// On OSX:      CTEST.dylib
// Elsewhere:   CTEST.so
#include <stdio.h>

#if defined(__WIN) || defined(_WIN32_) || defined(_WIN64_) || defined(WIN32) || defined(__WIN32__) || defined(WIN64) || defined(__WIN64__) || defined(WINDOWS) || defined(_WINDOWS) || defined(__WINDOWS) || defined(_WIN32) || defined(_WIN64) || defined(__CYGWIN__) || defined(_MSC_VER) || defined(__WINDOWS__) || defined(_X360) || defined(XBOX360) || defined(__X360) || defined(__X360__) || defined(_XBOXONE) || defined(XBONE) || defined(XBOX) || defined(__XBOX__) || defined(__XBOX) || defined(__xbox__) || defined(__xbox) || defined(_XBOX) || defined(xbox)
#  define PLATFORM_WINDOWS
#endif

#if defined(PLATFORM_WINDOWS)
#  define DLLEXPORT __declspec(dllexport)
#  define DLLIMPORT __declspec(dllimport)
#else
#  define DLLEXPORT
#  define DLLIMPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif
	DLLEXPORT inline int test(void);

	DLLEXPORT inline int test(void) {
		return 42;
	}
#ifdef __cplusplus
}
#endif
