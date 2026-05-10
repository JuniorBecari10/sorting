#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

// It replaces all elements except the largest one with their average and puts the largest one last.
// Time: O(n)
// Space: O(1)
// Weakness: changes the entire array
void capitalist_sort(int32_t *arr, size_t *len) {
    size_t largest_index = 0;
    int32_t sum = 0;

    for (size_t i = 0; i < *len; i++) {
        if (arr[i] > arr[largest_index])
            largest_index = i;
        sum += arr[i];
    }

    int32_t average = (sum - arr[largest_index]) / (*len - 1);
    int32_t largest = sum - average * (*len - 1);

    for (size_t i = 0; i < *len - 1; i++)
        arr[i] = (i == largest_index) ? arr[*len - 1] : average;

    arr[*len - 1] = largest;
}
