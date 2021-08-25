#include <stdlib.h>

#include "ft_stdlib.h"
#include "ft_string.h"
#include "ft_vector.h"

void vector_push_back(t_vector* vector, void* item)
{
    if (vector->size == vector->capacity) {
        size_t new_capacity = vector->capacity ? vector->capacity * 2 : 1;
        void** new_data = (void**)xmalloc(sizeof(void*) * new_capacity);
        ft_memmove(new_data, vector->data, sizeof(void*) * vector->capacity);
        free(vector->data);
        vector->capacity = new_capacity;
        vector->data = new_data;
    }
    vector->data[vector->size++] = item;
}
