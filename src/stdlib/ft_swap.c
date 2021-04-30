#include <stddef.h>

void	ft_swap(void *a, void *b, size_t size)
{
	unsigned char	*a_uchar;
	unsigned char	*b_uchar;
	unsigned char	tmp;

	a_uchar = a;
	b_uchar = b;
	while (size--)
	{
		tmp = *a_uchar;
		*a_uchar++ = *b_uchar;
		*b_uchar++ = tmp;
	}
}
