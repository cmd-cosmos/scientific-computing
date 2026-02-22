#ifndef LINALG_H
#define LINALG_H

#include "matrix.h"
#include "vector.h"

int lu_decomp(matrix_t* matrix, int*  pivot);

// solve Ax = b using LU factorization
int lu_solve(const matrix_t* LU_matrix, const int* pivot, const vector_t* b, vector_t* x);

#endif