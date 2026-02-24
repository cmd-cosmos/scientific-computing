#ifndef MATRIX_H
#define MATRIX_H
#include <stddef.h>

typedef struct
{
    size_t rows;
    size_t cols;
    double* data;
} matrix_t;

matrix_t* create_matrix(size_t rows, size_t cols);
void free_matrix(matrix_t* matrix);

double get_matrix(const matrix_t* matrix, size_t i, size_t j);
void set_matrix(matrix_t* matrix, size_t i, size_t j, double val);

void fill_matrix(matrix_t* matrix, double val);
void print_matrix(const matrix_t* matrix);
void swap_rows(matrix_t* matrix, size_t r1, size_t r2);

#endif