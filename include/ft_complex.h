/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 16:49:21 by nalysann          #+#    #+#             */
/*   Updated: 2020/09/13 17:09:40 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COMPLEX_H
# define FT_COMPLEX_H

# define COMPLEX_ALLOC_MSG	"Memory allocation for complex number failed"

# define E_COMPLEX_ALLOC	1

typedef struct	s_complex
{
	double	re;
	double	im;
}				t_complex;

void			complex_init(t_complex *this, double re, double im);
t_complex		complex_init_stack(double re, double im);
t_complex		*complex_init_heap(double re, double im);

double			complex_abs2(const t_complex *this);

t_complex		complex_add(const t_complex *first, const t_complex *second);
t_complex		complex_sub(const t_complex *first, const t_complex *second);
t_complex		complex_mul(const t_complex *first, const t_complex *second);
t_complex		complex_div(const t_complex *first, const t_complex *second);

void			complex_iadd(t_complex *this, const t_complex *other);
void			complex_isub(t_complex *this, const t_complex *other);
void			complex_imul(t_complex *this, const t_complex *other);
void			complex_idiv(t_complex *this, const t_complex *other);

#endif
