#include "ft_stdlib.h"

long long ft_llabs(long long i)
{
    if (i < 0) {
        return -i;
    }
    return i;
}
