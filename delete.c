#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

void delete_sort(int32_t *array, size_t *len) {
    if (*len == 0)
        return;
    
    size_t sorted_i = 1;

    for (int32_t *e = array + 1; e < array + *len; e++) {
        if (*e >= array[sorted_i - 1])
            array[sorted_i++] = *e;
    }

    *len = sorted_i;
}
