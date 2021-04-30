#include <stddef.h>

#include "ft_stdlib.h"

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	sign;
	char	*str;

	len = ft_intlen(n);
	sign = n < 0;
	str = (char *)xmalloc(len + 1);
	str[len] = '\0';
	while (len > sign)
	{
		str[--len] = (char)('0' + ft_abs(n % 10));
		n /= 10;
	}
	if (sign)
		str[--len] = '-';
	return (str);
}
