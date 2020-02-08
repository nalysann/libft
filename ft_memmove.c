/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:42:09 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:42:12 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*cdst;
	const char	*csrc;

	if (dst == NULL && src == NULL)
		return (NULL);
	cdst = (char *)dst;
	csrc = (const char *)src;
	if (cdst < csrc)
		while (len--)
			*cdst++ = *csrc++;
	else
	{
		cdst += len;
		csrc += len;
		while (len--)
			*--cdst = *--csrc;
	}
	return (dst);
}
