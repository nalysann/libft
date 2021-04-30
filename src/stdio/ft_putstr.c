#include <unistd.h>

#include "ft_stdio.h"

void	ft_putstr(const char *s)
{
	ft_putstr_fd(s, STDOUT_FILENO);
}
