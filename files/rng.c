#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define VEC_LEN(vec) (sizeof(vec) / sizeof((vec)[0]))

struct vector {
    int32_t *vec;
    size_t len;
};

bool sorted(struct vector vec) {
    for (size_t i = 0; i < vec.len - 1; i++) {
        if (vec.vec[i] > vec.vec[i + 1])
            return false;
    }

    return true;
}

void swap(int32_t *a, int32_t *b) {
    int32_t temp = *a;
    *a = *b;
    *b = temp;
}

size_t rng(size_t min, size_t max) {
    return min + rand() % (max - min + 1);
}

void sort(struct vector vec) {
    size_t i = 0;

    while (!sorted(vec)) {
        if (i < vec.len - 1) {
            while (vec.vec[i] > vec.vec[i + 1]) {
                size_t random_index = rng(i + 1, vec.len - 1);
                swap(vec.vec + i, vec.vec + random_index);
            }
        }

        i++;
        if (i >= vec.len)
            i = 0;
    }
}

int main(void) {
    srand(time(NULL));
    
    int32_t vec[] = { 1, 5, 6, 2, 7, 9, 10, 4, 5, 2, 0 };
    struct vector v = {
        .vec = vec,
        .len = VEC_LEN(vec),
    };

    sort(v);

    for (int32_t *e = v.vec; e < v.vec + v.len; e++)
        printf("%d ", *e);

    printf("\n");
}
