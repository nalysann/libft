#include "ft_math.h"

double ft_fmin(double x, double y)
{
    if (x < y) {
        return x;
    }
    return y;
}
