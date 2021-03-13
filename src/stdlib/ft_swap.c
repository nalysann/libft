/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 15:42:45 by nalysann          #+#    #+#             */
/*   Updated: 2020/09/10 16:48:43 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_swap(void *a, void *b, size_t size)
{
	unsigned char	*a_uchar;
	unsigned char	*b_uchar;
	unsigned char	tmp;

	a_uchar = a;
	b_uchar = b;
	while (size--)
	{
		tmp = *a_uchar;
		*a_uchar++ = *b_uchar;
		*b_uchar++ = tmp;
	}
}
