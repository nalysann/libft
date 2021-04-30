#include <stdarg.h>

#include "ft_stdlib.h"
#include "ft_string.h"

#include "pf_handle_placeholder.h"
#include "pf_utils.h"

char	*handle_pointer(t_fields *fields, va_list ap)
{
	char	*result;
	char	str[42];

	itoa_base_unsigned((unsigned long)va_arg(ap, void *), HEXL_DIGITS, str);
	result = ft_strnew(ft_strlen(str) + 2);
	result[0] = '0';
	result[1] = 'x';
	ft_strcpy(result + 2, str);
	(void)fields;
	return (result);
}
