#include <stddef.h>
#include <stdlib.h>

#include "ft_stdlib.h"
#include "ft_string.h"
#include "ft_vector.h"

void	vector_resize(t_vector *vector, size_t new_size)
{
	void	**new_data;

	if (new_size < vector->capacity)
		vector->size = new_size;
	else
	{
		new_data = (void **)xmalloc(sizeof(void *) * new_size);
		ft_memmove(new_data, vector->data, sizeof(void *) * vector->size);
		free(vector->data);
		vector->data = new_data;
		vector->size = new_size;
		vector->capacity = new_size;
	}
}
