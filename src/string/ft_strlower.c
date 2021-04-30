#include "ft_ctype.h"

void	ft_strlower(char *s)
{
	while (*s)
	{
		*s = (char)ft_tolower(*s);
		++s;
	}
}
