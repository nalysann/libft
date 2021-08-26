#include <stddef.h>

#include "ft_stdlib.h"

size_t ft_intlen(int n)
{
    size_t len = 1;
    if (n < 0) {
        ++len;
    }
    while (n / 10) {
        n /= 10;
        ++len;
    }
    return len;
}
