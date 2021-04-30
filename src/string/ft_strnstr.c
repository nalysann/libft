#include <stddef.h>

#include "ft_string.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (len-- >= needle_len && *haystack != '\0')
		if (*haystack == *needle
			&& ft_memcmp(haystack++, needle, needle_len) == 0)
			return ((char *)--haystack);
	return (NULL);
}
