#include <stddef.h>

#include "ft_string.h"

int	ft_strendswith(const char *str, const char *suffix)
{
	size_t	str_len;
	size_t	suffix_len;

	str_len = ft_strlen(str);
	suffix_len = ft_strlen(suffix);
	if (suffix_len > str_len)
		return (0);
	str += str_len - suffix_len;
	while (*str)
	{
		if (*str != *suffix)
			return (0);
		++str;
		++suffix;
	}
	return (1);
}
