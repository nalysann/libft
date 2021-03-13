/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 22:28:37 by nalysann          #+#    #+#             */
/*   Updated: 2021/03/09 22:28:40 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

#include <stddef.h>

size_t	ft_strcnt(const char *s, char sep)
{
	size_t	cnt;

	if (*s == '\0')
		return (0);
	if (sep == '\0')
		return (1);
	cnt = 0;
	while (*ft_strjmp(&s, sep) != '\0')
		++cnt;
	return (cnt);
}
