#include <stddef.h>
#include <stdint.h>

#include "ft_stdlib.h"
#include "ft_string.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len2 > SIZE_MAX - len1 - 1)
		return (NULL);
	new = (char *)xmalloc(len1 + len2 + 1);
	ft_memcpy(new, s1, len1);
	ft_memcpy(new + len1, s2, len2 + 1);
	return (new);
}
