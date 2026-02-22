#ifndef VECTOR_H
#define VECTOR_H
#include <stddef.h>

typedef struct
{
    size_t size;
    double* data;
} vector_t;

vector_t* create_vec(size_t size);
void free_vec(vector_t* vec);

double get_vector(const vector_t* vec, size_t i);
void set_vector(vector_t* vec, size_t i, double val);

void fill_vector(vector_t* vec, double val);
void print_vector(const vector_t* vec);

#endif