#include <stdarg.h>

#include "ft_stdlib.h"

#include "pf_handle_placeholder.h"

char	*handle_char(t_fields *fields, va_list ap)
{
	char	*result;

	result = ft_strnew(1);
	result[0] = (char)va_arg(ap, int);
	(void)fields;
	return (result);
}
