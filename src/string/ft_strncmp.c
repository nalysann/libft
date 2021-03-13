/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:50:02 by nalysann          #+#    #+#             */
/*   Updated: 2020/08/27 10:50:03 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	uc1;
	unsigned char	uc2;

	while (n--)
	{
		uc1 = (unsigned char)*s1++;
		uc2 = (unsigned char)*s2++;
		if (uc1 != uc2)
			return (uc1 - uc2);
		if (uc1 == '\0')
			return (0);
	}
	return (0);
}
