#include <stddef.h>

#include "ft_stdlib.h"
#include "ft_string.h"

void	*xcalloc(size_t count, size_t size)
{
	void	*data;

	data = xmalloc(count * size);
	ft_memset(data, 0, count * size);
	return (data);
}
