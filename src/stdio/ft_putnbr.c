#include <unistd.h>

#include "ft_stdio.h"

void	ft_putnbr(int n)
{
	ft_putnbr_fd(n, STDOUT_FILENO);
}
