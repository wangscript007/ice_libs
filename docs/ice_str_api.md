# ice_str.h Documentation

### Enums

```c
typedef enum {
    ICE_STR_TRUE    = 0,
    ICE_STR_FALSE   = -1,
} ice_str_bool;
```

### Definitions

```c
// Implements ice_str source code, Works same as #pragma once
#define ICE_STR_IMPL

// Allow to use ice_str functions as extern ones...
#define ICE_STR_EXTERN 

// Call conventions (You could define one of these to set compiler calling convention)
#define ICE_STR_CALLCONV_VECTORCALL
#define ICE_STR_CALLCONV_FASTCALL
#define ICE_STR_CALLCONV_STDCALL
#define ICE_STR_CALLCONV_CDECL

// Platforms could be defined (But not forced to...)
// NOTE: Non-Windows plaforms supported, But it's only one for building DLLs
#define ICE_STR_PLATFORM_MICROSOFT      // Microsoft platforms

// If no platform defined, This definition will define itself
// This definition sets platform depending on platform-specified C compiler definitions
#define ICE_STR_PLATFORM_AUTODETECTED

// In case you want to build DLL on Microsoft Windows!
#define ICE_STR_DLLEXPORT
#define ICE_STR_DLLIMPORT
```
