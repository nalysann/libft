/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:49:10 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/27 10:49:11 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

#include <stddef.h>
#include <stdlib.h>

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*new;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	new = (char *)malloc(len + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = f(s[i]);
		++i;
	}
	new[i] = '\0';
	return (new);
}
