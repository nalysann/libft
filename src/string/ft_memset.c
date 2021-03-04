/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:44:04 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/27 10:44:10 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*uchar_ptr;
	unsigned char	uchar;

	uchar_ptr = b;
	uchar = (unsigned char)c;
	while (len--)
		*uchar_ptr++ = uchar;
	return (b);
}
