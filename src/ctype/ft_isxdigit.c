#include "ft_ctype.h"

int	ft_isxdigit(int c)
{
	return (('0' <= c && c <= '9')
		|| ('A' <= c && c <= 'F')
		|| ('a' <= c && c <= 'f'));
}
