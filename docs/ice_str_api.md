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

### Functions

```c
ICE_STR_API  int           ICE_STR_CALLCONV  ice_str_len(char* str);                                    // Returns length of string
ICE_STR_API  int           ICE_STR_CALLCONV  ice_str_arr_len(char** arr);                               // Returns length of array of strings
ICE_STR_API  char*         ICE_STR_CALLCONV  ice_str_sub(char* str, int from, int to);                  // Returns substring from index from -> index to
ICE_STR_API  char*         ICE_STR_CALLCONV  ice_str_strdup(char* str);                                 // Returns null terminated string
ICE_STR_API  char*         ICE_STR_CALLCONV  ice_str_concat(char* s1, char* s2);                        // Concats 2 strings and returns the results
ICE_STR_API  char*         ICE_STR_CALLCONV  ice_str_rep(char* str, int count);                         // Returns string repeated by times
ICE_STR_API  char*         ICE_STR_CALLCONV  ice_str_char(char* str, int index);                        // Returns char of string at index as null-terminated string
ICE_STR_API  ice_str_bool  ICE_STR_CALLCONV  ice_str_match(char* s1, char* s2);                         // Returns ICE_STR_TRUE if both 2 strings are same, Else returns ICE_STR_FALSE
ICE_STR_API  char*         ICE_STR_CALLCONV  ice_str_upper(char* str);                                  // Returns uppercased string
ICE_STR_API  char*         ICE_STR_CALLCONV  ice_str_lower(char* str);                                  // Returns lowercased string
ICE_STR_API  char*         ICE_STR_CALLCONV  ice_str_capitalize(char* str);                             // Returns capitalized string
ICE_STR_API  char**        ICE_STR_CALLCONV  ice_str_split(char* str, char delim);                      // Splits string into array of strings by delimiter
ICE_STR_API  char**        ICE_STR_CALLCONV  ice_str_splitlines(char* str);                             // Splits string into array of strings by new line character
ICE_STR_API  char*         ICE_STR_CALLCONV  ice_str_join(char** strs);                                 // Returns all strings joined from array
ICE_STR_API  char*         ICE_STR_CALLCONV  ice_str_join_with_delim(char** strs, char delim);          // Returns all strings joined from array with delimiter between each 2 strings joined
ICE_STR_API  ice_str_bool  ICE_STR_CALLCONV  ice_str_begin(char* s1, char* s2);                         // Returns ICE_STR_TRUE if string s1 begins with string s2, Else returns ICE_STR_FALSE
ICE_STR_API  ice_str_bool  ICE_STR_CALLCONV  ice_str_end(char* s1, char* s2);                           // Returns ICE_STR_TRUE if string s1 ends with string s2, Else returns ICE_STR_FALSE
ICE_STR_API  ice_str_bool  ICE_STR_CALLCONV  ice_str_end_char(char* str, char ch);                      // Returns ICE_STR_TRUE if string str ends with char ch, Else returns ICE_STR_FALSE
ICE_STR_API  char*         ICE_STR_CALLCONV  ice_str_rev(char* str);                                    // Returns string reversed
ICE_STR_API  void          ICE_STR_CALLCONV  ice_str_free(char* str);                                   // Frees string (equivalent to stdlib's free function)
ICE_STR_API  void          ICE_STR_CALLCONV  ice_str_arr_free(char** arr);                              // Frees array of strings
```
