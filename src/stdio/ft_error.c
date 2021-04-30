#include <stdlib.h>
#include <unistd.h>

#include "ft_stdio.h"
#include "in_error.h"

void	ft_error(const char *error_message, int error_code)
{
	if (error_message)
	{
		ft_putstr_fd(RED, STDERR_FILENO);
		ft_putstr_fd(error_message, STDERR_FILENO);
		ft_putendl_fd(RESET, STDERR_FILENO);
	}
	exit(error_code);
}
