#include <stddef.h>
#include <stdlib.h>

#include "ft_stdlib.h"
#include "ft_string.h"
#include "ft_vector.h"

void vector_resize(t_vector* vector, size_t new_size)
{
    if (new_size < vector->capacity) {
        vector->size = new_size;
    } else {
        void** new_data = (void**)xmalloc(sizeof(void*) * new_size);
        ft_memmove(new_data, vector->data, sizeof(void*) * vector->size);
        free(vector->data);
        vector->capacity = new_size;
        vector->size = new_size;
        vector->data = new_data;
    }
}
