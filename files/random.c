#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../utils.h"

void random_sort(int32_t *arr, size_t *len) {
    while (!sorted(arr, *len)) {
        for (int32_t *e = arr; e < arr + *len; e++)
            *e = rng(INT32_MIN, INT32_MAX - 1);
    }
}
