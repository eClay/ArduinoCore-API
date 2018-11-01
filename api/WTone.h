#pragma once

#ifdef __cplusplus

#include "WTypes.h"

void tone(pin_size_t pin, unsigned int frequency, unsigned long duration = 0);
void noTone(pin_size_t pin);

#endif
