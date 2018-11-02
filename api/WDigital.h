#pragma once

#include "WTypes.h"

#ifdef __cplusplus
extern "C"{
#endif

void pinMode(pin_size_t pinNumber, PinMode pinMode);
void digitalWrite(pin_size_t pinNumber, PinStatus status);
PinStatus digitalRead(pin_size_t pinNumber);

#ifdef __cplusplus
} // extern "C"
#endif
