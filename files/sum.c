#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

// Sums the entire array and returns a single element with the sum.
// Time: O(n)
// Space: O(1)
// Weakness: returns a single-element array
void sum_sort(int32_t *arr, size_t *len) {
    size_t sum = 0;

    for (int32_t *e = arr; e < arr + *len; e++)
        sum += *e;

    *arr = sum;
    *len = 1;
}
