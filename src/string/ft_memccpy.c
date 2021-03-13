/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:42:34 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/27 10:42:35 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*dst_uchar;
	const unsigned char		*src_uchar;
	unsigned char			uc;

	dst_uchar = dst;
	src_uchar = src;
	uc = (unsigned char)c;
	while (n--)
		if ((*dst_uchar++ = *src_uchar++) == uc)
			return (dst_uchar);
	return (NULL);
}
