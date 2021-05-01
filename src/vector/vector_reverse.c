#include <stddef.h>

#include "ft_stdlib.h"
#include "ft_vector.h"

void	vector_reverse(t_vector *vector)
{
	size_t	beg;
	size_t	end;

	beg = 0;
	end = vector->size;
	while (beg < --end)
		ft_swap(vector->data[beg++], vector->data[end], sizeof(void *));
}
