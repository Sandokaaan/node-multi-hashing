#ifndef _BLAKE_H_
#define _BLAKE_H_

#include <stdint.h>

void blake_hash(const char* input, char* output, uint32_t len);

#endif /* _BLAKE_H_ */
