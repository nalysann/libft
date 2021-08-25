#include "ft_math.h"

long double ft_fmaxl(long double x, long double y)
{
    if (x > y) {
        return x;
    }
    return y;
}
