#include <stdlib.h>

#include "utils.h"

bool sorted(int32_t *arr, size_t len) {
    for (size_t i = 0; i + 1 < len; i++) {
        if (arr[i] > arr[i + 1])
            return false;
    }

    return true;
}

int32_t rng(int32_t min, int32_t max) {
    return (int32_t) ((uint32_t) min + (uint32_t) rand() % ((uint32_t) max - (uint32_t) min + 1u));
}
