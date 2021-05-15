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
#define ICE_STR_MICROSOFT      // Microsoft platforms (Not autodefined -> using Unix)

// If no platform defined, This definition will define itself
// This definition sets platform depending on platform-specified C compiler definitions
#define ICE_STR_PLATFORM_AUTODETECTED

// In case you want to build DLL on Microsoft Windows!
#define ICE_STR_DLLEXPORT
#define ICE_STR_DLLIMPORT

// Custom memory allocators
#define ICE_STR_MALLOC(sz)              // malloc(sz)
#define ICE_STR_CALLOC(n, sz)           // calloc(n, sz)
#define ICE_STR_REALLOC(ptr, sz)        // realloc(ptr, sz)
#define ICE_STR_FREE(ptr)               // free(ptr)
```

### Functions

```c
int           ice_str_len(char* str);                                    // Returns length of string
int           ice_str_arr_len(char** arr);                               // Returns length of array of strings
char*         ice_str_sub(char* str, int from, int to);                  // Returns substring from index from -> index to
char*         ice_str_strdup(char* str);                                 // Returns null terminated string
char*         ice_str_concat(char* s1, char* s2);                        // Concats 2 strings and returns the results
char*         ice_str_rep(char* str, int count);                         // Returns string repeated by times
char*         ice_str_char(char* str, int index);                        // Returns char of string at index as null-terminated string
ice_str_bool  ice_str_match(char* s1, char* s2);                         // Returns ICE_STR_TRUE if both 2 strings are same, Else returns ICE_STR_FALSE
char*         ice_str_upper(char* str);                                  // Returns uppercased string
char*         ice_str_lower(char* str);                                  // Returns lowercased string
char*         ice_str_capitalize(char* str);                             // Returns capitalized string
char**        ice_str_split(char* str, char delim);                      // Splits string into array of strings by delimiter
char**        ice_str_splitlines(char* str);                             // Splits string into array of strings by new line character
char*         ice_str_join(char** strs);                                 // Returns all strings joined from array
char*         ice_str_join_with_delim(char** strs, char delim);          // Returns all strings joined from array with delimiter between each 2 strings joined
ice_str_bool  ice_str_begin(char* s1, char* s2);                         // Returns ICE_STR_TRUE if string s1 begins with string s2, Else returns ICE_STR_FALSE
ice_str_bool  ice_str_end(char* s1, char* s2);                           // Returns ICE_STR_TRUE if string s1 ends with string s2, Else returns ICE_STR_FALSE
ice_str_bool  ice_str_end_char(char* str, char ch);                      // Returns ICE_STR_TRUE if string str ends with char ch, Else returns ICE_STR_FALSE
char*         ice_str_rev(char* str);                                    // Returns string reversed
void          ice_str_free(char* str);                                   // Frees string (equivalent to stdlib's free function)
void          ice_str_arr_free(char** arr);                              // Frees array of strings
```
