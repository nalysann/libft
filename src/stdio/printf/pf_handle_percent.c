#include <stdarg.h>

#include "ft_stdlib.h"

#include "pf_handle_placeholder.h"

char	*handle_percent(t_fields *fields, va_list ap)
{
	char	*result;

	result = ft_strnew(1);
	result[0] = '%';
	(void)fields;
	(void)ap;
	return (result);
}
