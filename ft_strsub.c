/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:49:54 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:49:55 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	size_t l;

	if (s == NULL)
		return (NULL);
	l = ft_strlen(s);
	if (start > l || len > l - start)
		return (NULL);
	return (ft_strndup(s + start, len));
}
