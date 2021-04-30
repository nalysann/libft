#include "ft_complex.h"

t_complex	complex_sub(const t_complex *first, const t_complex *second)
{
	t_complex	res;

	res.re = first->re - second->re;
	res.im = first->im - second->im;
	return (res);
}

void	complex_isub(t_complex *this, const t_complex *other)
{
	this->re -= other->re;
	this->im -= other->im;
}
