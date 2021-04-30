#include <stddef.h>

#include "ft_stdlib.h"
#include "ft_string.h"

char	*ft_strndup(const char *s, size_t n)
{
	size_t	len;
	char	*new;

	len = ft_strnlen(s, n);
	new = (char *)xmalloc(len + 1);
	new[len] = '\0';
	return (ft_memcpy(new, s, len));
}
