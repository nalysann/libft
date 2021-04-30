#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*uchar_ptr;
	unsigned char	uc;

	uchar_ptr = b;
	uc = (unsigned char)c;
	while (len--)
		*uchar_ptr++ = uc;
	return (b);
}
