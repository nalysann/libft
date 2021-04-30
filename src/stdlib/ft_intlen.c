#include <stddef.h>

size_t	ft_intlen(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
		++len;
	while (n / 10)
	{
		n /= 10;
		++len;
	}
	return (len);
}
