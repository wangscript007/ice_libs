# ice_time.h Documentation

### Enums

```c
typedef enum {
    ICE_TIME_SUNDAY = 1,
    ICE_TIME_MONDAY,
    ICE_TIME_TUESDAY,
    ICE_TIME_WEDNESDAY,
    ICE_TIME_THURSDAY,
    ICE_TIME_FRIDAY,
    ICE_TIME_SATURDAY,
} ice_time_day;

typedef enum {
    ICE_TIME_JANUARY = 1,
    ICE_TIME_FEBRUARY,
    ICE_TIME_MARCH,
    ICE_TIME_APRIL,
    ICE_TIME_MAY,
    ICE_TIME_JUNE,
    ICE_TIME_JULY,
    ICE_TIME_AUGUST,
    ICE_TIME_SEPTEMBER,
    ICE_TIME_OCTOBER,
    ICE_TIME_NOVEMBER,
    ICE_TIME_DECEMBER,
} ice_time_month;

typedef enum {
    ICE_TIME_WINTER = 1,
    ICE_TIME_SPRING,
    ICE_TIME_SUMMER,
    ICE_TIME_AUTUMN,
} ice_time_season;
```

### Definitions

```c
// Definitions
// Implements ice_time source code, Works same as #pragma once
#define ICE_TIME_IMPL

// Allow to use ice_time functions as extern ones...
#define ICE_TIME_EXTERN 

// Call conventions (You could define one of these to set compiler calling convention)
#define ICE_TIME_CALLCONV_VECTORCALL
#define ICE_TIME_CALLCONV_FASTCALL
#define ICE_TIME_CALLCONV_STDCALL
#define ICE_TIME_CALLCONV_CDECL

// Platforms could be defined (But not forced to...)
#define ICE_TIME_PLATFORM_MICROSOFT      // Microsoft platforms (Not autodefined -> using Unix)

// If no platform defined, This definition will define itself
// This definition sets platform depending on platform-specified C compiler definitions
#define ICE_TIME_PLATFORM_AUTODETECTED

// In case you want to build DLL on Microsoft Windows!
// Keep in mind you should set backend (But it's defined by default if not...)
#define ICE_TIME_DLLEXPORT
#define ICE_TIME_DLLIMPORT
```

### Functions

```c
// Time Control
ICE_TIME_API  double           ICE_TIME_CALLCONV  ice_time_tick(void);
ICE_TIME_API  double           ICE_TIME_CALLCONV  ice_time_diff(double t1, double t2);
ICE_TIME_API  double           ICE_TIME_CALLCONV  ice_time_fps(double t1, double t2);
ICE_TIME_API  double           ICE_TIME_CALLCONV  ice_time_dt(double t1, double t2);
ICE_TIME_API  char*            ICE_TIME_CALLCONV  ice_time_string(void);
ICE_TIME_API  int              ICE_TIME_CALLCONV  ice_time_current_second(void);
ICE_TIME_API  int              ICE_TIME_CALLCONV  ice_time_current_minute(void);
ICE_TIME_API  int              ICE_TIME_CALLCONV  ice_time_current_hour(void);
ICE_TIME_API  int              ICE_TIME_CALLCONV  ice_time_current_month_day(void);
ICE_TIME_API  ice_time_month   ICE_TIME_CALLCONV  ice_time_current_month(void);
ICE_TIME_API  int              ICE_TIME_CALLCONV  ice_time_current_year(void);
ICE_TIME_API  int              ICE_TIME_CALLCONV  ice_time_current_year_day(void);
ICE_TIME_API  ice_time_day     ICE_TIME_CALLCONV  ice_time_current_week_day(void);
ICE_TIME_API  ice_time_season  ICE_TIME_CALLCONV  ice_time_get_season(void);
ICE_TIME_API  void             ICE_TIME_CALLCONV  ice_time_sleep(unsigned int ms);

// Time Conversion
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ns_to_ms(double ns);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ns_to_sec(double ns);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ns_to_min(double ns);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ns_to_hour(double ns);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ns_to_day(double ns);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ns_to_week(double ns);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ns_to_month(double ns);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ns_to_year(double ns);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ns_to_decade(double ns);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ns_to_century(double ns);

ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ms_to_ns(double ms);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ms_to_sec(double ms);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ms_to_min(double ms);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ms_to_hour(double ms);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ms_to_day(double ms);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ms_to_week(double ms);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ms_to_month(double ms);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ms_to_year(double ms);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ms_to_decade(double ms);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_ms_to_century(double ms);

ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_min_to_ns(double min);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_min_to_ms(double min);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_min_to_sec(double min);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_min_to_hour(double min);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_min_to_day(double min);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_min_to_week(double min);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_min_to_month(double min);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_min_to_year(double min);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_min_to_decade(double min);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_min_to_century(double min);

ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_hour_to_ns(double hr);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_hour_to_ms(double hr);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_hour_to_sec(double hr);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_hour_to_min(double hr);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_hour_to_day(double hr);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_hour_to_week(double hr);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_hour_to_month(double hr);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_hour_to_year(double hr);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_hour_to_decade(double hr);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_hour_to_century(double hr);

ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_day_to_ns(double day);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_day_to_ms(double day);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_day_to_sec(double day);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_day_to_min(double day);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_day_to_hour(double day);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_day_to_week(double day);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_day_to_month(double day);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_day_to_year(double day);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_day_to_decade(double day);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_day_to_century(double day);

ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_week_to_ns(double week);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_week_to_ms(double week);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_week_to_sec(double week);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_week_to_min(double week);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_week_to_hour(double week);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_week_to_day(double week);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_week_to_month(double week);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_week_to_year(double week);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_week_to_decade(double week);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_week_to_century(double week);

ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_month_to_ns(double month);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_month_to_ms(double month);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_month_to_sec(double month);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_month_to_min(double month);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_month_to_hour(double month);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_month_to_day(double month);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_month_to_week(double month);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_month_to_year(double month);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_month_to_decade(double month);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_month_to_century(double month);

ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_year_to_ns(double year);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_year_to_ms(double year);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_year_to_sec(double year);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_year_to_min(double year);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_year_to_hour(double year);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_year_to_day(double year);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_year_to_week(double year);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_year_to_month(double year);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_year_to_decade(double year);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_year_to_century(double year);

ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_decade_to_ns(double decade);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_decade_to_ms(double decade);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_decade_to_sec(double decade);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_decade_to_min(double decade);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_decade_to_hour(double decade);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_decade_to_day(double decade);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_decade_to_week(double decade);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_decade_to_month(double decade);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_decade_to_year(double decade);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_decade_to_century(double decade);

ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_century_to_ns(double century);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_century_to_ms(double century);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_century_to_sec(double century);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_century_to_min(double century);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_century_to_hour(double century);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_century_to_day(double century);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_century_to_week(double century);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_century_to_month(double century);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_century_to_year(double century);
ICE_TIME_API  double  ICE_TIME_CALLCONV  ice_time_century_to_decade(double century);
```