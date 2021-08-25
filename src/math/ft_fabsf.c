#include "ft_math.h"

float ft_fabsf(float x)
{
    if (x < 0) {
        return -x;
    }
    return x;
}
