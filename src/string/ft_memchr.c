#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_uchar;
	unsigned char		uc;

	s_uchar = s;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*s_uchar == uc)
			return ((void *)s_uchar);
		++s_uchar;
	}
	return (NULL);
}
