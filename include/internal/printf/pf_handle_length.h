#ifndef PF_HANDLE_LENGTH_H
# define PF_HANDLE_LENGTH_H

# include <stdarg.h>

long long			get_signed(va_list ap, int length);
unsigned long long	get_unsigned(va_list ap, int length);
long double			get_float(va_list ap, int length);

#endif
