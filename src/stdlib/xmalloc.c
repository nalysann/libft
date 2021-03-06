#include <stddef.h>
#include <stdlib.h>

#include "in_error.h"
#include "ft_stdio.h"

void	*xmalloc(size_t size)
{
	void	*data;

	if (size == 0)
		ft_error(ALLOC_ZERO_MSG, E_ALLOC);
	data = malloc(size);
	if (data == NULL)
		ft_error(ALLOC_FAIL_MSG, E_ALLOC);
	return (data);
}
