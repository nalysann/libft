#include "ft_ctype.h"

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c - 'A' + 'a');
	else
		return (c);
}
