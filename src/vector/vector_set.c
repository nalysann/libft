#include <stddef.h>

#include "ft_stdio.h"
#include "ft_vector.h"

void vector_set(t_vector* vector, size_t idx, void* item)
{
    if (idx >= vector->size) {
        ft_error(VECTOR_INVALID_INDEX_MSG, E_VECTOR_ERROR);
    }
    vector->data[idx] = item;
}
