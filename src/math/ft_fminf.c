#include "ft_math.h"

float ft_fminf(float x, float y)
{
    if (x < y) {
        return x;
    }
    return y;
}
