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
#include "ft_error.h"

#include <stddef.h>
#include <stdlib.h>

void		complex_init(t_complex *this, double re, double im)
{
	this->re = re;
	this->im = im;
}

t_complex	complex_init_stack(double re, double im)
{
	t_complex	z;

	z.re = re;
	z.im = im;
	return (z);
}

t_complex	*complex_init_heap(double re, double im)
{
	t_complex	*z;

	z = (t_complex *)malloc(sizeof(t_complex));
	if (z == NULL)
	{
		ft_throw(COMPLEX_ALLOC_MSG, E_COMPLEX_ALLOC);
	}
	z->re = re;
	z->im = im;
	return (z);
}
