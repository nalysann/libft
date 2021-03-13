/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalysann <urbilya@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 22:27:49 by nalysann          #+#    #+#             */
/*   Updated: 2021/03/09 22:27:51 by nalysann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

#include <stddef.h>
#include <stdlib.h>

void	*ft_memdup(const void *s, size_t n)
{
	void	*new;

	new = malloc(n);
	if (new == NULL)
		return (NULL);
	return (ft_memcpy(new, s, n));
}
