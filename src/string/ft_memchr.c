/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:42:45 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/27 10:42:47 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_uchar;
	unsigned char		uc;

	s_uchar = s;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*s_uchar == uc)
			return ((void *)s_uchar);
		++s_uchar;
	}
	return (NULL);
}
