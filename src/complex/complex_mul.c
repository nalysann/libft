/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_mul.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 16:57:20 by nalysann          #+#    #+#             */
/*   Updated: 2020/09/13 17:03:31 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_complex.h"

t_complex	complex_mul(const t_complex *first, const t_complex *second)
{
	t_complex	res;

	res.re = first->re * second->re - first->im * second->im;
	res.im = first->re * second->im + first->im * second->re;
	return (res);
}

void		complex_imul(t_complex *this, const t_complex *other)
{
	double	re;
	double	im;

	re = this->re * other->re - this->im * other->im;
	im = this->re * other->im + this->im * other->re;
	this->re = re;
	this->im = im;
}
