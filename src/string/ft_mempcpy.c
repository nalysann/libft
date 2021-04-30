#include <stddef.h>

#include "ft_string.h"

void	*ft_mempcpy(void *dst, const void *src, size_t n)
{
	return (ft_memcpy(dst, src, n) + n);
}
