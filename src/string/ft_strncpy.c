#include <stddef.h>

#include "ft_string.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	len;

	len = ft_strnlen(src, n);
	if (len != n)
		ft_memset(dst + len, 0, n - len);
	return (ft_memcpy(dst, src, len));
}
