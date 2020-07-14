/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urb-ilya@yandex.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 17:59:58 by nalysann          #+#    #+#             */
/*   Updated: 2020/07/13 17:59:59 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

#include <stddef.h>
#include <stdlib.h>

static size_t	numlen_sign(int n)
{
	size_t	len;

	len = (n <= 0 ? 1 : 0);
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

	sign = (n < 0 ? 1 : 0);
	len = numlen_sign(n);
	if (!(str = malloc(len + 1)))
		return (NULL);
	str[len] = '\0';
	while (len > sign)
	{
		str[--len] = (char)('0' + ft_abs(n % 10));
		n /= 10;
	}
	if (sign != 0)
		str[--len] = '-';
	return (str);
}
