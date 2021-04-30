#include <stddef.h>

#include "ft_string.h"

char	*ft_stpcpy(char *dst, const char *src)
{
	size_t	len;

	len = ft_strlen(src);
	return (ft_memcpy(dst, src, len + 1) + len);
}
