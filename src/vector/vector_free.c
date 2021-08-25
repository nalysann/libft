#include <stddef.h>
#include <stdlib.h>

#include "ft_vector.h"

void vector_free(t_vector *vector)
{
    free(vector->data);
    vector->data = NULL;
    vector->size = 0;
    vector->capacity = 0;
}

void vector_free_deep(t_vector* vector, void (*f)(void*))
{
    for (size_t i = 0; i < vector->size; ++i) {
        f(vector->data[i]);
    }
    vector_free(vector);
}
