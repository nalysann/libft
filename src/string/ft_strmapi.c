#include <stddef.h>

#include "ft_stdlib.h"
#include "ft_string.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	new = (char *)xmalloc(len + 1);
	i = 0;
	while (i < len)
	{
		new[i] = f(i, s[i]);
		++i;
	}
	new[i] = '\0';
	return (new);
}
