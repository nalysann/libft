#include <stddef.h>

#include "pf_bigint.h"
#include "pf_utils.h"

void	ulltoa(unsigned long long value, t_string *string)
{
	size_t	length;
	size_t	i;

	length = get_length_unsigned(value, 10);
	i = 0;
	while (i < length)
	{
		string->str[string->len + length - 1 - i] = (char)(value % 10 + '0');
		++i;
		value /= 10;
	}
	string->len += length;
}
