#include <unistd.h>

#include "ft_stdio.h"

void	ft_putchar(char c)
{
	ft_putchar_fd(c, STDOUT_FILENO);
}
