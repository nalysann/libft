#include <stddef.h>

#include "ft_string.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*p;
	unsigned char	uc;

	p = s + ft_strlen(s);
	uc = (unsigned char)c;
	if (c == '\0')
		return ((char *)p);
	while (s < p)
		if (*--p == uc)
			return ((char *)p);
	return (NULL);
}
