/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:41:35 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:41:37 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*cdst;
	const char	*csrc;

	if (dst == NULL && src == NULL)
		return (NULL);
	cdst = (char *)dst;
	csrc = (const char *)src;
	while (n--)
		*cdst++ = *csrc++;
	return (dst);
}
