/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 10:31:32 by nalysann          #+#    #+#             */
/*   Updated: 2020/09/14 10:31:33 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_complex.h"

#include <stddef.h>
#include <stdlib.h>

t_complex	complex_on_stack(double re, double im)
{
	t_complex	z;

	z.re = re;
	z.im = im;
	return (z);
}

t_complex	*complex_on_heap(double re, double im)
{
	t_complex	*z;

	z = (t_complex *)malloc(sizeof(t_complex));
	if (z == NULL)
		return (NULL);
	z->re = re;
	z->im = im;
	return (z);
}

void		complex_set(t_complex *this, double re, double im)
{
	this->re = re;
	this->im = im;
}
