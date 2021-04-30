#include <stddef.h>

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	const char	*p;

	p = s;
	while (maxlen-- && *p)
		++p;
	return (p - s);
}
