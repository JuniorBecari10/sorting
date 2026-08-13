#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "../utils.h"

void swap(int32_t *a, int32_t *b) {
    int32_t temp = *a;
    *a = *b;
    *b = temp;
}

void rng_sort(int32_t *arr, size_t *len) {
    size_t i = 0;

    while (!sorted(arr, *len)) {
        if (i < *len - 1) {
            while (arr[i] > arr[i + 1]) {
                size_t random_index = rng(i + 1, *len - 1);
                swap(arr + i, arr + random_index);
            }
        }

        i++;
        if (i >= *len)
            i = 0;
    }
}
