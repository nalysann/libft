#include "ft_ctype.h"

void	ft_strupper(char *s)
{
	while (*s)
	{
		*s = (char)ft_toupper(*s);
		++s;
	}
}
