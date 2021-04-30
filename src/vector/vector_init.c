#include "ft_stdlib.h"
#include "ft_vector.h"

t_vector	vector_on_stack(void)
{
	t_vector	vector;

	vector.capacity = VECTOR_INIT_CAPACITY;
	vector.size = 0;
	vector.data = (void **)xmalloc(sizeof(void *) * VECTOR_INIT_CAPACITY);
	return (vector);
}

t_vector	*vector_on_heap(void)
{
	t_vector	*vector;

	vector = (t_vector *)xmalloc(sizeof(t_vector));
	vector->capacity = VECTOR_INIT_CAPACITY;
	vector->size = 0;
	vector->data = (void **)xmalloc(sizeof(void *) * VECTOR_INIT_CAPACITY);
	return (vector);
}
