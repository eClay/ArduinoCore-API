#pragma once

#ifdef __cplusplus
#include <stdint.h>

unsigned long pulseIn(pin_size_t pin, PinStatus state, unsigned long timeout = 1000000L);
unsigned long pulseInLong(pin_size_t pin, PinStatus state, unsigned long timeout = 1000000L);
unsigned long pulseIn(pin_size_t pin, PinStatus state, unsigned long timeout);
unsigned long pulseInLong(pin_size_t pin, PinStatus state, unsigned long timeout);


#endif
