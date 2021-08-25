/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmaxf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:47:43 by nalysann          #+#    #+#             */
/*   Updated: 2021/08/25 13:47:43 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

float	ft_fmaxf(float x, float y)
{
	if (x > y)
		return (x);
	return (y);
}
