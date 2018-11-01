#pragma once

#include "WTypes.h"

#ifdef __cplusplus
extern "C"{
#endif

uint8_t shiftIn(pin_size_t dataPin, pin_size_t clockPin, BitOrder bitOrder);
void shiftOut(pin_size_t dataPin, pin_size_t clockPin, BitOrder bitOrder, uint8_t value);

#ifdef __cplusplus
} // extern "C"
#endif
