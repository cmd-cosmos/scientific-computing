#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "vector.h"

vector_t* create_vec(size_t size)
{
    vector_t* vec = malloc(sizeof(vector_t));
    if (!vec)
    {
        return NULL;
    }
    vec->size = size;
    vec->data = calloc(size, sizeof(double));

    if (!vec->data)
    {
        free(vec);
        return NULL;
    }
    return vec;
}

void free_vec(vector_t* vec)
{
    if (!vec)
    {
        return;
    }
    free(vec->data);
    free(vec);
}

double get_vector(const vector_t* vec, size_t i)
{
    assert(vec != NULL);
    assert(i < vec->size);

    return vec->data[i];
}

void set_vector(vector_t* vec, size_t i, double val)
{
    assert(vec != NULL);
    assert(i < vec->size);

    vec->data[i] = val;
}