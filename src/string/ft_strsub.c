/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:51:39 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/27 10:51:41 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string/ft_string.h"

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*substr;

	if (len == SIZE_MAX)
	{
		return (NULL);
	}
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
	{
		return (NULL);
	}
	substr[len] = '\0';
	return (ft_strncpy(substr, s + start, len));
}
