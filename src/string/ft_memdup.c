#include <stddef.h>

#include "ft_stdlib.h"
#include "ft_string.h"

void	*ft_memdup(const void *s, size_t n)
{
	return (ft_memcpy(xmalloc(n), s, n));
}
