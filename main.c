#include "utils.h"

#include "files/average.c"
#include "files/capitalist.c"
#include "files/delete.c"
#include "files/sum.c"
#include "files/force.c"
#include "files/miracle.c"
#include "files/purge.c"
#include "files/random.c"
#include "files/rng.c"
#include "files/ub.c"


int main(void) {
    srand(time(NULL));
    PRELUDE;

    APPLY(average_sort, "Average Sort");
    APPLY(capitalist_sort, "Capitalist Sort");
    APPLY(delete_sort, "Delete Sort");
    APPLY(sum_sort, "Sum Sort");
    APPLY(force_sort, "Force Sort");
    APPLY(purge_sort, "Purge Sort");
    APPLY(random_sort, "Random Sort");
    APPLY(rng_sort, "RNG Sort");
    APPLY(ub_sort, "UB Sort");
    // APPLY(miracle_sort, "Miracle Sort"); // this will hang

    return 0;
}
