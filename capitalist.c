#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

// 
// Time: O(n)
// Space: O(1)
// Weakness: changes the entire array
void capitalist_sort(int32_t *arr, size_t *len) {
    int32_t sum_others = 0;
    size_t largest_index = 0;

    for (size_t i = 0; i < *len; i++) {
        if (arr[i] > arr[largest_index])
            largest_index = i;
    }

    for (size_t i = 0; i < *len; i++) {
        if (i != largest_index)
            sum_others += arr[i];
    }

    int32_t average = sum_others / *len;
    
    for (size_t i = 0; i < *len; i++) {
        if (i != largest_index) {
            int32_t difference = arr[i] - average;
            arr[i] -= difference;
            arr[largest_index] += difference;
            
            if (arr[i] > average) {
                int32_t difference = arr[i] - average;
                arr[i] -= difference;
                arr[largest_index] += difference;
            }
            else if (arr[i] < average) {
                int32_t difference = average - arr[i];
                arr[i] += difference;
                arr[largest_index] -= difference;
            }
        }
    }

    int32_t last = arr[*len - 1];
    arr[*len - 1] = arr[largest_index];
    arr[largest_index] = last;
}
