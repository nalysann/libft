#include <stddef.h>

#include "ft_string.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strnlen(s2, n);
	ft_memcpy(s1 + len1, s2, len2);
	s1[len1 + len2] = '\0';
	return (s1);
}
