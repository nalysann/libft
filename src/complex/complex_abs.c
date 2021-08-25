#include "ft_complex.h"

double complex_abs2(const t_complex* this)
{
    return this->re * this->re + this->im * this->im;
}
