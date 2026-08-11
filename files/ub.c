#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

bool sorted(int32_t *arr, size_t len) {
    for (size_t i = 0; i + 1 < len; i++) {
        if (arr[i] > arr[i + 1])
            return false;
    }

    return true;
}

void ub_sort(int32_t *arr, size_t len) {
    size_t i = len;

    while (!sorted(arr, len)) {
        for (int32_t *e = arr; e < arr + len; e++)
            *e = ((volatile int32_t *)arr)[i++];
    }
}

int main(void) {
    int32_t arr[] = { 1, 5, 6, 2, 7, 9, 10, 4, 5, 2, 0 };
    size_t len = sizeof(arr) / sizeof(arr[0]);

    ub_sort(arr, len);
    
    for (int32_t *e = arr; e < arr + len; e++)
        printf("%d ", *e);

    printf("\n");
    return 0;
}
