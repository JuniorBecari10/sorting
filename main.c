#include "files/average.c"
#include "files/capitalist.c"
#include "files/delete.c"
#include "files/sum.c"

#include "utils.h"

int main(void) {
    APPLY(average_sort, "Average Sort");
    APPLY(capitalist_sort, "Capitalist Sort");
    APPLY(delete_sort, "Delete Sort");
    APPLY(sum_sort, "Sum Sort");

    return 0;
}
