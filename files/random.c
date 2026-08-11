#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

bool sorted(int32_t *arr, size_t len) {
    for (size_t i = 0; i + 1 < len; i++) {
        if (arr[i] > arr[i + 1])
            return false;
    }

    return true;
}


int32_t rng(int32_t min, int32_t max) {
    return (int32_t) ((uint32_t) min + (uint32_t) rand() % ((uint32_t) max - (uint32_t) min + 1u));
}

void random_sort(int32_t *arr, size_t len) {
    while (!sorted(arr, len)) {
        for (int32_t *e = arr; e < arr + len; e++)
            *e = rng(INT32_MIN, INT32_MAX - 1);
    }
}

int main(void) {
    srand(time(NULL));
    
    int32_t arr[] = { 1, 5, 6, 2, 7, 9, 10, 4, 5, 2, 0 };
    size_t len = sizeof(arr) / sizeof(arr[0]);

    random_sort(arr, len);
    
    for (int32_t *e = arr; e < arr + len; e++)
        printf("%d ", *e);

    printf("\n");
    return 0;
}
