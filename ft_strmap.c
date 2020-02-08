/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:49:01 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:49:03 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*str;
	char	*save;

	if (!(s != NULL && f != NULL && (str = ft_strnew(ft_strlen(s)))))
		return (NULL);
	save = str;
	while (*s != '\0')
		*str++ = (*f)(*s++);
	return (save);
}
