/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urb-ilya@yandex.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 18:10:54 by nalysann          #+#    #+#             */
/*   Updated: 2020/07/13 18:10:56 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static void	*align_to_lword(const unsigned char **ptr, unsigned char uc,
							size_t *n)
{
	const unsigned char	*char_ptr;

	char_ptr = *ptr;
	while (*n && ((size_t)char_ptr & (sizeof(unsigned long) - 1)))
	{
		if (*char_ptr == uc)
			return ((void *)char_ptr);
		++char_ptr;
		--*n;
	}
	*ptr = char_ptr;
	return (NULL);
}

static void	*check_end(const unsigned char *char_ptr, unsigned char uc,
						size_t n)
{
	while (n--)
	{
		if (*char_ptr == uc)
			return ((void *)char_ptr);
		++char_ptr;
	}
	return (NULL);
}

void		*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*char_ptr;
	const unsigned long	*long_ptr;
	unsigned char		uc;
	unsigned long		repeated_uc;
	unsigned long		lword;

	uc = (unsigned char)c;
	char_ptr = (const unsigned char *)s;
	align_to_lword(&char_ptr, uc, &n);
	long_ptr = (const unsigned long *)char_ptr;
	repeated_uc = 0x0101010101010101 * (unsigned long)uc;
	while (n >= sizeof(unsigned long))
	{
		lword = *long_ptr ^ repeated_uc;
		if ((lword - 0x0101010101010101) & ~lword & 0x8080808080808080)
			break ;
		++long_ptr;
		n -= sizeof(unsigned long);
	}
	char_ptr = (const unsigned char *)long_ptr;
	return (check_end(char_ptr, uc, n));
}
