#include <stddef.h>

#include "ft_stdlib.h"
#include "ft_string.h"

char	*ft_strdup(const char *s)
{
	size_t	len;

	len = ft_strlen(s);
	return ((char *)ft_memcpy(xmalloc(len + 1), s, len + 1));
}
