/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:48:50 by nalysann          #+#    #+#             */
/*   Updated: 2020/02/07 15:48:51 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char	*save;

	if (s != NULL && f != NULL)
	{
		save = s;
		while (*s != '\0')
		{
			(*f)((unsigned int)(s - save), s);
			++s;
		}
	}
}
