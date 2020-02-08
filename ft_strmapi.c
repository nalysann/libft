/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:49:13 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:49:14 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char		*str;
	const char	*save1;
	char		*save2;

	if (!(s != NULL && f != NULL && (str = ft_strnew(ft_strlen(s)))))
		return (NULL);
	save1 = s;
	save2 = str;
	while (*s != '\0')
	{
		*str = (*f)((unsigned int)(s - save1), *s);
		++s;
		++str;
	}
	return (save2);
}
