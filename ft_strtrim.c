/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:50:23 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:50:24 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	beg;
	size_t	end;

	if (s == NULL)
		return (NULL);
	beg = 0;
	while (ft_isblank(s[beg]) || s[beg] == '\n')
		++beg;
	end = ft_strlen(s);
	while (end > beg && --end && (ft_isblank(s[end]) || s[end] == '\n'))
		;
	return (ft_strndup(s + beg, end - beg + 1));
}
