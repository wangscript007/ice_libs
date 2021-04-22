# ice_joy.h Documentation

### Enums

```c
typedef enum {
    ICE_JOY_TRUE    = 0,
    ICE_JOY_FALSE   = -1,
} ice_joy_bool;

typedef enum {
    ICE_JOY_MOVE_ANALOG,
    ICE_JOY_CAMERA_ANALOG,
} ice_joy_analog;

typedef enum {
    ICE_JOY_NONE,
    ICE_JOY_A,
    ICE_JOY_B,
    ICE_JOY_X,
    ICE_JOY_Y,
    ICE_JOY_CROSS,
    ICE_JOY_CIRCLE,
    ICE_JOY_SQUARE,
    ICE_JOY_TRIANGLE,
    ICE_JOY_LB,
    ICE_JOY_RB,
    ICE_JOY_LT,
    ICE_JOY_RT,
    ICE_JOY_L1,
    ICE_JOY_R1,
    ICE_JOY_L2,
    ICE_JOY_R2,
    ICE_JOY_L3,
    ICE_JOY_R3,
    ICE_JOY_OPTIONS,
    ICE_JOY_START,
    ICE_JOY_BACK,
    ICE_JOY_VIEW,
    ICE_JOY_MENU,
    ICE_JOY_SELECT,
    ICE_JOY_UP,
    ICE_JOY_DOWN,
    ICE_JOY_LEFT,
    ICE_JOY_RIGHT,
} ice_joy_button;

typedef enum {
    ICE_JOY_HAT_CENTERED,
    ICE_JOY_HAT_UP,
    ICE_JOY_HAT_UP_RIGHT,
    ICE_JOY_HAT_RIGHT,
    ICE_JOY_HAT_DOWN_RIGHT,
    ICE_JOY_HAT_DOWN,
    ICE_JOY_HAT_DOWN_LEFT,
    ICE_JOY_HAT_LEFT,
    ICE_JOY_HAT_UP_LEFT,
} ice_joy_hat;
```

### Structs

```c
typedef struct ice_joy_vec2 {
    float x;
    float y;
} ice_joy_vec2;
```

### Definitions

```c
// Typedefs
typedef char* ice_joy_str;

// Buttons
#define ICE_JOY_BUTTON_NONE
#define ICE_JOY_BUTTON_A
#define ICE_JOY_BUTTON_B
#define ICE_JOY_BUTTON_X
#define ICE_JOY_BUTTON_Y
#define ICE_JOY_BUTTON_CROSS
#define ICE_JOY_BUTTON_SQUARE
#define ICE_JOY_BUTTON_CIRCLE
#define ICE_JOY_BUTTON_TRIANGLE
#define ICE_JOY_BUTTON_LB
#define ICE_JOY_BUTTON_RB
#define ICE_JOY_BUTTON_LT
#define ICE_JOY_BUTTON_RT
#define ICE_JOY_BUTTON_L1
#define ICE_JOY_BUTTON_R1
#define ICE_JOY_BUTTON_L2
#define ICE_JOY_BUTTON_R2
#define ICE_JOY_BUTTON_L3
#define ICE_JOY_BUTTON_R3
#define ICE_JOY_BUTTON_START
#define ICE_JOY_BUTTON_BACK
#define ICE_JOY_BUTTON_VIEW
#define ICE_JOY_BUTTON_MENU
#define ICE_JOY_BUTTON_SELECT
#define ICE_JOY_BUTTON_OPTIONS
#define ICE_JOY_BUTTON_DPAD_UP
#define ICE_JOY_BUTTON_DPAD_DOWN
#define ICE_JOY_BUTTON_DPAD_LEFT
#define ICE_JOY_BUTTON_DPAD_RIGHT

// Allow to use ice_joy functions as extern ones...
#define ICE_JOY_EXTERN 

// Call conventions (You could define one of these to set compiler calling convention)
#define ICE_JOY_CALLCONV_VECTORCALL
#define ICE_JOY_CALLCONV_FASTCALL
#define ICE_JOY_CALLCONV_STDCALL
#define ICE_JOY_CALLCONV_CDECL

// Default definitions
// Max count of Joysticks allowed by ice_joy library!
#define ICE_JOY_JOYSTICKS 4

// If no platform defined, This definition will define itself
// This definition sets platform depending on platform-specified C compiler definitions
// NOTE FOR MICROSOFT WINDOWS: Platform backend defined depending on project type!
#define ICE_JOY_PLATFORM_AUTODETECTED

// In case you want to build DLL on Microsoft Windows!
// Keep in mind you should set backend (But it's defined by default if not...)
#define ICE_JOY_DLLEXPORT
#define ICE_JOY_DLLIMPORT
```

### Functions

```c
// Connection, Misc, etc...
ice_joy_bool ice_joy_init(void);                                                   // Initializes ice_joy library, Returns ICE_JOY_TRUE on success or ICE_JOY_FALSE on failure.
ice_joy_bool ice_joy_connected(int ice_joy_index);                                 // Returns ICE_JOY_TRUE if Joystick at index ice_joy_index is connected, Else returns ICE_JOY_FALSE.
int          ice_joy_joysticks_count(void);                                        // Returns count of current connected Joysticks as integer.
ice_joy_str  ice_joy_name(int ice_joy_index);                                      // Returns Joystick's name at index ice_joy_index as string.
ice_joy_bool ice_joy_update(int ice_joy_index);                                    // Updates Joystick's state(s) at index ice_joy_index, Returns ICE_JOY_TRUE on update success and ICE_JOY_FALSE on update failure.
int          ice_joy_axis_count(int ice_joy_index);                                // Returns count of axes in Joystick at index ice_joy_index as integer.
int          ice_joy_buttons_count(int ice_joy_index);                             // Returns count of buttons in Joystick at index ice_joy_index as integer.
ice_joy_bool ice_joy_close(void);                                                  // Closes ice_joy library, Returns ICE_JOY_TRUE on success and ICE_JOY_FALSE on failure.

// Buttons
ice_joy_bool ice_joy_button_down(int ice_joy_index, int button);                   // Returns ICE_JOY_TRUE if button from Joystick at index ice_joy_index is pressed, Else returns ICE_JOY_FALSE.
ice_joy_bool ice_joy_button_up(int ice_joy_index, int button);                     // Returns ICE_JOY_TRUE if button from Joystick at index ice_joy_index is pressed, Else returns ICE_JOY_FALSE.
ice_joy_bool ice_joy_button_pressed(int ice_joy_index, int button);                // Returns ICE_JOY_TRUE if button from Joystick at index ice_joy_index is pressed, Else returns ICE_JOY_FALSE.
ice_joy_bool ice_joy_button_released(int ice_joy_index, int button);               // Returns ICE_JOY_TRUE if button from Joystick at index ice_joy_index is pressed, Else returns ICE_JOY_FALSE.

// Analogs and Hats (Hats might be removed if not compatible...)
ice_joy_vec2 ice_joy_analog_movement(int ice_joy_index, ice_joy_analog analog);    // Returns 2D vector position containing movement of analog from Joystick at index ice_joy_index.
ice_joy_bool ice_joy_hat_pressed(int ice_joy_index, int hat);                     // Returns float which is movement of hat from Joystick at index ice_joy_index.
```

