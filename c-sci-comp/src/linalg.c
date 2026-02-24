#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include "linalg.h"

static void swap_rows(matrix_t* matrix, size_t r1, size_t r2)
{
    if (r1 == r2)
    {
        return;
    }

    for (size_t j = 0; j < matrix->cols; ++j)
    {
        double temp = get_matrix(matrix, r1, j);
        set_matrix(matrix, r1, j, get_matrix(matrix, r2, j));
        set_matrix(matrix, r2, j, temp);
    }
}
