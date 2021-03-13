/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:49:25 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/27 10:49:28 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

#include <stddef.h>

int		ft_strncasecmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char		*s1_uchar;
	const unsigned char		*s2_uchar;
	int						res;

	s1_uchar = (const unsigned char *)s1;
	s2_uchar = (const unsigned char *)s2;
	if (n == 0 || s1_uchar == s2_uchar)
		return (0);
	while (n-- && (res = ft_tolower(*s1) - ft_tolower(*s2++)) == 0)
		if (*s1_uchar++ == '\0')
			break ;
	return (res);
}
