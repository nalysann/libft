#include <stddef.h>

#include "ft_stdlib.h"
#include "ft_string.h"

void	*ft_memalloc(size_t size)
{
	void	*data;

	data = xmalloc(size);
	ft_memset(data, 0, size);
	return (data);
}
