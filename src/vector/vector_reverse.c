#include <stddef.h>

#include "ft_stdlib.h"
#include "ft_vector.h"

void vector_reverse(t_vector* vector)
{
    for (size_t beg = 0, end = vector->size; beg < end; ++beg, --end) {
        ft_swap(vector->data[beg], vector->data[end - 1], sizeof(void*));
    }
}
