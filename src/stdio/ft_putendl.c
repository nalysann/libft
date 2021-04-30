#include <unistd.h>

#include "ft_stdio.h"

void	ft_putendl(const char *s)
{
	ft_putendl_fd(s, STDOUT_FILENO);
}
