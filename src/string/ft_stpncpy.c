/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stpncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 22:28:23 by nalysann          #+#    #+#             */
/*   Updated: 2021/03/09 22:28:28 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

#include <stddef.h>

char	*ft_stpncpy(char *dst, const char *src, size_t n)
{
	size_t	len;

	len = ft_strnlen(src, n);
	ft_memcpy(dst, src, len);
	dst += len;
	if (len == n)
		return (dst);
	return (ft_memset(dst, '\0', n - len));
}
