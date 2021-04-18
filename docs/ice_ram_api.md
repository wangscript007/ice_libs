# ice_ram.h Documentation

### Definitions

```c
// Typedefs
typedef unsigned long long int ice_ram_bytes;

// Definitions
// Implements ice_ram source code, Works same as #pragma once
#define ICE_RAM_IMPL

// Allow to use ice_ram functions as extern ones...
#define ICE_RAM_EXTERN

// Call conventions (You could define one of these to set compiler calling convention)
#define ICE_RAM_CALLCONV_VECTORCALL
#define ICE_RAM_CALLCONV_FASTCALL
#define ICE_RAM_CALLCONV_STDCALL
#define ICE_RAM_CALLCONV_CDECL

// Platforms could be defined (But not forced to...)
#define ICE_RAM_MICROSOFT       // Microsoft platforms
#define ICE_RAM_APPLE           // Apple platforms
#define ICE_RAM_WEB             // Node.js and Web (Emscripten)
#define ICE_RAM_PSP             // Sony PlayStation Portable
#define ICE_RAM_UNIX            // Elsewhere

// If no platform defined, This definition will define itself
// This definition sets platform depending on platform-specified C compiler definitions
#define ICE_RAM_PLATFORM_AUTODETECTED

// In case you want to build DLL on Microsoft Windows!
#define ICE_RAM_DLLEXPORT
#define ICE_RAM_DLLIMPORT
```

### API

```c
ICE_RAM_API  ice_ram_bytes  ICE_RAM_CALLCONV  ice_ram_total(void);           // Returns total memory (RAM) device has, In bytes.
ICE_RAM_API  ice_ram_bytes  ICE_RAM_CALLCONV  ice_ram_free(void);            // Returns available/free memory (RAM) device has, In bytes.
```
