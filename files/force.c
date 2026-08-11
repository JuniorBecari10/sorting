#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

// if an element is out of order, force it to be in order
// Time: O(n)
// Space: O(1)
// Weakness: it changes elements and the output array may contain elements not present in the input one
void force_sort(int32_t *arr, size_t len) {
    // first element is assumed to be always sorted
    for (size_t i = 1; i < len; i++) {
        if (arr[i] < arr[i - 1])
            arr[i] = arr[i - 1] + 1; // just to make it more natural. it can be just arr[i - 1]
    }
}

int main(void) {
    int32_t arr[] = { 2, 5, 1, 6, 8, 2, 2 };
    size_t len = sizeof(arr) / sizeof(arr[0]);

    force_sort(arr, len);

    for (int32_t *e = arr; e < arr + len; e++)
        printf("%d ", *e);

    printf("\n");
    return 0;
}
