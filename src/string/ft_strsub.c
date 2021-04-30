#include <stddef.h>

#include "ft_string.h"

char	*ft_strsub(const char *s, unsigned start, size_t len)
{
	return (ft_strndup(s + start, len));
}
