#include "ft_stdlib.h"
#include "ft_vector.h"

void	vector_sort(t_vector *vector, int (*cmp)(const void *, const void *))
{
	ft_qsort(vector->data, vector->size, sizeof(void *), cmp);
}
