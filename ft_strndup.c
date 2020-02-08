/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:04:46 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/08 13:04:48 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	size_t	len;
	char	*copy;

	len = ft_strnlen(s1, n);
	if (!(copy = malloc(len + 1)))
		return (NULL);
	copy[len] = '\0';
	return ((char *)ft_strncpy(copy, s1, len));
}
