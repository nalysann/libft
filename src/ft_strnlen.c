/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urb-ilya@yandex.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 18:26:33 by nalysann          #+#    #+#             */
/*   Updated: 2020/07/13 18:26:35 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static const char	*align_to_lword(const char **ptr, size_t *n)
{
	const char	*char_ptr;

	char_ptr = *ptr;
	while (*n && ((size_t)char_ptr & (sizeof(unsigned long) - 1)))
	{
		if (*char_ptr == '\0')
			return (char_ptr);
		++char_ptr;
		--*n;
	}
	*ptr = char_ptr;
	return (NULL);
}

static const char	*check_zero(const unsigned long *lword)
{
	const char	*char_ptr;

	char_ptr = (const char *)lword;
	if (char_ptr[0] == '\0')
		return (char_ptr);
	if (char_ptr[1] == '\0')
		return (char_ptr + 1);
	if (char_ptr[2] == '\0')
		return (char_ptr + 2);
	if (char_ptr[3] == '\0')
		return (char_ptr + 3);
	if (char_ptr[4] == '\0')
		return (char_ptr + 4);
	if (char_ptr[5] == '\0')
		return (char_ptr + 5);
	if (char_ptr[6] == '\0')
		return (char_ptr + 6);
	if (char_ptr[7] == '\0')
		return (char_ptr + 7);
	return (NULL);
}

size_t				ft_strnlen(const char *s, size_t maxlen)
{
	const char			*s_char;
	const unsigned long	*s_long;
	const unsigned long	*end;
	const char			*ret;

	end = (const unsigned long *)(s + maxlen);
	s_char = s;
	if ((ret = align_to_lword(&s_char, &maxlen)))
		return (ret - s);
	s_long = (unsigned long *)s_char;
	while (s_long < end)
	{
		if ((*s_long - 0x0101010101010101) & ~*s_long & 0x8080808080808080)
			if ((ret = check_zero(s_long)))
				break ;
		++s_long;
	}
	if (!ret || ret > (const char *)end)
		ret = (const char *)end;
	return (ret - s);
}
