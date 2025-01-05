#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include "blake.h"
#include "crypto/c_blake256.h"

void blake_hash(const char* input, char* output, uint32_t len) {
    blake256_hash(output, input, len);
}
