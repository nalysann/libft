#include <stddef.h>

#include "ft_stdlib.h"
#include "ft_vector.h"

t_vector vector_on_stack()
{
    t_vector vector;
    vector.capacity = 0;
    vector.size = 0;
    vector.data = NULL;
    return vector;
}

t_vector* vector_on_heap()
{
    t_vector* vector = (t_vector*)xmalloc(sizeof(t_vector));
    vector->capacity = 0;
    vector->size = 0;
    vector->data = NULL;
    return vector;
}
