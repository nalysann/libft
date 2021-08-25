#include "ft_complex.h"

t_complex complex_div(const t_complex* first, const t_complex* second)
{
    t_complex res;
    double abs2 = complex_abs2(second);
    res.re = (first->re * second->re + first->im * second->im) / abs2;
    res.im = (first->im * second->re - first->re * second->im) / abs2;
    return res;
}

void complex_idiv(t_complex* this, const t_complex* other)
{
    double abs2 = complex_abs2(other);
    double re = (this->re * other->re + this->im * other->im) / abs2;
    double im = (this->im * other->re - this->re * other->im) / abs2;
    this->re = re;
    this->im = im;
}
