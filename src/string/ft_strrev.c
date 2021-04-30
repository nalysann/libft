#include "ft_stdlib.h"
#include "ft_string.h"

void	ft_strrev(char *s)
{
	char	*p;

	p = s + ft_strlen(s);
	while (s < --p)
		ft_swap(s++, p, sizeof(char));
}
