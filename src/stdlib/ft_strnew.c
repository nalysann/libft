#include <stddef.h>

#include "ft_stdlib.h"

char	*ft_strnew(size_t size)
{
	return (ft_memalloc(size + 1));
}
