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

void free_matrix(matrix_t* matrix)
{
    if (!matrix)
    {
        return;
    }
    free(matrix->data);
    free(matrix);
}

double get_matrix(const matrix_t* matrix, size_t i, size_t j)
{
    assert(matrix != NULL);
    assert(i < matrix->rows);
    assert(j < matrix->cols);

    return matrix->data[i * matrix->cols + j];
}

void set_matrix(matrix_t* matrix, size_t i, size_t j, double val)
{
    assert(matrix != NULL);
    assert(i < matrix->rows);
    assert(j < matrix->cols);

    matrix->data[i*matrix->cols + j] = val;
}