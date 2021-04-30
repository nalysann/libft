#include <stddef.h>

#include "ft_string.h"

char	*ft_stpncpy(char *dst, const char *src, size_t n)
{
	size_t	len;

	len = ft_strnlen(src, n);
	ft_memcpy(dst, src, len);
	dst += len;
	if (len == n)
		return (dst);
	return (ft_memset(dst, 0, n - len));
}
