#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_LEN(arr) sizeof(arr) / sizeof((arr)[0])

// size_t delete_sort_aux(int32_t *array, size_t *len) {
//     if (len == 0)
//         return 0;

//     size_t sorted_len = 0;
//     int32_t *sorted = malloc(len * sizeof(int32_t));
//     int32_t largest = array[0];

//     for (size_t i = 0; i < *len; i++) {
//         if (array[i] >= largest) {
//             largest = array[i]; // i know it's redundant when array[i] == largest, but this optimizes out a comparison.
//             sorted[sorted_len++] = array[i];
//         }
//     }

//     memcpy(array, sorted, sorted_len * sizeof(int32_t));
//     free(sorted);
//     return sorted_len;
// }

// Time: O(n)
// Space: O(1)
// Weakness: deletes elements
size_t purge_sort(int32_t *array, size_t *len) {
    if (len == 0)
        return 0;

    size_t sorted_len = 0;
    int32_t largest = array[0];

    for (size_t i = 0; i < *len; i++) {
        if (array[i] >= largest) {
            largest = array[i];
            array[sorted_len++] = array[i];
        }
    }

    return sorted_len;
}
