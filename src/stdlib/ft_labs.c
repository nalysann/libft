#include "ft_stdlib.h"

long ft_labs(long i)
{
    if (i < 0) {
        return -i;
    }
    return i;
}
