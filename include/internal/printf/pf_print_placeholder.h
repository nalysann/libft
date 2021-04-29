#ifndef PF_PRINT_PLACEHOLDER_H
# define PF_PRINT_PLACEHOLDER_H

# include "pf_buffer.h"
# include "pf_handle_placeholder.h"

# include <stdarg.h>

int		print_placeholder(t_fields *fields, va_list ap, t_buffer *buf);

#endif
