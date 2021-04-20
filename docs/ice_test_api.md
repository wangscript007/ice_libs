# ice_test.h Documentation

### API

```c
ICE_TEST_DEFINE(name)                                   // Creates a unit test with name
ICE_ASSERT_EQU(a, b)                                    // Asserts for equality of a and b
ICE_ASSERT_STR_EQU(str1, str2)                          // Asserts for string equality of a and b
ICE_ASSERT_TRUE(a)                                      // Asserts for being a is true
ICE_ASSERT_FALSE(a)                                     // Asserts for being a is false
ICE_ASSERT_NULL(a)                                      // Asserts for being a is NULL
ICE_ASSERT_NOT_NULL(a)                                  // Asserts for being a not NULL
ICE_ASSERT_INT(a)                                       // Asserts for being a is integer
ICE_ASSERT_NOT_INT(a)                                   // Asserts for being a not integer
```
