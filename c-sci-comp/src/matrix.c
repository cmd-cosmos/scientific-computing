#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "matrix.h"

matrix_t* create_matrix(size_t rows, size_t cols)
{
    matrix_t* matrix = malloc(sizeof(matrix_t));
    if (!matrix)
    {
        return NULL;
    }
    matrix->rows = rows;
    matrix->cols = cols;

    matrix->data = calloc(rows*cols, sizeof(double));
    if (!matrix->data)
    {
        free(matrix);
        return NULL;
    }
    return matrix;
}
