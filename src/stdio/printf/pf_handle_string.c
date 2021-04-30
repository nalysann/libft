#include <stdarg.h>

#include "pf_handle_placeholder.h"

#include "ft_string.h"

char	*handle_string(t_fields *fields, va_list ap)
{
	char	*str;
	int		len;

	str = va_arg(ap, char *);
	if (!str)
		str = "(null)";
	len = (int)ft_strlen(str);
	if (fields->precision != GET_DEFAULT && len > fields->precision)
		len = fields->precision;
	return (ft_strndup(str, len));
}
