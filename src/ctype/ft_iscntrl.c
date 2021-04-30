#include "ft_ctype.h"

int	ft_iscntrl(int c)
{
	return (!ft_isprint(c));
}
