/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:50:51 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:50:52 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	numlen_sign(int n)
{
	size_t	len;

	len = ((n <= 0) ? 1 : 0);
	while (n != 0)
	{
		++len;
		n /= 10;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	size_t	len;
	size_t	sign;
	char	*str;

	sign = ((n < 0) ? 1 : 0);
	len = numlen_sign(n);
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (len > sign)
	{
		str[--len] = (char)('0' + ft_abs(n % 10));
		n /= 10;
	}
	if (sign)
		str[--len] = '-';
	return (str);
}
