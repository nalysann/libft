#include <stdarg.h>

#include "ft_stdlib.h"
#include "ft_string.h"

#include "pf_handle_placeholder.h"

char	*handle_invalid(t_fields *fields, va_list ap)
{
	char	*result;

	result = ft_strnew(0);
	ft_memset(fields, 0, sizeof(*fields));
	(void)ap;
	return (result);
}
