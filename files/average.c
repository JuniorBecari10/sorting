#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "../utils.h"

// Calculates the average of all the elements and fills the entire array with it.
// Time: O(n)
// Space: O(1)
// Weakness: changes the entire array
void average_sort(int32_t *arr, size_t *len) {
    int32_t sum = 0;

    FOREACH(arr)
        sum += *e;

    int32_t average = sum / *len;

    FOREACH(arr)
        *e = average;
}

