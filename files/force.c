#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

// if an element is out of order, force it to be in order
// Time: O(n)
// Space: O(1)
// Weakness: it changes elements and the output array may contain elements not present in the input one
void force_sort(int32_t *arr, size_t *len) {
    // first element is assumed to be always sorted
    for (size_t i = 1; i < *len; i++) {
        if (arr[i] < arr[i - 1])
            arr[i] = arr[i - 1] + 1; // just to make it more natural. it can be just arr[i - 1]
    }
}
