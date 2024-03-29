/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llmin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:48:12 by nalysann          #+#    #+#             */
/*   Updated: 2021/08/25 13:48:12 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

long long	ft_llmin(long long i, long long j)
{
	if (i < j)
		return (i);
	return (j);
}
