#pragma once

#ifdef __cplusplus
#include <stdlib.h>

void *operator new(size_t size);
void operator delete(void *ptr);
void *operator new[](size_t size);
void operator delete[](void *ptr);

#endif
