/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urb-ilya@yandex.ru>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 18:24:47 by nalysann          #+#    #+#             */
/*   Updated: 2020/07/13 18:24:48 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

#include <stddef.h>
#include <stdlib.h>

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*str;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	if (!(str = malloc(len + 1)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f(s[i]);
		++i;
	}
	str[i] = '\0';
	return (str);
}
