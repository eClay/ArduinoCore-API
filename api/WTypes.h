#pragma once

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#ifndef boolean
typedef bool boolean;
#endif

#ifndef byte
typedef uint8_t byte;
#endif

#ifndef word
typedef uint16_t word;
#endif

#ifdef EXTENDED_PIN_MODE
// Platforms who wnat to declare more than 256 pins need to define EXTENDED_PIN_MODE globally
typedef uint32_t pin_size_t;
#else
typedef uint8_t pin_size_t;
#endif

typedef enum {
  LOW     = 0,
  HIGH    = 1,
  CHANGE  = 2,
  FALLING = 3,
  RISING  = 4,
} PinStatus;

typedef enum {
  INPUT           = 0x0,
  OUTPUT          = 0x1,
  INPUT_PULLUP    = 0x2,
  INPUT_PULLDOWN  = 0x3,
} PinMode;

typedef enum {
  LSBFIRST = 0,
  MSBFIRST = 1,
} BitOrder;
