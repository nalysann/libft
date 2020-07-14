/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urb-ilya@yandex.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 18:11:05 by nalysann          #+#    #+#             */
/*   Updated: 2020/07/13 18:11:06 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned long	*s1_long;
	const unsigned long	*s2_long;
	const unsigned char	*s1_char;
	const unsigned char	*s2_char;

	s1_long = (const unsigned long *)s1;
	s2_long = (const unsigned long *)s2;
	while (n > sizeof(unsigned long))
	{
		if (*s1_long != *s2_long)
			break ;
		++s1_long;
		++s2_long;
		n -= sizeof(unsigned long);
	}
	s1_char = (const unsigned char *)s1_long;
	s2_char = (const unsigned char *)s2_long;
	while (n--)
	{
		if (*s1_char != *s2_char)
			return (*s1_char - *s2_char);
		++s1_char;
		++s2_char;
	}
	return (0);
}
