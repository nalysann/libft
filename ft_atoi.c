/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:45:41 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/08 14:23:43 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long nbr;
	long sign;
	long up;

	nbr = 0;
	while (ft_isspace(*str))
		++str;
	sign = ((*str == '-') ? -1L : 1L);
	if (*str == '+' || *str == '-')
		++str;
	up = LONG_MAX / 10;
	while (ft_isdigit(*str))
	{
		if (sign > 0 && (nbr > up || (nbr == up && *str > '7')))
			return ((int)LONG_MAX);
		if (sign < 0 && (nbr > up || (nbr == up && *str > '8')))
			return ((int)LONG_MIN);
		nbr = nbr * 10 + (*str++ - '0');
	}
	return ((int)(nbr * sign));
}
