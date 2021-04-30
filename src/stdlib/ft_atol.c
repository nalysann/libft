#include <stddef.h>

#include "ft_stdlib.h"

long	ft_atol(const char *str)
{
	return (ft_strtol(str, (char **)(NULL), 10));
}
