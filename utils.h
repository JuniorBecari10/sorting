#pragma once

#define FOREACH(arr) for (int32_t *e = (arr); e < (arr) + *len; e++)
#define FOREACHH(arr) for (int32_t *e = (arr); e < (arr) + len; e++)
#define ARRAY int32_t arr[] = { 1, 5, 3, 7, 10, 0, 5, 2, 6, 3 }

#define APPLY(function, name) {                  \
    ARRAY;                                       \
    size_t len = sizeof(arr) / sizeof(arr[0]);   \
    function(arr, &len);                         \
    printf("%s: ", name);                        \
    FOREACHH(arr) printf("%d ", *e);             \
    printf("\n");                                \
}
