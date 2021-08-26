#include <stddef.h>

#include "ft_stdlib.h"

char* ft_itoa(int n)
{
    size_t len = ft_intlen(n);
    size_t sign = n < 0;
    char* str = (char*)xmalloc(len + 1);
    str[len--] = '\0';
    for ( ; n != 0; --len, n /= 10) {
        str[len] = (char)('0' + ft_abs(n % 10));
    }
    if (sign) {
        str[0] = '-';
    }
    return str;
}
