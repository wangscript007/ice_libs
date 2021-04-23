#define ICE_STR_IMPL
#include <stdio.h>
#include "ice_str.h"

int main(int argc, char** argv) {
    char* str1 = "a;b;c;d";

    // NOTE: ice_str allocates memory for resulted strings, So use ice_str_free or ice_str_arr_free (free does same)
    char* str1_sub = ice_str_sub(str1, 0, 2);
    char* str1_concat = ice_str_concat(str1, "ba;ba;");
    char* str1_rep = ice_str_rep(str1, 2);
    char* str1_chr = ice_str_char(str1, 2);
    char* str1_up = ice_str_upper(str1);
    char* str1_low = ice_str_lower(str1);
    char* str1_cap = ice_str_capitalize(str1);
    char* str1_rev = ice_str_rev(str1);

    printf("str1 length: %d\n", ice_str_len(str1));
    printf("substring of str1 from index 0 to 2: %s\n", str1_sub);
    printf("Concat str1 with ba;ba; str: %s\n", str1_concat);
    printf("str1 repeated 2 times: %s\n", str1_rep);
    printf("str1 at index 2: %s\n", str1_chr);
    printf("Matching with same str? %s\n", (ice_str_match(str1, "a;b;c;d;") == ICE_STR_TRUE) ? "true" : "false");
    printf("str1 to uppercase: %s\n", str1_up);
    printf("str1 to lowercase: %s\n", str1_low);
    printf("str1 captialized: %s\n", str1_cap);
    printf("str1 ends with ;? %s\n", (ice_str_end_char(str1, ';') == ICE_STR_TRUE) ? "true" : "false");
    printf("str1 begins with a;? %s\n", (ice_str_begin(str1, "a;") == ICE_STR_TRUE) ? "true" : "false");
    printf("str1 ends with d;? %s\n", (ice_str_end(str1, "d;") == ICE_STR_TRUE) ? "true" : "false");
    printf("str1 reversed: %s\n", str1_rev);

    char** splitted = ice_str_split(str1, ';');
    printf("splitted str1 array element 1: %s\n", splitted[0]);
    printf("splitted str1 array element 2: %s\n", splitted[1]);
    printf("splitted str1 array element 3: %s\n", splitted[2]);
    printf("splitted str1 array element 4: %s\n", splitted[3]);
    
    // NOTE: Although ice_str uses malloc, You are forced somehow to use calloc as string functions will take length of string via calloc way...
    // If you have way to use malloc then tell me
    char** strarr = (char**) calloc(31, sizeof(char));
    strarr[0] = "abcdefghij";
    strarr[1] = "klmnopqrst";
    strarr[2] = "uvwxyz1234\0";

    char* joined = ice_str_join(strarr);
    printf("joined string from array of strings strarr: %s\n", joined);

    char* joined_with_delim = ice_str_join_with_delim(strarr, ';');
    printf("joined string from array of strings strarr with semicolon: %s\n", joined_with_delim);

    //ice_str_free(str1_sub);
    //ice_str_free(str1_concat);
    //ice_str_free(str1_rep);
    //ice_str_free(str1_chr);
    //ice_str_free(str1_up);
    //ice_str_free(str1_low);
    //ice_str_free(str1_cap);
    //ice_str_free(str1_rev);
    //ice_str_free(joined_with_delim);
    //ice_str_free(joined);
    //ice_str_arr_free(splitted);
    //ice_str_arr_free(strarr);

    return 0;
}
