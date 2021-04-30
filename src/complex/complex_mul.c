#include "ft_complex.h"

t_complex	complex_mul(const t_complex *first, const t_complex *second)
{
	t_complex	res;

	res.re = first->re * second->re - first->im * second->im;
	res.im = first->re * second->im + first->im * second->re;
	return (res);
}

void	complex_imul(t_complex *this, const t_complex *other)
{
	double	re;
	double	im;

	re = this->re * other->re - this->im * other->im;
	im = this->re * other->im + this->im * other->re;
	this->re = re;
	this->im = im;
}
