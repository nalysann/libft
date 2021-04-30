#include "ft_stdio.h"
#include "ft_vector.h"

void	*vector_pop_back(t_vector *vector)
{
	if (vector->size == 0)
		ft_error(EMPTY_VECTOR_POP_MSG, E_VECTOR_ERROR);
	return (vector->data[vector->size-- - 1]);
}
