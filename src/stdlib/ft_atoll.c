#include <stddef.h>

#include "ft_stdlib.h"

long long	ft_atoll(const char *str)
{
	return (ft_strtoll(str, (char **)(NULL), 10));
}
