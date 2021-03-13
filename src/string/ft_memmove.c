/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:43:41 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/27 10:43:41 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

#include <stddef.h>

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char			*dst_uchar;
	const unsigned char		*src_uchar;

	if (src >= dst || dst >= src + n)
		return (ft_memcpy(dst, src, n));
	dst_uchar = dst + n;
	src_uchar = src + n;
	while (n--)
		*--dst_uchar = *--src_uchar;
	return (dst);
}
