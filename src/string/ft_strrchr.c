/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:51:09 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/27 10:51:10 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	const char		*p;
	unsigned char	uc;

	p = s + ft_strlen(s);
	uc = (unsigned char)c;
	if (c == '\0')
		return ((char *)p);
	while (s < p)
		if (*--p == uc)
			return ((char *)p);
	return (NULL);
}
