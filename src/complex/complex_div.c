/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_div.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 16:57:24 by nalysann          #+#    #+#             */
/*   Updated: 2020/09/13 17:15:46 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_complex.h"

t_complex	complex_div(const t_complex *first, const t_complex *second)
{
	t_complex	res;
	double		abs2;

	abs2 = complex_abs2(second);
	res.re = (first->re * second->re + first->im * second->im) / abs2;
	res.im = (first->im * second->re - first->re * second->im) / abs2;
	return (res);
}

void		complex_idiv(t_complex *this, const t_complex *other)
{
	double	re;
	double	im;
	double	abs2;

	abs2 = complex_abs2(other);
	re = (this->re * other->re + this->im * other->im) / abs2;
	im = (this->im * other->re - this->re * other->im) / abs2;
	this->re = re;
	this->im = im;
}
