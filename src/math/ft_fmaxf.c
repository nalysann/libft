#include "ft_math.h"

float ft_fmaxf(float x, float y)
{
    if (x > y) {
        return x;
    }
    return y;
}
