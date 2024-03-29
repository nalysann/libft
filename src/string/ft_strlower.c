/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:58:45 by nalysann          #+#    #+#             */
/*   Updated: 2021/08/25 13:58:45 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

void	ft_strlower(char *s)
{
	while (*s)
	{
		*s = (char)ft_tolower(*s);
		++s;
	}
}
