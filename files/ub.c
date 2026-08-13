#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

#include "../utils.h"

void ub_sort(int32_t *arr, size_t *len) {
    size_t i = *len;

    while (!sorted(arr, *len)) {
        for (int32_t *e = arr; e < arr + *len; e++)
            *e = ((volatile int32_t *)arr)[i++];
    }
}
