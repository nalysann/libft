#include <stdlib.h>

#include "ft_stdlib.h"
#include "ft_string.h"
#include "ft_vector.h"

void	vector_push_back(t_vector *vector, void *item)
{
	void	**data_;
	size_t	new_capacity;

	if (vector->size == vector->capacity)
	{
		new_capacity = vector->capacity * VECTOR_GROWTH_RATE;
		data_ = (void **)xmalloc(sizeof(void *) * new_capacity);
		ft_memmove(data_, vector->data, sizeof(void *) * vector->capacity);
		free(vector->data);
		vector->data = data_;
		vector->capacity = new_capacity;
	}
	vector->data[vector->size++] = item;
}
